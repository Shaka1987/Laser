#pragma once


// CPLCWnd

class CPLCWnd : public CDockablePane
{
	DECLARE_DYNAMIC(CPLCWnd)

public:
	CPLCWnd();
	virtual ~CPLCWnd();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};

