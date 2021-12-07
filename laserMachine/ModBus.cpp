#include "stdafx.h"
#include "ModBus.h"
#include <iomanip>
#include <SetupAPI.h>
#include <devguid.h>


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
	list<string> list_com = ScanCom();
	
	if (list_com.empty())
	{
		BOOST_LOG_SEV(scl, error) << __FUNCTION__ << ":" << __LINE__ << "There is no com to connection";
		return false;
	}

	for (auto com : list_com)
	{
		m_ctx = modbus_new_rtu(com.c_str(), 57600, 'O', 8, 1);
		modbus_set_slave(m_ctx, 10);

		//modbus_set_debug(ctx, TRUE);
		//modbus_set_error_recovery(ctx, MODBUS_ERROR_RECOVERY_LINK | 	MODBUS_ERROR_RECOVERY_PROTOCOL);


		modbus_get_response_timeout(m_ctx, &old_response_to_sec, &old_response_to_usec);
		if (modbus_connect(m_ctx) == -1) 
		{
			BOOST_LOG_SEV(scl, error) << __FUNCTION__ << ":" << __LINE__ << com <<" connection failed: " << modbus_strerror(errno);
			modbus_free(m_ctx);
			continue;
		}
		else
		{
			m_status = COMMUNICATION_STATUS::CS_CONNECTED;
			WORD slaveNo = GetParameterInt32(2116, 1);
			
			if (slaveNo == 10)
			{
				m_com = com;
				BOOST_LOG_SEV(scl, info) << __FUNCTION__ << ":" << __LINE__ << com << " is connected successfully";
				break;
			}
			else
			{
				BOOST_LOG_SEV(scl, error) << __FUNCTION__ << ":" << __LINE__ << com << " wrong connection!";

				modbus_close(m_ctx);
				modbus_free(m_ctx);

				m_status = COMMUNICATION_STATUS::CS_UNCONNECTED;
			}
		}
	}
	return (m_status == COMMUNICATION_STATUS::CS_CONNECTED);
	
}


bool CModBus::Disconnect()
{
	boost::mutex::scoped_lock lock(mu);
	modbus_close(m_ctx);
	modbus_free(m_ctx);
	BOOST_LOG_SEV(scl, info) << __FUNCTION__ << ":" << __LINE__ << "Cancle the connection!";

	m_status = COMMUNICATION_STATUS::CS_UNCONNECTED;
	return 0;
}

list<string> CModBus::ScanCom()
{
	HDEVINFO hDevInfo = SetupDiGetClassDevsA(&GUID_DEVCLASS_PORTS, NULL, NULL, 0);
	list<string> com_list;
	if (hDevInfo)
	{
		SP_DEVINFO_DATA DeviceInfoData;
		DeviceInfoData.cbSize = sizeof(SP_DEVINFO_DATA);
		for (int i = 0; SetupDiEnumDeviceInfo(hDevInfo, i, &DeviceInfoData); i++)
		{
			DCB dcb;
			GetCommState(HANDLE(DeviceInfoData.DevInst), &dcb);

			DWORD DataT = 0;
			char buffer[256] = { 0 };
			DWORD buffersize = sizeof(buffer);

			memset(buffer, 0, 256);
			while (!SetupDiGetDeviceRegistryPropertyA(hDevInfo, &DeviceInfoData, SPDRP_FRIENDLYNAME, &DataT, (PBYTE)buffer, buffersize, &buffersize))
			{
				if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
				{
					BOOST_LOG_SEV(scl, error) << __FUNCTION__ << ":" << __LINE__ << "ERROR_INSUFFICIENT_BUFFER";
					// Change the buffer size.   
					//if (buffer) LocalFree(buffer);
				}
				else
				{
					// Insert error handling here. 
					BOOST_LOG_SEV(scl, error) << __FUNCTION__ << ":" << __LINE__ << "read firendly name faile {"<< GetLastError()<<"}";
				}
				break;
			}
			BOOST_LOG_SEV(scl, info) << __FUNCTION__ << ":" << __LINE__ << "Friend Name is " << buffer;
			string name = buffer;
			auto start_pos = name.find_last_of('(');
			auto end_pos = name.find_last_of(')');
			com_list.push_back(name.substr(start_pos + 1, end_pos - start_pos - 1));
		}
		if (GetLastError() != NO_ERROR && GetLastError() != ERROR_NO_MORE_ITEMS)
		{
			BOOST_LOG_SEV(scl, error) << __FUNCTION__ << ":" << __LINE__ << "error happened in scanning com {" << GetLastError() << "}";
		}

		// Cleanup   
		SetupDiDestroyDeviceInfoList(hDevInfo);
	}
	else
	{
		BOOST_LOG_SEV(scl, error) << __FUNCTION__ << ":" << __LINE__<< "Can't find devinfo: ";
	}

	return com_list;
	
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
	boost::mutex::scoped_lock lock(mu);
	if (m_status == COMMUNICATION_STATUS::CS_UNCONNECTED)
		return false;
	uint16_t* p_write_registers = new uint16_t[len_data + 4];
	memset(p_write_registers, 0, (len_data+4)* 2);

	p_write_registers[TYPE] = type;			//功能码
	p_write_registers[INDEX1] = index1;				//索引1	通道
	p_write_registers[INDEX2] = index2;				//索引2
	p_write_registers[SUBINDEX] = subIndex;				//子索引
	
	BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__
		<< "this thread" << boost::this_thread::get_id();
	if (pData != nullptr && len_data != 0)
	{
		memcpy(p_write_registers + 4, pData, len_data*2);
	}

	int rc = modbus_write_registers(m_ctx, address, len_data + 4, p_write_registers);


	BOOST_LOG_SEV(scl, trace) << __FUNCTION__ << ":" << __LINE__ 
		<< "this thread" << boost::this_thread::get_id()
		<< " Address:" << setiosflags(ios::uppercase) << hex << "0X" << setw(2) << setfill('0') << address
		<< " Type:" << type << " Index1:" << index1 << " index2:" << index2 << " subindex:" << subIndex
		<< " return:" << rc << OutPutData(pData, len_data).str();


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
	m_mapSubjectAddress.insert(make_pair(address, name));
	bool bRet = SetAddress(address, type, subIndex, index2, pData, len_data, index1);
	return bRet;
}

bool CModBus::ReadAddress(WORD address, WORD * const pData, WORD len_data, WORD type, WORD subIndex, WORD index2,WORD index1)
{
	boost::mutex::scoped_lock lock(mu);
	if (m_status == COMMUNICATION_STATUS::CS_UNCONNECTED)
		return false;
	WORD* p_read_registers = new WORD[len_data + 4];
	bool return_state = false;

	BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__
		<< "this thread" << boost::this_thread::get_id();
	memset(p_read_registers, 0, (len_data + 4) * 2);
	int rc = modbus_read_registers(m_ctx, address, len_data + 4, p_read_registers);
	//一次通讯50毫秒左右
	BOOST_LOG_SEV(scl, trace) << __FUNCTION__ << ":" << __LINE__ 
		<< "this thread" << boost::this_thread::get_id()
		<< " Address:" << setiosflags(ios::uppercase) << hex << "0X" << setw(2) << setfill('0') << address
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
		if (add.first == address)
		{
			address+=0x10;
		}
		if (address > 0x1FF0)
		{
			address = 0; 
			BOOST_LOG_SEV(scl, error) << __FUNCTION__ << ":" << __LINE__
				<< "Subject group is full!!! ";
			return false;
		}
		if (add.second == name)
		{
			address = add.first;
			BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__
				<< "Function " << name << "has subject in address 0x" 
				<< setiosflags(ios::uppercase) << hex << "0X" << setw(2) << setfill('0') << add.second;
			return true;
		}
	}
	BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__
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

bool CModBus::ReadCoordinateData(INT32 * pData, WORD len, std::string name, WORD DiaNo)
{
	WORD address = 0;

	if (!FindSubjectAddress(name, address))
	{
		SubjectAddress(name, address, NC_R_DIA_INT, 1, DiaNo);
	}
	if (ReadAddress(address, (WORD*)pData, len * 2, NC_R_DIA_INT, 1, DiaNo))
	{
		BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__
			<< name
			<< "X " << pData[0] << "Y " << pData[1]
			<< "Z " << pData[2] << "Z " << pData[3];

		return true;
	}
	return false;
}
bool CModBus::ReadPLCData(unsigned char* pData, WORD len, std::string name, char table, WORD index, WORD* out_address /*=nullptr*/, bool bSubject/*=true*/)
{
	WORD address = 0;

	if (!FindSubjectAddress(name, address))
	{
		if (address == 0)
		{
			return false;
		}
		if (bSubject)
		{
			SubjectAddress(name, address, NC_WR_PLC, index, (WORD)table);
		}
		else
		{
			SetAddress(address, NC_WR_PLC, index, (WORD)table);
		}
	}
	if (ReadAddress(address, (WORD*)pData, len/2, NC_WR_PLC, index, (WORD)table))
	{
		BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__
			<< " plc table" << table
			<< pData[0] << pData[1] << pData[2] << pData[3]
			<< pData[4] << pData[5] << pData[6] << pData[7]
			<< pData[8] << pData[9] << pData[10] << pData[11]
			<< pData[12] << pData[13] << pData[14] << pData[15]
			<< pData[16] << pData[17] << pData[18] << pData[19];
		if(out_address)
		{
			*out_address = address;
		}
		return true;
	}
	return false;
}

bool CModBus::SetPLCData(std::string name, char table, WORD index, unsigned char data)
{
	WORD address = 0;
	WORD original_data = 0;
	WORD original_data1 = 0;
	if (ReadPLCData((unsigned char *)&original_data, 2, name, table, index, &address, false))
	{
		unsigned char *pData = (unsigned char*)&original_data;
		BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__
			<< " plc table" << table << "original data is" << original_data;
		pData[0] = data;
		if (SetAddress(address, NC_WR_PLC, index, (WORD)table, &original_data, 1))
		{
			ReadAddress(address, &original_data1, 1, NC_WR_PLC, index, (WORD)table);
			BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__
				<< "Set plc table" << table << "data" << data << "successfully";
		}
	}
	return false;
}
bool CModBus::SetPLCBit(std::string name, char table, WORD index, unsigned char bit)
{
	WORD address = 0;
	WORD original_data = 0;
	WORD original_data1 = 0;
	if (ReadPLCData((unsigned char*)&original_data, 2, name, table, index, &address, false))
	{
		unsigned char* pData = (unsigned char*)&original_data;
		BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__
			<< " plc table" << table << "original data is" << original_data;
		pData[0] = pData[0] | (1 << bit);
		if (SetAddress(address, NC_WR_PLC, index, (WORD)table, &original_data, 1))
		{
			ReadAddress(address, &original_data1, 1, NC_WR_PLC, index, (WORD)table);
			BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__
				<< "Set plc table" << table << "data" << original_data1 << "successfully";
		}
	}
	return false;
}


bool CModBus::GetCoordinates(INT32  * pData, WORD len, COORDINATES_TYPE type)
{
	switch (type)
	{
	case COORDINATES_TYPE::MACHINE:
		return ReadCoordinateData(pData, len, "machine_coordinate", 302);
	case COORDINATES_TYPE::WORKPIECE:
		return ReadCoordinateData(pData, len,"workpiece_coordinate", 300);
	case COORDINATES_TYPE::INCREASE:
		//to do
		//return 0.0;
	case COORDINATES_TYPE::RESIDUAL:
		//to do
		//return 0.0;
	default:
		break;
	}

	BOOST_LOG_SEV(scl, error) << __FUNCTION__ << ":" << __LINE__ << "Unexpected oorrdinate type";
	return false;
}

bool CModBus::GetPLCData(unsigned char* pData, WORD len, PLC_TABLE_TYPE type)
{
	switch (type)
	{
	case PLC_TABLE_TYPE::X:
		for (int i = 0; i < len; i += MAX_EXCHANGE_LEN)
		{
			string name = "plc_table_X" + to_string(i);
			WORD count = i + MAX_EXCHANGE_LEN < len ? MAX_EXCHANGE_LEN : len - i;
			if (!ReadPLCData(pData + i, count, name, 'X', i))
				return false;
		}
		return true;
	case PLC_TABLE_TYPE::Y:
		for (int i = 0; i < len; i += MAX_EXCHANGE_LEN)
		{
			string name = "plc_table_Y" + to_string(i);
			WORD count = i + MAX_EXCHANGE_LEN < len ? MAX_EXCHANGE_LEN : len - i;
			if (!ReadPLCData(pData + i, count, name, 'Y', i))
				return false;
		}
		return true;
	case PLC_TABLE_TYPE::F:
		for (int i = 0; i < len; i += MAX_EXCHANGE_LEN)
		{
			string name = "plc_table_F" + to_string(i);
			WORD count = i + MAX_EXCHANGE_LEN < len ? MAX_EXCHANGE_LEN : len - i;
			if (!ReadPLCData(pData+i, count, name, 'F', i))
				return false;
		}
		return true;
//	case PLC_TABLE_TYPE::D:
//		break;
//	case PLC_TABLE_TYPE::R:
//		break;
	case PLC_TABLE_TYPE::G:
		for (int i = 0; i < len; i += MAX_EXCHANGE_LEN)
		{
			string name = "plc_table_G" + to_string(i);
			WORD count = i + MAX_EXCHANGE_LEN < len ? MAX_EXCHANGE_LEN : len - i;
			if (!ReadPLCData(pData + i, count, name, 'G', i))
				return false;
		}
		return true;
//	case PLC_TABLE_TYPE::A:
//		break;
//	case PLC_TABLE_TYPE::K:
//		break;
	default:
		break;
	}
	return false;
}
