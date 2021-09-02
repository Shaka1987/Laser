#include "stdafx.h"
#include "NCExchange.h"
#include "FactoryCommunication.h"




CNCExchange::CNCExchange() noexcept
{
	m_pCommunication = CFactoryCommunication::Create(COMMUNICATION_TYPE::COM_MODEBUS);
	Init();
}

bool CNCExchange::Init()
{
	return Connect();
}

BOOL CNCExchange::Connect()
{
	return m_pCommunication->Connect();
}

BOOL CNCExchange::Disconnect()
{
	return m_pCommunication->Disconnect();
}


std::string CNCExchange::GetParameters()
{
	std::string data_parameter;
	std::string name = "SYS.PAR";
	m_pCommunication->ReadFile(name.c_str(), name.size(), data_parameter);
	return data_parameter;
}

INT32 CNCExchange::GetParameterInt32(WORD index, WORD line)
{
	return m_pCommunication->GetParameterInt32(index, line);
}

double CNCExchange::GetParameterFloat64(WORD index, WORD line)
{
	return m_pCommunication->GetParameterFloat64(index, line);
}
