#include "stdafx.h"
#include "NCExchange.h"
#include "FactoryCommunication.h"




void CNCExchange::Init()
{
	m_pCommunication = CFactoryCommunication::Create(COMMUNICATION_TYPE::COM_MODEBUS);
}

WORD CNCExchange::GetParameterInt(WORD index, WORD line)
{
	return m_pCommunication->GetParameter(index, line);
}

