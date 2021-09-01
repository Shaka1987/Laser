#include "stdafx.h"
#include "ModBus.h"

WORD CModBus::Connect()
{
	uint32_t old_response_to_sec;
	uint32_t old_response_to_usec;

	m_ctx = modbus_new_rtu("COM4", 9600, 'O', 8, 1);
	modbus_set_slave(m_ctx, 10);

	//modbus_set_debug(ctx, TRUE);
	//modbus_set_error_recovery(ctx, MODBUS_ERROR_RECOVERY_LINK | 	MODBUS_ERROR_RECOVERY_PROTOCOL);


	modbus_get_response_timeout(m_ctx, &old_response_to_sec, &old_response_to_usec);
	if (modbus_connect(m_ctx) == -1) {
		fprintf(stderr, "Connection failed: %s\n", modbus_strerror(errno));
		AfxMessageBox(_T("Connection failed"));
		modbus_free(m_ctx);
	}
	return 0;
}

WORD CModBus::Disconnect()
{
	return 0;
}


bool CModBus::SubjectAddress(WORD address, WORD type, WORD subIndex, WORD index2/* = 0*/, WORD const* const pData /*= nullptr*/, WORD len_data/* = 0*/, WORD index1/* = 0*/)
{
	uint16_t* p_write_registers = new uint16_t[len_data + 4];
	memset(p_write_registers, 0, (len_data+4)* 2);

	p_write_registers[TYPE] = type;			//功能码
	p_write_registers[INDEX1] = index1;				//索引1	通道
	p_write_registers[INDEX2] = index2;				//索引2
	p_write_registers[SUBINDEX] = subIndex;				//子索引

	if (pData != nullptr && len_data != 0)
	{
		memcpy(p_write_registers + 4, pData, len_data*2);
	}
	int rc = modbus_write_registers(m_ctx, address, len_data + 4, p_write_registers);
	delete p_write_registers;
	if(-1 != rc)
	{
		return true;
	}
	else {
		//to do add log.
		return false;
	}

}

bool CModBus::ReadAddress(WORD address, WORD * const pData, WORD len_data, WORD type, WORD index2, WORD subIndex, WORD index1)
{
	WORD* p_read_registers = new WORD[len_data + 4];
	bool return_state = false;

	memset(p_read_registers, 0, (len_data + 4) * 2);
	int rc = modbus_read_registers(m_ctx, address, len_data + 4, p_read_registers);
	if (rc == -1)
	{
		//to do add log
		goto return_label;
	}
	if (0 != type)	//validate
	{
		if (type != p_read_registers[TYPE] || index1 != p_read_registers[INDEX1] || index2 != p_read_registers[INDEX2] || subIndex != p_read_registers[SUBINDEX])
		{
			//to do add log "validate failed"
			goto return_label;
		}
	}

	memcpy(pData, p_read_registers + 4, len_data * 2);
	return_state = true;

return_label:
	delete p_read_registers;
	return return_state;
}

bool CModBus::ReadData(WORD address, WORD* const p_output_data, WORD len_output_data, WORD type, WORD subIndex, WORD index2/* = 0*/, WORD const* const p_input_data /*= nullptr*/, WORD len_input_data /*= 0*/, WORD index1 /*= 0*/)
{
	bool rb = SubjectAddress(address, type,  subIndex, index2, p_input_data, len_input_data, index1);
	if (rb)
	{
		if (ReadAddress(address, p_output_data, len_output_data, type, index2, subIndex, index1))
			return true;
	}
	return false;
}

bool CModBus::ReadFile(const char* pName, WORD len, std::string& data)
{
	uint16_t tab_read_registers[101] = { 0 };
	if (!SubjectAddress(0x2000, NC_OPEN_FILE, 2, 0, (WORD*)pName, len / 2 + 1))	//open file
		return false;

	int  count = 1;
	size_t pos = std::string::npos;
	std::string return_data;
	do
	{
		if (!ReadData(0x2000, tab_read_registers, 100, NC_READ_FILE, count++)) // read file
			return false;
		std::string read_data = (char*)(tab_read_registers + 1);
		pos = read_data.rfind("[END]");
		return_data += read_data;
		TRACE(CString(read_data.c_str()));
	} while (std::string::npos == pos);

	WORD zero = 0;
	if (!SubjectAddress(0x2000, NC_CLOSE_FILE, 0, 0, &zero, 1))	//close file
		return false;

	data = return_data;
	return true;
}
INT32 CModBus::GetParameterInt32(WORD index, WORD line)
{
	INT32 data;
	ReadData(0x1000, (WORD *)&data, 2, NC_R_PARA_SYS_INT, line, index);
	return data;
}