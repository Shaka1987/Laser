#pragma once
#include <afx.h>
#include <list>
#include <boost/smart_ptr.hpp>
#include "GraphPoint.h"
#include <string_view>

using namespace std;
class CLaserProg
{
private:
	string m_strNC;

	using sptPoint = boost::shared_ptr<CGraphPoint>;
	using sptString = boost::shared_ptr<string>;
	using point_list = std::list<sptPoint>;
	using string_list = std::list<sptString>;
protected:
	point_list m_ptList;
	string_list m_strList;
public:
	CLaserProg();
	~CLaserProg();
	void Init(tstring_view fileName);
	void ResetPoints();
	virtual BOOL Convert();
	inline point_list* GetPointList() { return &m_ptList; };
	inline string_list* GetProgramList() { return &m_strList; };
};

