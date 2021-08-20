#pragma once
#include "ModeBusRTU.h"
enum class MODBUS_TYPE {MODBUS_RTU, MODBUS_TCP};
class CFactoryModBus
{
public:
	CFactoryModBus() {};
	~CFactoryModBus() {};
	static CModBus* CreateModBus(MODBUS_TYPE type)
	{
		switch (type)
		{
		case MODBUS_TYPE::MODBUS_RTU:
			return new ModeBusRTU();
			break;
		case MODBUS_TYPE::MODBUS_TCP:
		default:
			return nullptr;
			break;
		}
	};
};

