#pragma once
#include "LaserProg.h"
#include <boost/smart_ptr.hpp>

class CFactoryLaserProg
{
public:
	CFactoryLaserProg() {};
	~CFactoryLaserProg() {};
	static boost::shared_ptr<CLaserProg> Create(tstring strName);
	
};

