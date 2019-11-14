// ModBusConfigDlg.cpp : implementation file
//


#include "stdafx.h"
#include "laserMachine.h"
#include "ModBusConfigDlg.h"
#include "afxdialogex.h"

// CModBusConfigDlg dialog

IMPLEMENT_DYNAMIC(CModBusConfigDlg, CDialogEx)

CModBusConfigDlg::CModBusConfigDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MODBUS_CONFIG, pParent)
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

}

CModBusConfigDlg::~CModBusConfigDlg()
{
}

void CModBusConfigDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_IPAddress(pDX, IDC_MODBUS_SLAVE_IP, m_slaveIP);
}


BEGIN_MESSAGE_MAP(CModBusConfigDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CModBusConfigDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CModBusConfigDlg message handlers

void CModBusConfigDlg::OnBnClickedOk()
{
	
	//CDialogEx::OnOK();
}
