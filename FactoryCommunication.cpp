#include "stdafx.h"
#include "FactoryCommunication.h"
#include "ModBus.h"


CFactoryCommunication::CFactoryCommunication()
{
}

CFactoryCommunication::~CFactoryCommunication()
{
}

ICommunication* CFactoryCommunication::Create(COMMUNICATION_TYPE type)
{
	switch(type)
	{
	case COMMUNICATION_TYPE::COM_MODEBUS:
		return new CModBus();
	default:
		return nullptr;
	}
}