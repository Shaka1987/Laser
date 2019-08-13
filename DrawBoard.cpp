#include "stdafx.h"
#include "DrawBoard.h"
#include "laserMachineDoc.h"

#include "laserMachineView.h"

CDrawBoard::CDrawBoard(CView* pView)
	:m_pView(pView)

	, m_cptOrigin(10, 10)
	, m_scale(1.0)
	, m_ptOffset(0, 0)
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
	
	auto pProg = ((ClaserMachineDoc*)m_pView->GetDocument())->GetCurrentProg();
	if (pProg)
	{
		auto pList = pProg->GetPointList();
		for (auto pt : *pList)
		{
			if (pt->IsStart())
				pDC->MoveTo(m_ptBase.x + (pt->GetX() + m_ptOffset.GetX()) * m_scale, m_ptBase.y - (pt->GetY() + m_ptOffset.GetY()) * m_scale);
			else
				pDC->LineTo(m_ptBase.x + (pt->GetX() + m_ptOffset.GetX()) * m_scale, m_ptBase.y - (pt->GetY() + m_ptOffset.GetY()) * m_scale);
		}
	}
	
	pDC->SelectObject(pOldPen);
}

void CDrawBoard::UpdateSize(int width, int height)
{
	m_ptBase.x = m_cptOrigin.x;
	m_ptBase.y = height - m_cptOrigin.y;
}
