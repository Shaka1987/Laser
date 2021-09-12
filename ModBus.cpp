#include "stdafx.h"
#include "ModBus.h"
#include <iomanip>

using namespace std;
CModBus::CModBus()
	:m_ctx(nullptr)
	,scl(logging::keywords::channel = "CModBus")

{
}

bool CModBus::Connect()
{
	uint32_t old_response_to_sec;
	uint32_t old_response_to_usec;

	m_ctx = modbus_new_rtu("COM4", 9600, 'O', 8, 1);
	modbus_set_slave(m_ctx, 10);

	//modbus_set_debug(ctx, TRUE);
	//modbus_set_error_recovery(ctx, MODBUS_ERROR_RECOVERY_LINK | 	MODBUS_ERROR_RECOVERY_PROTOCOL);


	modbus_get_response_timeout(m_ctx, &old_response_to_sec, &old_response_to_usec);
	if (modbus_connect(m_ctx) == -1) {
		BOOST_LOG_SEV(scl, trace) << __FUNCTION__ << ":" << __LINE__
			<< "Connection failed: " << modbus_strerror(errno);
		AfxMessageBox(_T("Connection failed"));
		modbus_free(m_ctx);
		return false;
	}
	m_status = COMMUNICATION_STATUS::CS_CONNECTED;
	return true;
}


bool CModBus::Disconnect()
{
	return 0;
}

std::stringstream CModBus::OutPutData(WORD const* const pData, WORD len_data)
{
	std::stringstream ss;
	for (int i = 0; i < len_data; i++)
	{
		ss << " "  << pData[i];
	}
	return ss;
}

bool CModBus::SetAddress(WORD address, WORD type, WORD subIndex, WORD index2/* = 0*/, WORD const* const pData /*= nullptr*/, WORD len_data/* = 0*/, WORD index1/* = 0*/)
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


	BOOST_LOG_SEV(scl, trace) << __FUNCTION__ << ":" << __LINE__ <<
		" Type:" << type << " Index1:" << index1 << " index2:" << index2 << " subindex:" << subIndex <<
		" return:" << rc << OutPutData(pData, len_data).str();


	delete[] p_write_registers;
	if(-1 != rc)
	{

		return true;
	}
	else {
		BOOST_LOG_SEV(scl, error) << __FUNCTION__ << ":" << __LINE__ << "SetAddress failed";
		return false;
	}

}

bool CModBus::SubjectAddress(std::string name,WORD address, WORD type, WORD subIndex, WORD index2/* = 0*/, WORD const* const pData /*= nullptr*/, WORD len_data/* = 0*/, WORD index1/* = 0*/)
{
	bool bRet = SetAddress(address, type, subIndex, index2, pData, len_data, index1);
	m_mapSubjectAddress.insert(make_pair(name, address));
	return bRet;
}

bool CModBus::ReadAddress(WORD address, WORD * const pData, WORD len_data, WORD type, WORD subIndex, WORD index2,WORD index1)
{
	WORD* p_read_registers = new WORD[len_data + 4];
	bool return_state = false;

	memset(p_read_registers, 0, (len_data + 4) * 2);
	int rc = modbus_read_registers(m_ctx, address, len_data + 4, p_read_registers);
	BOOST_LOG_SEV(scl, trace) << __FUNCTION__ << ":" << __LINE__ 
		<< " Type:" << p_read_registers[TYPE] << " Index1:" << p_read_registers[INDEX1] 
		<< " index2:" << p_read_registers[INDEX2] << " subindex:" << p_read_registers[SUBINDEX]
		<< " return:" << rc << OutPutData(p_read_registers + 4, len_data).str();
	if (rc == -1)
	{
		BOOST_LOG_SEV(scl, error) << __FUNCTION__ << ":" << __LINE__ << "ReadAddress failed";
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
	delete[] p_read_registers;
	return return_state;
}

bool CModBus::ReadData(WORD address, WORD* const p_output_data, WORD len_output_data, WORD type, WORD subIndex, WORD index2/* = 0*/, WORD const* const p_input_data /*= nullptr*/, WORD len_input_data /*= 0*/, WORD index1 /*= 0*/)
{
	bool rb = SetAddress(address, type,  subIndex, index2, p_input_data, len_input_data, index1);
	if (rb)
	{
		if (ReadAddress(address, p_output_data, len_output_data, type, subIndex, index2, index1))
			return true;
	}
	return false;
}

bool CModBus::FindSubjectAddress(std::string name, WORD &address)
{
	address = 0x1000;
	for (auto add : m_mapSubjectAddress)
	{
		if (add.second == address)
		{
			address++;
		}
		if (add.first == name)
		{
			address = add.second;
			BOOST_LOG_SEV(scl, trace) << __FUNCTION__ << ":" << __LINE__
				<< "Function " << name << "has subject in address 0x" 
				<< setiosflags(ios::uppercase) << hex << "0X" << setw(2) << setfill('0') << add.second;
			return true;
		}
	}
	BOOST_LOG_SEV(scl, trace) << __FUNCTION__ << ":" << __LINE__
		<< "Don't find Function " << name << ", the address "
		<< setiosflags(ios::uppercase) << hex << "0X" << setw(2) << setfill('0') << address
		<< "is empty, can be used to subject";
	return false;
}

bool CModBus::ReadFile(const char* pName, WORD len, std::string& data)
{
	uint16_t tab_read_registers[101] = { 0 };
	if (!SetAddress(0x2000, NC_OPEN_FILE, 2, 0, (WORD*)pName, len / 2 + 1))	//open file
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
		BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__ << read_data.c_str();
	} while (std::string::npos == pos);

	WORD zero = 0;
	if (!SetAddress(0x2000, NC_CLOSE_FILE, 0, 0, &zero, 1))	//close file
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

double CModBus::GetParameterFloat64(WORD index, WORD line)
{
	INT64 data;
	ReadData(0x1000, (WORD*)&data, 4, NC_R_PARA_SYS_DOUBLE, line, index);
	return (double)data;
}

bool CModBus::ReadCoordinateData(double* pData, WORD len, std::string name, WORD line, WORD index)
{
	WORD address = 0;
	if (!FindSubjectAddress(name, address))
	{
		SubjectAddress(name, address, NC_R_DIA_INT, 1, line);
	}
	if (ReadAddress(address, (WORD*)pData, len * 2, NC_R_DIA_INT, 1, line))
	{
		BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__
			<< name
			<< "X " << pData[0] << "Y " << pData[1]
			<< "Z " << pData[2] << "Z " << pData[3];

		return true;
	}
	return false;
}

bool CModBus::GetCoordinates(double* pData, WORD len, COORDINATES_TYPE type, WORD index)
{
	switch (type)
	{
	case COORDINATES_TYPE::MACHINE:
		return ReadCoordinateData(pData, len, "machine_coordinate", 302, index);
	case COORDINATES_TYPE::INCREASE:
		//to do
		return 0.0;
	case COORDINATES_TYPE::RESIDUAL:
		//to do
		return 0.0;
	case COORDINATES_TYPE::WORKPIECE:
		return ReadCoordinateData(pData, len,"workpiece_coordinate", 300, index);
	default:
		break;
	}

	BOOST_LOG_SEV(scl, error) << __FUNCTION__ << ":" << __LINE__ << "Unexpected oorrdinate type";
	return false;
}