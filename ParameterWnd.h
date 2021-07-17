#pragma once


// CParameterWnd

class CParameterWnd : public CDockablePane
{
	DECLARE_DYNAMIC(CParameterWnd)
private:

	CMFCPropertyGridCtrl m_wndPropList;

	void InitPropList();
	void AdjustLayout();
public:
	CParameterWnd();
	virtual ~CParameterWnd();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
};


