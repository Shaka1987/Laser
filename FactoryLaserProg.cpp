#include "stdafx.h"
#include "FactoryLaserProg.h"
#include "CCAMProg.h"
#include "NCProg.h"

boost::shared_ptr<CLaserProg> CFactoryLaserProg::Create(tstring strName)
{
	boost::shared_ptr<CLaserProg> sptProg;
	if (strName.find(_T(".CAM"))== strName.length() - 4)
	{
		sptProg = boost::make_shared<CCAMProg>();
	}
	else if (strName.find(_T(".NC")) == strName.length() - 3)
	{
		sptProg = boost::make_shared<CNCProg>();
	}
	else
	{
		sptProg = boost::make_shared<CLaserProg>();
	}
	sptProg->Init(strName);
	return sptProg;
}
