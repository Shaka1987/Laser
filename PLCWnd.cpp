// PLCWnd.cpp : implementation file
//

#include "stdafx.h"
#include "laserMachine.h"
#include "PLCWnd.h"


// CPLCWnd

IMPLEMENT_DYNAMIC(CPLCWnd, CDockablePane)

CPLCWnd::CPLCWnd()
{

}

CPLCWnd::~CPLCWnd()
{
}


BEGIN_MESSAGE_MAP(CPLCWnd, CDockablePane)
	ON_WM_ERASEBKGND()
END_MESSAGE_MAP()



// CPLCWnd message handlers




BOOL CPLCWnd::OnEraseBkgnd(CDC* pDC)
{
	CRect rectClient;
	CBrush brushBackGround;
	GetClientRect(rectClient);

	brushBackGround.CreateSolidBrush(RGB(0xff, 0xff, 0xff));
	pDC->FillRect(rectClient, &brushBackGround);
	return TRUE;
}
