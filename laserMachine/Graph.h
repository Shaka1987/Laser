#pragma once

#include "GraphPoint.h"
#include "LogSystem.h"
using sptString = boost::shared_ptr<std::string>;
using sptPoint = boost::shared_ptr<CGraphPoint>;

using point_list = std::list<sptPoint>;

class CGraph
{
public:
	CGraph()
		:scl(logging::keywords::channel = "CGraph") {};
	virtual ~CGraph() {};
	virtual BOOL setup(sptString) { return true; };
private:

	src::severity_channel_logger<severity_level, std::string> scl;
	sptString m_sptProgram;
	point_list m_ptList;
	inline point_list* GetPointList() { return &m_ptList; };
};

