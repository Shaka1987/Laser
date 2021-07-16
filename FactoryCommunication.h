#pragma once

#include "ICommunication.h"

enum class COMMUNICATION_TYPE { COM_RTU, COM_TCP};
class CFactoryCommunication
{
	CFactoryCommunication();
	~CFactoryCommunication();
	ICommunication* Create(COMMUNICATION_TYPE type);
};

