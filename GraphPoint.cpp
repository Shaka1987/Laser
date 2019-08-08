#include "stdafx.h"
#include "GraphPoint.h"

CGraphPoint::CGraphPoint()
{
}

CGraphPoint::CGraphPoint(double x, double y, bool bStart/* = false */)
	: m_x(x)
	, m_y(y)
	,m_bStart(bStart)
{
	
}

CGraphPoint::~CGraphPoint()
{
}

