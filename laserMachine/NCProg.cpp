#include "stdafx.h"
#include "NCProg.h"
#include "AdditionalFunction.h"
void CNCProg::InitGFunction(UCHAR groupGFunction[])
{
	groupGFunction[G_TraceMode] = 0;					//G0
	groupGFunction[G_Increase] = 0;						//G91
	groupGFunction[G_Position] = 0;						//not G92
}
void CNCProg::SaveTypeData(char type, string strData, UCHAR groupG[], sptPoint currentPoint)
{
	switch (type)
	{
	case 'X':
	{
		
		double fValue = stringToNum<double>(strData);
		if (groupG[G_Increase] == 0 || groupG[G_Position] == 1)
		{
			currentPoint->SetX(fValue);
		}
		else
		{
			currentPoint->SetX(fValue + currentPoint->GetX());
		}
		BOOST_LOG_SEV(scl, info) << __FUNCTION__ << ":" << __LINE__ << "X" << currentPoint->GetX();
	}
	break;
	case 'Y':
	{
		double fValue = stringToNum<double>(strData);
		if (groupG[G_Increase] == 0 || groupG[G_Position] == 1)
		{
			currentPoint->SetY(fValue);
		}
		else
		{
			currentPoint->SetY(fValue + currentPoint->GetX());

		}
		BOOST_LOG_SEV(scl, info) << __FUNCTION__ << ":" << __LINE__ << "Y" << currentPoint->GetY();
	}
	break;
	case 'Z':
		break;
	case 'G':
	{
		//to do val with dot
		int val = stringToNum<int>(strData);
		switch (val)
		{
		case 0:
		case 1:
		case 2:
		case 3:
			groupG[G_TraceMode] = val;
			currentPoint->SetGType(val);
			break;
		case 92:
			groupG[G_Position] = 1;
			currentPoint->SetStart(true);
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
	}
	
	case 'R':
		break;
	case 'N':
		//todo save line(N) information

		BOOST_LOG_SEV(scl, info) << __FUNCTION__ << ":" << __LINE__ << "N" << strData;
		break;
	default:
		break;
	}
}
CNCProg::CNCProg()
:scl(logging::keywords::channel = "CNCProg")
{
}
CNCProg::~CNCProg()
{
}
BOOL CNCProg::Convert()
{
//	ResetGraphes();

	////test
	//m_ptList.push_back(boost::make_shared<CGraphPoint>(0.0, 0.0, true));
	//m_ptList.push_back(boost::make_shared<CGraphPoint>(100.0, 100.0));

	auto current_point = boost::make_shared<CGraphPoint>();
	current_point->SetStart(true);
	UCHAR groupGFunction[64] = { 0 };

	for (auto graph : m_groupList)
	{
		
		graph->AddPoint(current_point);
		current_point = CoverntStr2Point(graph->GetCode(), current_point, groupGFunction);
		graph->AddPoint(current_point);

		
		groupGFunction[G_Position] = 0;
		current_point->SetStart(false);
	}
	return 0;
}

sptPoint CNCProg::CoverntStr2Point(sptString str, sptPoint current_point, UCHAR groupG[])
{
	char type = 0;
	string strData;
	sptPoint point = boost::make_shared<CGraphPoint>(*current_point.get());
	//todo use spilt regex or ranges

	for (auto c : *str)
	{
		if (!isgraph(c))
			continue;

		if (isalpha(c))
		{
			//Save the privous type data 
			SaveTypeData(type, strData, groupG, point);
			
			//start a new type
			strData.erase();
			type = toupper(c);
		}
		else 
		{
			if(c == ';')
			{
				//the content after ; will not be handled
				//save status
				break;
			}
			else
			{
				strData += c;
			}
		}
	}
	SaveTypeData(type, strData, groupG, point);
	return point;
}
