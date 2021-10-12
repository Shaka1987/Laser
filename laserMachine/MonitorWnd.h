#pragma once


// CMonitorWnd dialog

class CMonitorWnd : public CPaneDialog
{
	DECLARE_DYNAMIC(CMonitorWnd)

public:
	CMonitorWnd(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CMonitorWnd();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MONITOR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
