#pragma once


// CModBusConfigDlg dialog

class CModBusConfigDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CModBusConfigDlg)

public:
	CModBusConfigDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CModBusConfigDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MODBUS_CONFIG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
private:
	DWORD m_slaveIP;
public:
	afx_msg void OnBnClickedOk();
};
