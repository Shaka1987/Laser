#include "stdafx.h"
#include "FactoryLaserProg.h"
#include "CCAMProg.h"
#include "NCProg.h"

boost::shared_ptr<CLaserProg> CFactoryLaserProg::Create(CString strName)
{
	if (strName.Find(_T(".CAM") )== strName.GetLength() - 4)
	{
		return boost::shared_ptr<CLaserProg>(new CCAMProg());
	}

	if (strName.Find(_T(".NC")) == strName.GetLength() - 3)
	{
		return boost::shared_ptr<CLaserProg>(new CNCProg());
	}
	return boost::shared_ptr<CLaserProg>(new CLaserProg());
}
