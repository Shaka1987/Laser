#pragma once
#include <afx.h>
#include <list>
#include <boost/smart_ptr.hpp>
#include <string_view>
#include "Graph.h"

using namespace std;
//
//using string_list = std::list<sptString>;
using sptGraph = boost::shared_ptr<CGraph>;
using graph_list = std::list<sptGraph>;

class CLaserProg
{
public:
	CLaserProg(tstring_view fileName);
	~CLaserProg();

	void Build();

	inline graph_list* GetProgramList() { return &m_graphList; };

protected:
	sptGraph CreateGraph(sptString string);
	graph_list m_graphList;
	tstring_view m_fileName;
};

