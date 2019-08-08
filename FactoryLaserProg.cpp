#include "stdafx.h"
#include "FactoryLaserProg.h"
#include "CCAMProg.h"
#include "NCProg.h"

boost::shared_ptr<CLaserProg> CFactoryLaserProg::Create(CString strName)
{
	boost::shared_ptr<CLaserProg> sptProg;
	if (strName.Find(_T(".CAM") )== strName.GetLength() - 4)
	{
		sptProg = boost::make_shared<CCAMProg>();
	}
	else if (strName.Find(_T(".NC")) == strName.GetLength() - 3)
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
