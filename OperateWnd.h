#pragma once


// COperateWnd

class COperateWnd : public CDockablePane
{
	DECLARE_DYNAMIC(COperateWnd)

public:
	COperateWnd();
	virtual ~COperateWnd();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);

private:
public:
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};


