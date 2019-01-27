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

// laserMachineView.cpp : implementation of the ClaserMachineView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "laserMachine.h"
#endif

#include "laserMachineDoc.h"
#include "laserMachineView.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ClaserMachineView

IMPLEMENT_DYNCREATE(ClaserMachineView, CView)

BEGIN_MESSAGE_MAP(ClaserMachineView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &ClaserMachineView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_BUTTON_XPLUS, &ClaserMachineView::OnButtonXplus)
END_MESSAGE_MAP()

// ClaserMachineView construction/destruction

ClaserMachineView::ClaserMachineView() noexcept
{
	// TODO: add construction code here

}

ClaserMachineView::~ClaserMachineView()
{
}

BOOL ClaserMachineView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// ClaserMachineView drawing

void ClaserMachineView::OnDraw(CDC* /*pDC*/)
{
	ClaserMachineDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// ClaserMachineView printing


void ClaserMachineView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL ClaserMachineView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void ClaserMachineView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void ClaserMachineView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void ClaserMachineView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
	
// 	CMainFrame *pWndFrame = (CMainFrame *)AfxGetApp()->m_pMainWnd;
// 	pWndFrame->SendMessage(ID_MESSAGE_UPDATE, (WPARAM)0,(LPARAM)0);
	::PostMessage(HWND_BROADCAST, WM_COMMAND, (WPARAM)ID_FILE_PRINT_PREVIEW, (LPARAM)0);
	//PostMessage(WM_COMMAND, ID_FILE_PRINT_PREVIEW);
}

void ClaserMachineView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// ClaserMachineView diagnostics

#ifdef _DEBUG
void ClaserMachineView::AssertValid() const
{
	CView::AssertValid();
}

void ClaserMachineView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

ClaserMachineDoc* ClaserMachineView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(ClaserMachineDoc)));
	return (ClaserMachineDoc*)m_pDocument;
}
#endif //_DEBUG


// ClaserMachineView message handlers


void ClaserMachineView::OnButtonXplus()
{
	MessageBox(_T("X+"));
}
