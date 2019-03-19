// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface
// (the "Fluent UI") and is provided only as referential material to supplement the
// Microsoft Foundation Classes Reference and related electronic documentation
// included with the MFC C++ library software.
// License terms to copy, use or distribute the Fluent UI are available separately.
// To learn more about our Fluent UI licensing program, please visit
// https://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "laserMachine.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWndEx)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWndEx)
	ON_WM_CREATE()
	ON_COMMAND(ID_TOOLS_OPTIONS, &CMainFrame::OnOptions)
	ON_COMMAND(ID_FILE_PRINT, &CMainFrame::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CMainFrame::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CMainFrame::OnFilePrintPreview)
	ON_UPDATE_COMMAND_UI(ID_FILE_PRINT_PREVIEW, &CMainFrame::OnUpdateFilePrintPreview)
	ON_WM_SETTINGCHANGE()
	ON_MESSAGE(ID_MESSAGE_UPDATE, &CMainFrame::OnCmdUpdate)
	ON_COMMAND(ID_VIEW_PARAMETERWND, &CMainFrame::OnViewParameterwnd)
	ON_UPDATE_COMMAND_UI(ID_VIEW_PARAMETERWND, &CMainFrame::OnUpdateViewParameterwnd)
END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame() noexcept
{
	// TODO: add member initialization code here
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWndEx::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	m_wndRibbonBar.Create(this);
	m_wndRibbonBar.LoadFromResource(IDR_RIBBON);

	//create status bar
	if (!CreateStatusBar())
	{
		TRACE0("Failed to create statusbar!!\n");
		return -1;
	}
	
	// enable Visual Studio 2005 style docking window behavior
	CDockingManager::SetDockingMode(DT_SMART);
	// enable Visual Studio 2005 style docking window auto-hide behavior
	EnableAutoHidePanes(CBRS_ALIGN_ANY);
	EnableLoadDockState(FALSE);
	// create docking windows
	if (!CreateDockingWindows())
	{
		TRACE0("Failed to create docking windows\n");
		return -1;
	}


	EnableDocking(CBRS_ALIGN_ANY);


	// set the visual manager used to draw all user interface elements
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows7));
	m_wndRibbonBar.SetWindows7Look(TRUE);

	return 0;
}

void CMainFrame::OpenProgramFile(CString strFileName)
{
	m_wndOutput.LoadProgram(strFileName);
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWndEx::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}

BOOL CMainFrame::CreateOutPutWnd()
{
	BOOL bNameValid;
	// Create output window
	CString strOutputWnd;
	bNameValid = strOutputWnd.LoadString(IDS_OUTPUT_WND);
	ASSERT(bNameValid);
	if (!m_wndOutput.Create(strOutputWnd, this, CRect(0, 0, 100, 100), TRUE, ID_VIEW_OUTPUTWND, WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_BOTTOM | CBRS_FLOAT_MULTI))
	{
		return FALSE; // failed to create
	}

	SetOutPutWindowIcons(theApp.m_bHiColorIcons);


	return TRUE;
}

BOOL CMainFrame::CreateParamerWnd()
{
	if (!m_wndParameter.Create(_T("参数"), this, CRect(0, 0, 150, 100), TRUE, ID_VIEW_PARAMETERWND, WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_LEFT | CBRS_FLOAT_MULTI/*, AFX_CBRS_REGULAR_TABS,  AFX_CBRS_CLOSE| AFX_CBRS_AUTOHIDE*/))
	{
		return FALSE; // failed to create
	}
	return TRUE;
}

BOOL CMainFrame::CreatePLCWnd()
{
	if (!m_wndPLC.Create(_T("PLC 梯形图"), this, CRect(0, 0, 150, 100), TRUE, ID_VIEW_PLCWND, WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_LEFT | CBRS_FLOAT_MULTI))
	{
		return FALSE;
	}
	return TRUE;
}

BOOL CMainFrame::CreateOperateWnd()
{
	if (!m_wndOperate.Create(_T("操作面板"), this, TRUE, MAKEINTRESOURCE(IDD_OPERATE), WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_RIGHT | CBRS_FLOAT_MULTI, ID_VIEW_OPERATEWND))
	{
		return FALSE;
	}
	return TRUE;
}


BOOL CMainFrame::CreateDockingWindows()	 
{
	if (!CreateOutPutWnd())
	{
		TRACE0("Failed to create Output window\n");
		return FALSE;
	}
	if (!CreateParamerWnd())
	{
		TRACE0("Failed to create Parameter window\n");
		return FALSE;
	}
	if (!CreatePLCWnd())
	{
		TRACE0("Failed to create PLC window\n");
		return FALSE;
	}
	if (!CreateOperateWnd())
	{
		TRACE0("Failed to create Operate window\n");
		return FALSE;
	}

	m_wndOutput.EnableDocking(CBRS_ALIGN_ANY);
	m_wndParameter.EnableDocking(CBRS_ALIGN_ANY);
	m_wndPLC.EnableDocking(CBRS_ALIGN_ANY);
	m_wndOperate.EnableDocking(CBRS_ALIGN_ANY);

	DockPane(&m_wndOutput);
	DockPane(&m_wndParameter);
	DockPane(&m_wndPLC);
	DockPane(&m_wndOperate);
	ShowPane(&m_wndOperate,TRUE, FALSE, TRUE);
	m_wndParameter.DockToWindow(&m_wndPLC, CBRS_TOP);

	return TRUE;
}

void CMainFrame::SetOutPutWindowIcons(BOOL bHiColorIcons)
{
	HICON hOutputBarIcon = (HICON) ::LoadImage(::AfxGetResourceHandle(), MAKEINTRESOURCE(bHiColorIcons ? IDI_OUTPUT_WND_HC : IDI_OUTPUT_WND), IMAGE_ICON, ::GetSystemMetrics(SM_CXSMICON), ::GetSystemMetrics(SM_CYSMICON), 0);
	m_wndOutput.SetIcon(hOutputBarIcon, FALSE);

}

void CMainFrame::AddElementToStatusBar(UINT id, UINT tipID, BOOL bExtennd)
{
	CString strTip;
	CMFCRibbonStatusBarPane *pPane = nullptr;
	BOOL bNameValid = strTip.LoadStringW(tipID);
	ASSERT(bNameValid);
	pPane = new CMFCRibbonStatusBarPane(id, strTip, FALSE);
	pPane->SetToolTipText(strTip);
	if (bExtennd)
	{
		m_wndStatusBar.AddExtendedElement(pPane, strTip);
	}
	else
	{
		m_wndStatusBar.AddElement(pPane, strTip);
	}	
}
BOOL CMainFrame::CreateStatusBar()
{
	if (!m_wndStatusBar.Create(this))
	{
		return FALSE;      // fail to create
	}
	AddElementToStatusBar(ID_STATUSBAR_MACHINE_STATUS, IDS_MACHINE_STATUS, FALSE);
	AddElementToStatusBar(ID_STATUSBAR_AXES_POSITION, IDS_AXES_POSITION, FALSE);
	AddElementToStatusBar(ID_STATUSBAR_MOUSE_POSITION, IDS_MOUSE_POSITION, TRUE);

	return TRUE;
}

void CMainFrame::UpdateMousePosition(CPoint point)
{
	CMFCRibbonStatusBarPane *pPane = (CMFCRibbonStatusBarPane *)m_wndStatusBar.FindByID(ID_STATUSBAR_MOUSE_POSITION);
	if (pPane == nullptr)
		return;
	CString strMousePosition;
	strMousePosition.Format(_T("%d:%d"),point.x, point.y);
	pPane->SetText(strMousePosition);
	pPane->Redraw();
	OutputDebugString(strMousePosition);
}

// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWndEx::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWndEx::Dump(dc);
}
#endif //_DEBUG


// CMainFrame message handlers




void CMainFrame::OnOptions()
{
	CMFCRibbonCustomizeDialog *pOptionsDlg = new CMFCRibbonCustomizeDialog(this, &m_wndRibbonBar);
	ASSERT(pOptionsDlg != nullptr);

	pOptionsDlg->DoModal();
	delete pOptionsDlg;
}


void CMainFrame::OnFilePrint()
{
	if (IsPrintPreview())
	{
		PostMessage(WM_COMMAND, AFX_ID_PREVIEW_PRINT);
	}
}

void CMainFrame::OnFilePrintPreview()
{
	if (IsPrintPreview())
	{
		PostMessage(WM_COMMAND, AFX_ID_PREVIEW_CLOSE);  // force Print Preview mode closed
	}
}

void CMainFrame::OnUpdateFilePrintPreview(CCmdUI* pCmdUI)
{
	pCmdUI->SetCheck(IsPrintPreview());
}

void CMainFrame::OnSettingChange(UINT uFlags, LPCTSTR lpszSection)
{
	CFrameWndEx::OnSettingChange(uFlags, lpszSection);
	m_wndOutput.UpdateFonts();
}


LRESULT CMainFrame::OnCmdUpdate(WPARAM wparam, LPARAM lparam)
{
	UINT type = (UINT)wparam;
	switch (type)
	{
	default:
		break;
	}
	return 0;
}


void CMainFrame::OnViewParameterwnd()
{
	m_wndParameter.ShowWindow(m_wndParameter.IsVisible() ? SW_HIDE : SW_SHOW);
	RecalcLayout(FALSE);
}


void CMainFrame::OnUpdateViewParameterwnd(CCmdUI *pCmdUI)
{
	pCmdUI->SetCheck(m_wndParameter.IsVisible());
}
