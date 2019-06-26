#include "stdafx.h"
#include "GraphPoint.h"

CGraphPoint::CGraphPoint()
{
}

CGraphPoint::~CGraphPoint()
{
}

void CGraphPoint::SetX(double x)
{
	m_x = x;
}

void CGraphPoint::SetY(double y)
{
	m_y = y;
}

void CGraphPoint::SetZ(double z)
{
	m_z = z;
}

void CGraphPoint::SetPoint(double x, double y, double z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

void CGraphPoint::SetPointXY(double x, double y)
{
	m_x = x;
	m_y = y;
}
