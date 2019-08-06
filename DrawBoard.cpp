#include "stdafx.h"
#include "DrawBoard.h"

CDrawBoard::CDrawBoard()
	:m_cptOrigin(10,10)
	,m_scale(1.0)
	,m_ptOffset(0,0)
{
}


CDrawBoard::~CDrawBoard()
{
}

void CDrawBoard::Draw(CDC* pDC)
{
	CPen pen, * pOldPen;
	pen.CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
	pOldPen = pDC->SelectObject(&pen);

	
	
	for (point_list::iterator ite = m_ptList.begin();ite != m_ptList.end(); ++ite)
	{
		if (ite == m_ptList.begin())
		{
			pDC->MoveTo(m_ptBase.x + ((*ite)->m_x + m_ptOffset.m_x) * m_scale, m_ptBase.y - ((*ite)->m_x + m_ptOffset.m_x) * m_scale);
		}
		
		pDC->LineTo(m_ptBase.x + ((*ite)->m_x + m_ptOffset.m_x) * m_scale, m_ptBase.y - ((*ite)->m_x + m_ptOffset.m_x) * m_scale);

	}
	pDC->SelectObject(pOldPen);
}

void CDrawBoard::UpdateSize(int width, int height)
{
	m_ptBase.x = m_cptOrigin.x;
	m_ptBase.y = height - m_cptOrigin.y;
}

int CDrawBoard::AddPoint(sptPoint spPoint)
{
	m_ptList.push_back(spPoint);
	return 0;
}

bool CDrawBoard::ResetPoints()
{
	m_ptList.clear();
	return true;
}
