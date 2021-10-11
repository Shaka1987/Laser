// MonitorWnd.cpp : implementation file
//

#include "stdafx.h"
#include "laserMachine.h"
#include "MonitorWnd.h"
#include "afxdialogex.h"


// CMonitorWnd dialog

IMPLEMENT_DYNAMIC(CMonitorWnd, CPaneDialog)

CMonitorWnd::CMonitorWnd(CWnd* pParent /*=nullptr*/)
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

}

CMonitorWnd::~CMonitorWnd()
{
}

void CMonitorWnd::DoDataExchange(CDataExchange* pDX)
{
	CPaneDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMonitorWnd, CPaneDialog)
END_MESSAGE_MAP()


// CMonitorWnd message handlers
