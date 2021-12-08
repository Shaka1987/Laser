// CPLCRibbonButton.cpp : implementation file
//
#include "stdafx.h"
#include "laserMachine.h"
#include "CPLCRibbonButton.h"


// CPLCRibbonButton

void CPLCRibbonButton::OnLButtonDown(CPoint point)
{
	int i = 0;
}

void CPLCRibbonButton::OnLButtonUp(CPoint point)
{
	int i = 0;
}

CPLCRibbonButton::CPLCRibbonButton()
{
}
CPLCRibbonButton::CPLCRibbonButton(UINT nID, LPCTSTR lpszText, int nSmallImageIndex, int nLargeImageIndex, BOOL bAlwaysShowDescription):CMFCRibbonButton( nID,  lpszText,  nSmallImageIndex , nLargeImageIndex, bAlwaysShowDescription)
{
}
CPLCRibbonButton::~CPLCRibbonButton()
{
}


// CPLCRibbonButton member functions
