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
	ResetGraphes();
	m_groupList.clear();
}

void CLaserProg::Init(tstring_view fileName)
{
	m_groupList.clear();
	ifstream i(fileName.data());
	string str;
	while (getline(i, str))
	{
		m_groupList.push_back(boost::make_shared<CGraph>(str));
	}
	i.close();
	Convert();
}

void CLaserProg::ResetGraphes()
{
	m_groupList.clear();
}

BOOL CLaserProg::Convert()
{
	TRACE(_T("Base class CLaserProg"));
	return 0;
}
