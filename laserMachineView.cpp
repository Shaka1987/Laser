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
#include <boost/smart_ptr.hpp>

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
	ON_WM_MOUSEMOVE()
	ON_WM_SIZE()
END_MESSAGE_MAP()

// ClaserMachineView construction/destruction

ClaserMachineView::ClaserMachineView() noexcept
	:m_drawboard(this)
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

void ClaserMachineView::OnDraw(CDC *pDC)
{
	ClaserMachineDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MemDC;
	CRect rect;
	CBitmap MemBitmap;

	GetWindowRect(&rect);
	MemBitmap.CreateCompatibleBitmap(pDC, rect.Width(), rect.Height());
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(&MemBitmap);
	MemDC.FillSolidRect(rect.left, rect.top, rect.Width(), rect.Height(), RGB(0, 0, 0));
	MemDC.SetTextColor(RGB(0xff, 0xff, 0xff));
	m_drawboard.Draw(&MemDC);
	
	pDC->BitBlt(0, 0, rect.Width(), rect.Height(), &MemDC, 0, 0, SRCCOPY);

	MemBitmap.DeleteObject();
	MemDC.DeleteDC();
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
}


void ClaserMachineView::OnMouseMove(UINT nFlags, CPoint point)
{
	CMainFrame *pWndFrame = (CMainFrame *)AfxGetApp()->m_pMainWnd;
	pWndFrame->UpdateMousePosition(point);
	CView::OnMouseMove(nFlags, point);
}


void ClaserMachineView::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);
	m_drawboard.UpdateSize(cx, cy);
	CString strInfo;
	strInfo.Format(_T("size of view[%d] -> %d : %d \n"),nType, cx, cy);
	TRACE(strInfo);
	// TODO: Add your message handler code here
}
