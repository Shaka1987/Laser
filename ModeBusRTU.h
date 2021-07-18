#pragma once
#include "ICommunication.h"
class ModeBusRTU :
	public ICommunication
{

public:
	ModeBusRTU();
	~ModeBusRTU();
	DWORD Connect();
};

