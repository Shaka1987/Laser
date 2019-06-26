#include "stdafx.h"
#include "FactoryLaserProg.h"

boost::shared_ptr<CLaserProg> CFactoryLaserProg::Create(CString strName)
{
	return boost::shared_ptr<CLaserProg>();
}
