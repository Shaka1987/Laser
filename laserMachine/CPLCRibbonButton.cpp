// CPLCRibbonButton.cpp : implementation file
//
#include "stdafx.h"
#include "laserMachine.h"
#include "CPLCRibbonButton.h"


// CPLCRibbonButton

void CPLCRibbonButton::OnLButtonDown(CPoint point)
{
	AfxGetApp()->GetMainWnd()->SendMessage(WM_PLC_LBDOWN, (WPARAM)m_nID);
	CMFCRibbonButton::OnLButtonDown(point);
}

void CPLCRibbonButton::OnLButtonUp(CPoint point)
{
	AfxGetApp()->GetMainWnd()->SendMessage(WM_PLC_LBUP, (WPARAM)m_nID);
	CMFCRibbonButton::OnLButtonUp(point);
}

CPLCRibbonButton::CPLCRibbonButton()
{
}
CPLCRibbonButton::CPLCRibbonButton(UINT nID, LPCTSTR lpszText, int nSmallImageIndex, int nLargeImageIndex, BOOL bAlwaysShowDescription)
	:CMFCRibbonButton(nID, lpszText, nSmallImageIndex, nLargeImageIndex, bAlwaysShowDescription)
{
}
CPLCRibbonButton::~CPLCRibbonButton()
{
}


// CPLCRibbonButton member functions
