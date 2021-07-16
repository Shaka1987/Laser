#pragma once
#include "ICommunication.h"
class ModeBusRTU :
	public ICommunication
{
	ModeBusRTU();
	~ ModeBusRTU();
	DWORD Connect();
};

