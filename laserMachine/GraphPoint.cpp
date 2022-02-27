#include "stdafx.h"
#include "GraphPoint.h"

CGraphPoint::CGraphPoint()
	:m_x(0.0)
	,m_y(0.0)
	,m_z(0.0)
	,m_bStart(false)
	,m_bValid(false)
	, m_typeG(0xff)
{
}

CGraphPoint::CGraphPoint(double x, double y, bool bStart/* = false */)
	: m_x(x)
	, m_y(y)
	, m_z(0.0)
	, m_bStart(bStart)
	, m_bValid(true)
	, m_typeG(0xff)
{
	
}

CGraphPoint::~CGraphPoint()
{
}

