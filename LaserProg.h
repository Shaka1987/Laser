#pragma once
#include <afx.h>
#include <vector>
#include "GraphPoint.h"
using namespace std;
class CLaserProg
{
private:
	CString m_strNC;

protected:
	vector<CGraphPoint> m_vGrphic;
public:
	CLaserProg();
	~CLaserProg();
	virtual BOOL Convert();
};

