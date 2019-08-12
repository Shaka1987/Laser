#include "stdafx.h"
#include "NCProg.h"

BOOL CNCProg::Convert()
{
	ResetPoints();

	////test
	//m_ptList.push_back(boost::make_shared<CGraphPoint>(0.0, 0.0, true));
	//m_ptList.push_back(boost::make_shared<CGraphPoint>(100.0, 100.0));

	auto current_point = boost::make_shared<CGdiObject>();
	for (auto str : m_strList)
	{
		double value = 0.0;
		char type = 0;
		for (auto c : *str)
		{
			if (!isgraph(c))
				continue;
			if (c = ';')//the content after ; will not be handled
			{
				//save status 
				break;
			}

			if (isalpha(c))
			{
				if (type)
				{
					//SetValue()
					type = 0;
				}
				type = toupper(c);
			}
			else if (c == '-')
			{

			}
			else if (isdigit(c))
			{

			}
		}
	}
	TRACE(_T("class CNCProg"));
	return 0;
}

//setvalue(char type, double value,)
//{
//
//
//	switch (type)
//	{
//	case 'X':
//		break;
//	case 'Y':
//		break;
//	case 'Z':
//		break;
//	case 'G':
//		break;
//	case 'R':
//		break;
//	case 'N':
//		break;
//	default:
//		break;
//	}
//}