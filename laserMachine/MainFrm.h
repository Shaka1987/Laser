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

// MainFrm.h : interface of the CMainFrame class
//

#pragma once
#include "OutputWnd.h"
#include "ParameterWnd.h"
#include "PLCWnd.h"
#include "OperateWnd.h"
#include "MonitorWnd.h"
#include "Resource.h"

#define ID_MESSAGE_UPDATE (WM_USER+100)

class CMainFrame : public CFrameWndEx
{
	
protected: // create from serialization only
	CMainFrame() noexcept;
	DECLARE_DYNCREATE(CMainFrame)

// Attributes
public:

// Operations
public:

	void UpdateMousePosition(CPoint point);
	void SwitchOperatePane(BOOL bShow);
	void UpdateProgram();
	void UpdateAxesData();
// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	CMFCRibbonBar     m_wndRibbonBar;
	CMFCRibbonApplicationButton m_MainButton;
	CMFCToolBarImages m_PanelImages;
	CMFCRibbonStatusBar  m_wndStatusBar;
	COutputWnd m_wndOutput;
	CParameterWnd m_wndParameter;
	CPLCWnd m_wndPLC;
	COperateWnd m_wndOperate;
	CMonitorWnd m_wndMonitor;

// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnOptions();
	afx_msg void OnFilePrint();
	afx_msg void OnFilePrintPreview();
	afx_msg void OnUpdateFilePrintPreview(CCmdUI* pCmdUI);
	afx_msg void OnSettingChange(UINT uFlags, LPCTSTR lpszSection);
	LRESULT OnCmdUpdate(WPARAM wparam, LPARAM lparam);
	DECLARE_MESSAGE_MAP()

	BOOL CreateOutPutWnd();
	BOOL CreateParamerWnd(const CRect& rect);
	BOOL CreatePLCWnd(const CRect& rect);
	BOOL CreateOperateWnd();
	BOOL CreateMonitorWnd();
	BOOL CreateDockingWindows();
	void SetOutPutWindowIcons(BOOL bHiColorIcons);
	void AddElementToStatusBar(UINT ID, UINT tipID, BOOL bExtennd);
	BOOL CreateStatusBar();

public:
	afx_msg void OnViewParameterwnd();
	afx_msg void OnUpdateViewParameterwnd(CCmdUI *pCmdUI);
	afx_msg void OnSwitchMode(UINT nID);

private:
	src::severity_channel_logger<severity_level, std::string> scl;
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};


