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
END_MESSAGE_MAP()


// COperateWnd message handlers
