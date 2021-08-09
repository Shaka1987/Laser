#include "stdafx.h"
#include "LaserProg.h"
#include <fstream>
#include <string>
using namespace std;

CLaserProg::CLaserProg()
{
}


CLaserProg::~CLaserProg()
{
}

void CLaserProg::Init(tstring_view fileName)
{
	m_strList.clear();
	ifstream i(fileName.data());
	string str;
	while (getline(i, str))
	{
		m_strList.push_back(boost::make_shared<string>(str));
	}
	i.close();

}

void CLaserProg::ResetPoints()
{
	m_ptList.clear();
}

BOOL CLaserProg::Convert()
{
	TRACE(_T("Base class CLaserProg"));
	return 0;
}
