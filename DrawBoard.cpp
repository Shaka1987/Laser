#include "stdafx.h"
#include "DrawBoard.h"

CDrawBoard::CDrawBoard()
	:m_ptBase(2,2)
	,m_ptOffset(10,10)
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
	pDC->MoveTo(m_ptBase.x + 0, m_ptBase.y - 0);
	pDC->LineTo(m_ptBase.x + 100, m_ptBase.y - 100);
	pDC->SelectObject(pOldPen);
}

void CDrawBoard::UpdateSize(int width, int height)
{
	m_ptBase.x = m_ptOffset.x;
	m_ptBase.y = height - m_ptOffset.y;
}