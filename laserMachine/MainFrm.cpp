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
#include "laserMachineDoc.h"

#include "MainFrm.h"
#include "ExRibbonContextCaption.h"
#include "CPLCRibbonButton.h"

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
	ON_COMMAND_RANGE(ID_MODE_START, ID_MODE_END, &CMainFrame::OnSwitchMode)
	//ON_COMMAND_RANGE(ID_BUTTON_XPLUS, ID_BUTTON_XMINUS,&CMainFrame::OnRibbonButton)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame() noexcept
	: scl(logging::keywords::channel = "ClaserMachineView")
{

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
	m_wndRibbonBar.ShowContextCategories(ID_MACHINE_STATUS);
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
	SetTimer(0, 200, nullptr);
	
	CMFCRibbonCategory* pCategory = m_wndRibbonBar.GetCategory(1);
	CMFCRibbonPanel* pPanel = pCategory->GetPanel(0);
	pPanel->Insert(new  CPLCRibbonButton(ID_BUTTON_XMINUS, _T("X-"), 1, 1), 0);
	CRect rc = pPanel->GetRect();
	pPanel->RecalcWidths(m_wndRibbonBar.GetDC(), rc.Height());
	pCategory->ReposPanels(m_wndRibbonBar.GetDC());
	return 0;
}

void CMainFrame::UpdateProgram()
{
	m_wndOutput.UpdateProgram(((ClaserMachineDoc*)GetActiveDocument())->GetCurrentProg());
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

BOOL CMainFrame::CreateParamerWnd(const CRect &rect)
{
	if (!m_wndParameter.Create(_T("参数"), this, rect, TRUE, ID_VIEW_PARAMETERWND, WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_LEFT | CBRS_FLOAT_MULTI))
	{
		return FALSE; // failed to create
	}
	return TRUE;
}

BOOL CMainFrame::CreatePLCWnd(const CRect& rect)
{
	if (!m_wndPLC.Create(_T("PLC 梯形图"), this, rect, TRUE, ID_VIEW_PLCWND, WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_LEFT | CBRS_FLOAT_MULTI))
	{
		return FALSE;
	}
	return TRUE;
}

BOOL CMainFrame::CreateOperateWnd()
{
	if (!m_wndOperate.Create(_T("操作面板"), this, TRUE, MAKEINTRESOURCE(IDD_OPERATE), WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_RIGHT | CBRS_FLOAT_MULTI, IDD_OPERATE, AFX_CBRS_REGULAR_TABS,  AFX_CBRS_CLOSE| AFX_CBRS_AUTOHIDE))
	{
		return FALSE;
	}
	return TRUE;
}

BOOL CMainFrame::CreateMonitorWnd()
{
	if (!m_wndMonitor.Create(_T("监控面板"), this, TRUE, MAKEINTRESOURCE(IDD_MONITOR), WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_RIGHT | CBRS_FLOAT_MULTI, IDD_MONITOR, AFX_CBRS_REGULAR_TABS, AFX_CBRS_CLOSE | AFX_CBRS_AUTOHIDE))
	{
		return FALSE;
	}
	return TRUE;
}


BOOL CMainFrame::CreateDockingWindows()	 
{
	CRect rectLeft(0, 0, 600, 100);
	if (!CreateOutPutWnd())
	{
		TRACE0("Failed to create Output window\n");
		return FALSE;
	}
	if (!CreateParamerWnd(rectLeft))
	{
		TRACE0("Failed to create Parameter window\n");
		return FALSE;
	}
	if (!CreatePLCWnd(rectLeft))
	{
		TRACE0("Failed to create PLC window\n");
		return FALSE;
	}
	if (!CreateOperateWnd())
	{
		TRACE0("Failed to create Operate window\n");
		return FALSE;
	}
	if (!CreateMonitorWnd())
	{
		TRACE0("Failed to create Monitor window\n");
		return FALSE;
	}
	m_wndOutput.EnableDocking(CBRS_ALIGN_ANY);
	m_wndParameter.EnableDocking(CBRS_ALIGN_ANY);
	m_wndPLC.EnableDocking(CBRS_ALIGN_ANY);
	m_wndOperate.EnableDocking(CBRS_ALIGN_ANY);
	m_wndMonitor.EnableDocking(CBRS_ALIGN_ANY);

	EnableDocking(CBRS_ALIGN_ANY);

	DockPane(&m_wndOutput);
	DockPane(&m_wndParameter);
	DockPane(&m_wndPLC);
	DockPane(&m_wndOperate);
	DockPane(&m_wndMonitor);

	m_wndParameter.DockToWindow(&m_wndPLC, CBRS_TOP);
	ShowPane(&m_wndOperate, TRUE, FALSE, TRUE);
	ShowPane(&m_wndMonitor, TRUE, FALSE, TRUE);
	m_wndOperate.DockToWindow(&m_wndMonitor, CBRS_TOP);
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
	AddElementToStatusBar(ID_STATUSBAR_OPERATE_MODE, IDS_MACHINE_MODE_JOG, FALSE);
	AddElementToStatusBar(ID_STATUSBAR_MACHINE_STATUS, IDS_MACHINE_STATUS_STANDBY, FALSE);
	AddElementToStatusBar(ID_STATUSBAR_AXES_POSITION, IDS_AXES_POSITION, TRUE);
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
	//OutputDebugString(strMousePosition);
}


void CMainFrame::UpdateAxesData()
{
	CMFCRibbonStatusBarPane* pPane = (CMFCRibbonStatusBarPane*)m_wndStatusBar.FindByID(ID_STATUSBAR_AXES_POSITION);
	if (pPane == nullptr)
		return;
	static int i = 0;

	CNCExchange* exchange = theApp.GetNCExchange();
	if (exchange != nullptr)
	{
		CString str;
		str.Format(_T("X:%.3f Y:%.3f Z:%.3f A:%.3f"), exchange->GetCoordinates(COORDINATES_TYPE::MACHINE, 0)
											, exchange->GetCoordinates(COORDINATES_TYPE::MACHINE, 1)
											, exchange->GetCoordinates(COORDINATES_TYPE::MACHINE, 2)
											, exchange->GetCoordinates(COORDINATES_TYPE::MACHINE, 3));
		pPane->SetText(str);
	}
	m_wndStatusBar.RecalcLayout();
	pPane->Redraw();
}

void CMainFrame::UpdateMachineStatus()
{
	CNCExchange* exchange = theApp.GetNCExchange();
	unsigned char F0000 = exchange->GetPLCTableF(0);
	unsigned char F0001 = exchange->GetPLCTableF(1);
	CMFCRibbonCategory* pCate = (CMFCRibbonCategory*)m_wndRibbonBar.GetCategory(4);
	CExRibbonContextCaption* pCC = (CExRibbonContextCaption*)m_wndRibbonBar.GetConextCaption(0);
	CMFCRibbonStatusBarPane* pPane = (CMFCRibbonStatusBarPane*)m_wndStatusBar.FindByID(ID_STATUSBAR_MACHINE_STATUS);
	CString strMachineStatus;

	if (F0001 & (0x01 <<1))
	{
		pCC->SetColor(AFX_CategoryColor_Indigo);
		pCate->SetTabColor(AFX_CategoryColor_Indigo);
		strMachineStatus.LoadString(IDS_MACHINE_STATUS_RESET);
	}
	else if (F0001 & 0x01)
	{
		pCC->SetColor(AFX_CategoryColor_Red);
		pCate->SetTabColor(AFX_CategoryColor_Red);
	}
	else if (F0000 & (0x01 << 7))
	{
		if (F0000 & (0x01 << 5))
		{
			pCC->SetColor(AFX_CategoryColor_Green);
			pCate->SetTabColor(AFX_CategoryColor_Green);
			strMachineStatus.LoadString(IDS_MACHINE_STATUS_RUN);
		}	
		else
		{
			pCC->SetColor(AFX_CategoryColor_Yellow);
			pCate->SetTabColor(AFX_CategoryColor_Yellow);
			strMachineStatus.LoadString(IDS_MACHINE_STATUS_STOP);
		}
	}
	else
	{
		pCC->SetColor(AFX_CategoryColor_None);
		pCate->SetTabColor(AFX_CategoryColor_None );
		strMachineStatus.LoadString(IDS_MACHINE_STATUS_STANDBY);
	}
	

	pPane->SetText(strMachineStatus);
	pPane->Redraw();
	m_wndStatusBar.RecalcLayout();
	m_wndRibbonBar.Invalidate();
	
}

void CMainFrame::SwitchOperatePane(BOOL bShow)
{
	if (m_wndOperate.IsVisible() != bShow)
	{
		ShowPane(&m_wndOperate, bShow, FALSE, TRUE);
		RecalcLayout(FALSE);
	}

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

void CMainFrame::OnRibbonButton(UINT nID)
{
	CNCExchange* exchange = theApp.GetNCExchange();

	if (nID == ID_BUTTON_XMINUS)
	{
		exchange->SetPLCBitTableG(100, 0);
	}

}

void CMainFrame::OnSwitchMode(UINT nID)
{
//-----------------------------------------------------------------------------
//            0x80 0x40 0x20 0x10 0x08 0x04 0x02 0x01
//            ZRN       DNCI EXT       MD4  MD2  MD1
// 01) MMDI    0         0    0    0    0    0    0
// 02) MMEM    0         0    0    0    0    0    1
// 03) MDNC    0         1    0    0    0    0    1
// 04) MEDT    0         0    0    0    0    1    1
// 05) MH      0         0    0    0    1    0    0
// 06) MINC    0         0    1    0    1    0    0
// 07) MJOG    0         0    0    0    1    0    1
// 08) MZRN    1         0    0    0    1    0    1
// 09) MPZRN   1         0    1    0    1    0    1
// 09) MTJOG   0         0    0    0    1    1    0
// 10) MTHND   0         0    0    0    1    1    1
//-----------------------------------------------------------------------------
	CNCExchange* exchange = theApp.GetNCExchange();
	switch (nID)
	{
	case ID_BUTTON_MAUTO:
		exchange->SetPLCTableG(43, 0x01);//MMEM
		break;
	case ID_BUTTON_MJOG:
		exchange->SetPLCTableG(43, 0x05);
		break;
	case ID_BUTTON_MINC:
		exchange->SetPLCTableG(43, 0x14);
		break;
	case ID_BUTTON_MMDI:
		exchange->SetPLCTableG(43, 0x00);
		break;
	case ID_BUTTON_MREFER:
		exchange->SetPLCTableG(43, 0x85);
		break;
	case ID_BUTTON_MWHEEL:
		exchange->SetPLCTableG(43, 0x04);
		break;
	default:
		break;
	}
}


void CMainFrame::OnTimer(UINT_PTR nIDEvent)
{
	switch (nIDEvent)
	{
	case 0:
		UpdateAxesData();
		UpdateMachineStatus();
		break;
	case 1:
		BOOST_LOG_SEV(scl, trace) << __FUNCTION__ << ":" << __LINE__ << "this thread" << boost::this_thread::get_id();
	default:
		break;
	}CFrameWndEx::OnTimer(nIDEvent);
}

void CMainFrame::SetOperationMode(MODE_TYPE type)
{
	CExRibbonContextCaption* pCC = (CExRibbonContextCaption*)m_wndRibbonBar.GetConextCaption(0);
	CMFCRibbonStatusBarPane* pPane = (CMFCRibbonStatusBarPane*)m_wndStatusBar.FindByID(ID_STATUSBAR_OPERATE_MODE);
	CString strMachineMode;

	pCC->GetContextCategoryCount();
	switch (type)
	{
	case MODE_TYPE::MODE_AUTO:
		strMachineMode.LoadString(IDS_MACHINE_MODE_AUTO);
		break;
	case MODE_TYPE::MODE_JOG:
		strMachineMode.LoadString(IDS_MACHINE_MODE_JOG);
		break;
	case MODE_TYPE::MODE_REFER:
		strMachineMode.LoadString(IDS_MACHINE_MODE_REFER);
		break;
	case MODE_TYPE::MODE_INC:
		strMachineMode.LoadString(IDS_MACHINE_MODE_INC);
		break;
	case MODE_TYPE::MODE_WHEEL:
		strMachineMode.LoadString(IDS_MACHINE_MODE_WHEEL);
		break;
	case MODE_TYPE::MODE_MDI:
		strMachineMode.LoadString(IDS_MACHINE_MODE_MDI);
		break;
	case MODE_TYPE::MODE_EDIT:
		strMachineMode.LoadString(IDS_MACHINE_MODE_EDIT);
	default:
		break;
	}

	pPane->SetText(strMachineMode);
	m_wndStatusBar.RecalcLayout();
	pPane->Redraw();
	pCC->SetText(strMachineMode);
	m_wndRibbonBar.Invalidate();
}




void CMainFrame::DoDataExchange(CDataExchange* pDX)
{
	// TODO: Add your specialized code here and/or call the base class

	CFrameWndEx::DoDataExchange(pDX);
}
