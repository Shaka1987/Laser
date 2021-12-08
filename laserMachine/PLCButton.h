#pragma once


// CPLCButton

class CPLCButton : public CMFCButton
{
	DECLARE_DYNAMIC(CPLCButton)

public:
	CPLCButton();
	virtual ~CPLCButton();

protected:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	DECLARE_MESSAGE_MAP()
};


