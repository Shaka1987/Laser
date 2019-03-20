// OperateWnd.cpp : implementation file
//

#include "stdafx.h"
#include "laserMachine.h"
#include "OperateWnd.h"
#include "afxdialogex.h"


// COperateWnd dialog

IMPLEMENT_DYNAMIC(COperateWnd, CPaneDialog)

COperateWnd::COperateWnd(CWnd* pParent /*=nullptr*/)
	/*: CPaneDialog(IDD_OPERATE, pParent)*/
{
	
}

COperateWnd::~COperateWnd()
{
}

void COperateWnd::DoDataExchange(CDataExchange* pDX)
{
	CPaneDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(COperateWnd, CPaneDialog)
	ON_WM_CTLCOLOR()
	ON_WM_PAINT()
	ON_WM_ERASEBKGND()
END_MESSAGE_MAP()


// COperateWnd message handlers


HBRUSH COperateWnd::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CPaneDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	
	
	return hbr;
}


void COperateWnd::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   
}


BOOL COperateWnd::OnEraseBkgnd(CDC* pDC)
{
	CRect rectClient;
	CBrush brushBackGround;
	GetClientRect(rectClient);

	brushBackGround.CreateSolidBrush(RGB(0xff, 0xff, 0xff));
	pDC->FillRect(rectClient, &brushBackGround);
	return TRUE;
	//return CPaneDialog::OnEraseBkgnd(pDC);
}
