#pragma once

// CPLCRibbonButton command target

class CPLCRibbonButton : public CMFCRibbonButton
{
private:
	virtual void OnLButtonDown(CPoint point);
	virtual void OnLButtonUp(CPoint point);
	CWnd* m_pParent;
public:
	CPLCRibbonButton();
	CPLCRibbonButton(UINT nID, LPCTSTR lpszText, int nSmallImageIndex = -1, int nLargeImageIndex = -1, BOOL bAlwaysShowDescription = FALSE);
	virtual ~CPLCRibbonButton();
};


