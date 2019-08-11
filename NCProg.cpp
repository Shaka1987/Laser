#include "stdafx.h"
#include "NCProg.h"

BOOL CNCProg::Convert()
{
	ResetPoints();


	m_ptList.push_back(boost::make_shared<CGraphPoint>(0.0, 0.0, true));
	m_ptList.push_back(boost::make_shared<CGraphPoint>(100.0, 100.0));


	//int i = 0;
	//for (auto str : m_strList)
	//{
	//	TRACE("%d %s\n", i++, str->data());
	//}
	//TRACE(_T("class CNCProg"));
	return 0;
}
