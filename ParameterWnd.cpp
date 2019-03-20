// ParameterWnd.cpp : implementation file
//

#include "stdafx.h"
#include "laserMachine.h"
#include "ParameterWnd.h"


// CParameterWnd

IMPLEMENT_DYNAMIC(CParameterWnd, CDockablePane)

CParameterWnd::CParameterWnd()
{

}

CParameterWnd::~CParameterWnd()
{
}


BEGIN_MESSAGE_MAP(CParameterWnd, CDockablePane)

	ON_WM_ERASEBKGND()
END_MESSAGE_MAP()



// CParameterWnd message handlers




BOOL CParameterWnd::OnEraseBkgnd(CDC* pDC)
{
	CRect rectClient;
	CBrush brushBackGround;
	GetClientRect(rectClient);

	brushBackGround.CreateSolidBrush(RGB(0xff, 0xff, 0xff));
	pDC->FillRect(rectClient, &brushBackGround);
	return TRUE;
}
