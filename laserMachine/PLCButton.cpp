// PLCButton.cpp : implementation file
//
#include "stdafx.h"
#include "laserMachine.h"
#include "PLCButton.h"


// CPLCButton

IMPLEMENT_DYNAMIC(CPLCButton, CMFCButton)

CPLCButton::CPLCButton()
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

}

CPLCButton::~CPLCButton()
{
}

void CPLCButton::OnLButtonDown(UINT nFlags, CPoint point)
{
	CMFCButton::OnLButtonDown(nFlags, point);
}

void CPLCButton::OnLButtonUp(UINT nFlags, CPoint point)
{
	CMFCButton::OnLButtonUp(nFlags, point);
}


BEGIN_MESSAGE_MAP(CPLCButton, CMFCButton)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CPLCButton message handlers


