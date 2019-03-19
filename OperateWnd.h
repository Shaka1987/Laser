#pragma once


// COperateWnd dialog

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
};
