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

// laserMachine.h : main header file for the laserMachine application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// ClaserMachineApp:
// See laserMachine.cpp for the implementation of this class
//
#include "NCExchange.h"
#include "LogSystem.h"
#define _cfg "log/logsetting.ini"
class ClaserMachineApp : public CWinAppEx
{
public:
	ClaserMachineApp() noexcept;
	~ClaserMachineApp();

private:
	bool InitLog();
	bool StartConsole();
	CNCExchange *m_pNC;
	src::severity_channel_logger<severity_level, std::string> scl;
	
// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	CNCExchange* GetNCExchange();
// Implementation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnBtnConnect();
};

extern ClaserMachineApp theApp;
