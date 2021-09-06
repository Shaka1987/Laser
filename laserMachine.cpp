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

// laserMachine.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "afxwinappex.h"
#include "afxdialogex.h"
#include "laserMachine.h"
#include "MainFrm.h"

#include <fstream>
#include <io.h>
#include <fcntl.h>

#include <boost/filesystem.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/utility/setup/from_stream.hpp>
#include <boost/log/utility/setup/formatter_parser.hpp>
#include <boost/log/utility/setup/filter_parser.hpp>

#include "laserMachineDoc.h"
#include "laserMachineView.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ClaserMachineApp

BEGIN_MESSAGE_MAP(ClaserMachineApp, CWinAppEx)
	ON_COMMAND(ID_APP_ABOUT, &ClaserMachineApp::OnAppAbout)
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, &CWinAppEx::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CWinAppEx::OnFileOpen)
	// Standard print setup command
	ON_COMMAND(ID_FILE_PRINT_SETUP, &CWinAppEx::OnFilePrintSetup)
	ON_COMMAND(ID_BTN_CONNECT, &ClaserMachineApp::OnBtnConnect)
END_MESSAGE_MAP()


// ClaserMachineApp construction

ClaserMachineApp::ClaserMachineApp() noexcept
	:m_pNC(new CNCExchange()) 
{
	m_bHiColorIcons = TRUE;

	// support Restart Manager
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS;
#ifdef _MANAGED
	// If the application is built using Common Language Runtime support (/clr):
	//     1) This additional setting is needed for Restart Manager support to work properly.
	//     2) In your project, you must add a reference to System.Windows.Forms in order to build.
	System::Windows::Forms::Application::SetUnhandledExceptionMode(System::Windows::Forms::UnhandledExceptionMode::ThrowException);
#endif

	// TODO: replace application ID string below with unique ID string; recommended
	// format for string is CompanyName.ProductName.SubProduct.VersionInformation
	SetAppID(_T("laserMachine.AppID.NoVersion"));

	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}
ClaserMachineApp::~ClaserMachineApp()
{
	delete m_pNC;
	m_pNC = nullptr;
}



bool ClaserMachineApp::InitLog()
{
	namespace logging = boost::log;
	using namespace logging::trivial;

	if (!boost::filesystem::exists("./log/"))
	{
		boost::filesystem::create_directory("./log/");
	}
	logging::add_common_attributes();

	logging::register_simple_formatter_factory<severity_level, char>("Severity");
	logging::register_simple_filter_factory<severity_level, char>("Severity");

	std::ifstream file(_cfg);
	
	try
	{
		logging::init_from_stream(file);
	}
	catch (const std::exception& e)
	{
		std::string str_error = "init_logger is fail, read log config file fail. curse: " + std::string(e.what());
		TRACE(CString(str_error.c_str()));
		exit(-2);
	}
	return true;
}

bool ClaserMachineApp::StartConsole()
{

	AllocConsole();
	FILE* p;
	freopen_s(&p,"CONIN$", "r", stdin);
	freopen_s(&p,"CONOUT$", "w", stdout);
	freopen_s(&p,"CONOUT$", "w", stderr);
	return true;
}

// The one and only ClaserMachineApp object

ClaserMachineApp theApp;


// ClaserMachineApp initialization

BOOL ClaserMachineApp::InitInstance()
	
{
	// InitCommonControlsEx() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Set this to include all the common control classes you want to use
	// in your application.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinAppEx::InitInstance();

	if (!AfxSocketInit())
	{
		AfxMessageBox(IDP_SOCKETS_INIT_FAILED);
		return FALSE;
	}

	// Initialize OLE libraries
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}
	AfxInitRichEdit();
	AfxEnableControlContainer();

	EnableTaskbarInteraction(FALSE);

	// AfxInitRichEdit2() is required to use RichEdit control
	// AfxInitRichEdit2();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));
	LoadStdProfileSettings(4);  // Load standard INI file options (including MRU)


	InitContextMenuManager();
	InitShellManager();

	InitKeyboardManager();

	InitTooltipManager();
#ifdef _DEBUG
	StartConsole();
#endif
	InitLog();
	CMFCToolTipInfo ttParams;
	ttParams.m_bVislManagerTheme = TRUE;
	theApp.GetTooltipManager()->SetTooltipParams(AFX_TOOLTIP_TYPE_ALL,
		RUNTIME_CLASS(CMFCToolTipCtrl), &ttParams);

	// Register the application's document templates.  Document templates
	//  serve as the connection between documents, frame windows and views
	CSingleDocTemplate* pDocTemplate;
	pDocTemplate = new CSingleDocTemplate(
		IDR_MAINFRAME,
		RUNTIME_CLASS(ClaserMachineDoc),
		RUNTIME_CLASS(CMainFrame),       // main SDI frame window
		RUNTIME_CLASS(ClaserMachineView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate);


	// Parse command line for standard shell commands, DDE, file open
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);
	


	// Dispatch commands specified on the command line.  Will return FALSE if
	// app was launched with /RegServer, /Register, /Unregserver or /Unregister.
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;

//	m_pNC->Init();
	// The one and only window has been initialized, so show and update it
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();

	return TRUE;
}

int ClaserMachineApp::ExitInstance()
{
	//TODO: handle additional resources you may have added
	AfxOleTerm(FALSE);
#ifdef _DEBUG
	FreeConsole();
#endif
	return CWinAppEx::ExitInstance();
}

// ClaserMachineApp message handlers


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg() noexcept;

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
public:
//	virtual BOOL OnInitDialog();
};

CAboutDlg::CAboutDlg() noexcept : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()

// App command to run the dialog
void ClaserMachineApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

// ClaserMachineApp customization load/save methods

void ClaserMachineApp::PreLoadState()
{
	BOOL bNameValid;
	CString strName;
	bNameValid = strName.LoadString(IDS_EDIT_MENU);
	ASSERT(bNameValid);
	GetContextMenuManager()->AddMenu(strName, IDR_POPUP_EDIT);
}

void ClaserMachineApp::LoadCustomState()
{
}

void ClaserMachineApp::SaveCustomState()
{
}

// ClaserMachineApp message handlers





CNCExchange* ClaserMachineApp::GetNCExchange()
{
	return m_pNC;
}

void ClaserMachineApp::OnBtnConnect()
{

	return;


}
