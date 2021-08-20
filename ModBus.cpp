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

WORD CModBus::GetParameter(WORD index, WORD line)
{
	return 0;
}
bool CModBus::SubjectData(WORD address, WORD type, WORD index2, WORD subIndex, WORD const* pData, WORD len_data, WORD index1)
{
	uint16_t* p_write_registers = new uint16_t[len_data + 4];
	memset(p_write_registers, 0, (len_data+4)* 2);

	p_write_registers[0] = type;			//功能码
	p_write_registers[1] = index1;				//索引1	通道
	p_write_registers[2] = index2;				//索引2
	p_write_registers[3] = subIndex;				//子索引

	if (pData != nullptr && len_data != 0)
	{
		memcpy(p_write_registers + 4, pData, len_data*2);
	}
	if(-1 != modbus_write_registers(m_ctx, address, len_data + 4, p_write_registers))
	{
		return true;
	}
	else {
		//to do add log.
		return false;
	}

}

bool CModBus::ReadData(WORD type, WORD index1, WORD index2, WORD subIndex, WORD const* pData)
{
	uint16_t tab_w_registers[8] = { 0 };
	return false;
}

bool CModBus::ReadFile(WORD open_method, CHAR* pName, WORD const* pData)
{
	//int len_file_name = strlen(pName);
	//int len_buf = len_file_name/2 + 1 +4;
	//uint16_t* p_write_registers = new uint16_t[len_buf];
	//uint16_t tab_read_registers[101] = { 0 };
	//memset(p_write_registers, 0, len_buf * 2);

	//p_write_registers[0] = 20;			//功能码
	//p_write_registers[1] = 0;				//索引1	通道
	//p_write_registers[2] = 0;				//索引2
	//p_write_registers[3] = 2;				//子索引
	//memcpy(p_write_registers + 4, pName, len_file_name);


	//int rc = modbus_write_registers(m_ctx, 0x2000, len_buf, p_write_registers);
	//uint16_t i = 1;
	//do
	//{
	//	memset(tab_w_registers, 0, 8 * 2);
	//	tab_w_registers[0] = 22;			//功能码
	//	tab_w_registers[1] = 0;				//索引1	通道
	//	tab_w_registers[2] = 0;				//索引2
	//	tab_w_registers[3] = i++;				//子索引
	//	//memcpy(tab_w_registers + 4, name, 8);


	//	rc = modbus_write_registers(m_ctx, 0x2000, 4, tab_w_registers);

	//	memset(tab_r_registers, 0, 101 * 2);
	//	rc = modbus_read_registers(m_ctx, 0x2004, 100, tab_r_registers);
	//	TRACE(CString((char*)(tab_r_registers + 1)));
	//} while (rc == 100);
	return false;
}
