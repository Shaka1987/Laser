// OperateWnd.cpp : implementation file
//

#include "stdafx.h"
#include "laserMachine.h"
#include "OperateWnd.h"

// COperateWnd dialog

IMPLEMENT_DYNAMIC(COperateWnd, CPaneDialog)

COperateWnd::COperateWnd(CWnd* pParent /*=nullptr*/)
	/*: CPaneDialog(IDD_OPERATE, pParent)*/
{
	
}

COperateWnd::~COperateWnd()
{
}

void COperateWnd::DoDataExchange(CDataExchange* pDX)
{
	CPaneDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BTN_CYCLESTART, m_btnStart);
}


BEGIN_MESSAGE_MAP(COperateWnd, CPaneDialog)
	ON_WM_CTLCOLOR()
	ON_WM_PAINT()
	ON_WM_ERASEBKGND()
	ON_UPDATE_COMMAND_UI(IDC_BTN_CYCLESTART, &COperateWnd::OnUpdateBtnCyclestart)
END_MESSAGE_MAP()


// COperateWnd message handlers


HBRUSH COperateWnd::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CPaneDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	
	
	return hbr;
}


void COperateWnd::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   
}


BOOL COperateWnd::OnEraseBkgnd(CDC* pDC)
{
	CRect rectClient;
	CBrush brushBackGround;
	GetClientRect(rectClient);

	brushBackGround.CreateSolidBrush(RGB(0xff, 0xff, 0xff));
	pDC->FillRect(rectClient, &brushBackGround);
	return TRUE;
	//return CPaneDialog::OnEraseBkgnd(pDC);
}

void COperateWnd::SwitchToAutoMode()
{
	//std::list<UINT> vDisableIDs = { ID_BUTTON_APLUS, ID_BUTTON_AMINUS, ID_BUTTON_BPLUS, ID_BUTTON_BMINUS,
	//					 ID_BUTTON_XPLUS, ID_BUTTON_XMINUS, ID_BUTTON_YPLUS, ID_BUTTON_YMINUS,
	//					 ID_BUTTON_ZPLUS, ID_BUTTON_ZMINUS
	//};
	//UINT aEnableIDs[] = { IDC_BTN_CYCLESTART, IDC_BTN_CYCLEINTERUPT,IDC_BTN_CYCLERESET, IDC_BTN_ROLLBACK,
	//					IDC_CHECK_STEPRUN
	//};
	//BOOST_FOREACH(UINT id, vDisableIDs)
	//{
	//	GetDlgItem(id)->EnableWindow(false);
	//}
	//BOOST_FOREACH(UINT id, aEnableIDs)
	//{
	//	GetDlgItem(id)->EnableWindow(true);
	//}
	/*GetDlgItem(ID_BUTTON_XPLUS)->EnableWindow(false);

	m_btnStart.EnableWindow(true);*/
	m_emode = MODE_TYPE::MODE_AUTO;
	//Invalidate();
}
void COperateWnd::SwtichToJogMode()
{
	//GetDlgItem(ID_BUTTON_XPLUS)->EnableWindow(false);

	//m_btnStart.EnableWindow(false);
	m_emode = MODE_TYPE::MODE_JOG;
	//Invalidate();
}


void COperateWnd::OnUpdateBtnCyclestart(CCmdUI* pCmdUI)
{
	pCmdUI->Enable(m_emode == MODE_TYPE::MODE_AUTO || m_emode == MODE_TYPE::MODE_MDI || m_emode == MODE_TYPE::MODE_RETURN);
}
