#include "stdafx.h"
#include "FactoryCommunication.h"

CFactoryCommunication::CFactoryCommunication()
{
}

CFactoryCommunication::~CFactoryCommunication()
{
}

ICommunication* CFactoryCommunication::Create(COMMUNICATION_TYPE type)
{
	//switch(type)
	//{
	//case COMMUNICATION_TYPE::COM_RTU:


	//}
	return nullptr;
}