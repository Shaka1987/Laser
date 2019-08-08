#include "stdafx.h"
#include "NCProg.h"

BOOL CNCProg::Convert()
{
	m_ptList.push_back(boost::make_shared<CGraphPoint>(0.0, 0.0, true));
	m_ptList.push_back(boost::make_shared<CGraphPoint>(100.0, 100.0));
	TRACE(_T("class CNCProg"));
	return 0;
}
