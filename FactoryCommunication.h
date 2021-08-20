#pragma once

#include "ICommunication.h"

enum class COMMUNICATION_TYPE { COM_MODEBUS, COM_OTHER};
class CFactoryCommunication
{
	CFactoryCommunication();
	~CFactoryCommunication();

public:
	static ICommunication* Create(COMMUNICATION_TYPE type);
};

