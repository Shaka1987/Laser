#include "stdafx.h"
#include "GraphPoint.h"

CGraphPoint::CGraphPoint()
	:m_x(0.0)
	,m_y(0.0)
	,m_z(0.0)
	,m_bStart(false)
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

