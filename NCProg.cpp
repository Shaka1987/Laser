#include "stdafx.h"
#include "NCProg.h"
void CNCProg::InitGFunction(UCHAR groupGFunction[])
{
	groupGFunction[G_TraceMode] = 0;					//G0
	groupGFunction[G_Increase] = 0;						//G91
	groupGFunction[G_Position] = 0;						//not G92
}
BOOL CNCProg::Convert()
{
	ResetPoints();

	////test
	//m_ptList.push_back(boost::make_shared<CGraphPoint>(0.0, 0.0, true));
	//m_ptList.push_back(boost::make_shared<CGraphPoint>(100.0, 100.0));

	auto current_point = boost::make_shared<CGraphPoint>();
	UCHAR groupGFunction[64] = { 0 };
	for (sptString str : m_strList)
	{
		m_ptList.push_back(CoverntStr2Point(str, current_point, groupGFunction));
	}
	TRACE(_T("class CNCProg"));
	return 0;
}

sptPoint CNCProg::CoverntStr2Point(sptString str, sptPoint current_point, UCHAR groupG[])
{
	sptPoint point = boost::make_shared<CGraphPoint>();
	int value = 0;
	char type = 0;
	bool bNeg = false;
	short dotPos = 0;

	

	for (auto c : *str)
	{
		if (!isgraph(c))
			continue;

		if (isalpha(c))
		{
			double fValue = (double)value / (double)dotPos;
			switch (type)
			{
			case 'X':
				if (groupG[G_Increase] == 0 || groupG[G_Position] == 1)
				{
					point->SetX(fValue);
					current_point->SetX(fValue);
				}
				//else
				//{
				//	//point->SetX(fValue +)
				//	return;
				//}
				break;
			case 'Y':
				break;
			case 'Z':
				break;
			case 'G':
				switch (auto val = value / dotPos)
				{
				case 0:
				case 1:
				case 2:
				case 3:
					groupG[G_TraceMode] = val;
					break;
				case 92:
					groupG[G_Position] = 1;
					break;
				case 90:
					groupG[G_Increase] = 0;
					break;
				case 91:
					groupG[G_Increase] = 1;
					break;
				default:
					break;
				}
				break;
			case 'R':
				break;
			case 'N':
				break;
			default:
				break;
			}			
			value = 0;
			bNeg = false;
			dotPos = 0;
			type = toupper(c);
		}
		else if (isdigit(c))
		{
			value = value * 10 + (c - '0');
			if (dotPos != 0) dotPos*=10;
		}
		else
		{
			switch (c)
			{
			case ';'://the content after ; will not be handled
				//save status 
				return point;
			case '-':
				bNeg = true;
				break;
			case '.':
				dotPos = 1;
				break;
			default:
				break;
			}
		}
	}
	return point;
}
