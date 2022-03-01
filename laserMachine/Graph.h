#pragma once

#include "GraphPoint.h"

using namespace std;

using sptPoint = boost::shared_ptr<CGraphPoint>;
using sptString = boost::shared_ptr<string>;
using point_list = std::list<sptPoint>;
using string_list = std::list<sptString>;

class CGraph
{
private:
	point_list m_ptList;
	sptString m_code;
public:
	CGraph(string str) { m_code = boost::make_shared<string>(str); };
	inline point_list* GetPointList() { return &m_ptList; };
	inline void AddPoint(sptPoint pt) { m_ptList.push_back(pt); };
	sptString GetCode() { return m_code; };

};

