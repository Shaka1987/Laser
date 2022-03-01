#pragma once
#include <afx.h>
#include <list>
#include <boost/smart_ptr.hpp>
#include <string_view>
#include "Graph.h"


using sptGraph = boost::shared_ptr<CGraph>;
using group_list = std::list<sptGraph>;

class CLaserProg
{
public:
	CLaserProg();
	~CLaserProg();

	void Init(tstring_view fileName);
	void ResetGraphes();
	virtual BOOL Convert();
	inline group_list* GetGraphList() { return &m_groupList; };
protected:
	group_list m_groupList;
};

