#pragma once


// COperateWnd

class COperateWnd : public CPaneDialog
{
	DECLARE_DYNAMIC(COperateWnd)

public:
	COperateWnd(CWnd* pParent = nullptr);   // standard constructor
	virtual ~COperateWnd();

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_OPERATE };
#endif


protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);

private:
public:
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};


