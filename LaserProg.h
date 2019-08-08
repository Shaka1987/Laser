#pragma once
#include <afx.h>
#include <list>
#include <boost/smart_ptr.hpp>
#include "GraphPoint.h"

using namespace std;
class CLaserProg
{
private:
	CString m_strNC;

	using sptPoint = boost::shared_ptr<CGraphPoint>;
	using point_list = std::list<sptPoint>;
protected:
	point_list m_ptList;
public:
	CLaserProg();
	~CLaserProg();
	void Init(CString fileName);
	virtual BOOL Convert();
	inline point_list* GetList() { return &m_ptList; };
};

