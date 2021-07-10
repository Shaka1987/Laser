// OperateWnd.cpp : implementation file
//

#include "stdafx.h"
#include "laserMachine.h"
#include "OperateWnd.h"
#include <vector>
#include <algorithm>

using namespace std;
// COperateWnd dialog

IMPLEMENT_DYNAMIC(COperateWnd, CPaneDialog)

COperateWnd::COperateWnd(CWnd* pParent /*=nullptr*/)
	:m_emode(MODE_TYPE::MODE_JOG)
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
	ON_UPDATE_COMMAND_UI_RANGE(IDC_OPERATE_START, IDC_OPERATE_END, &COperateWnd::OnSwitchOperateMode)
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
	m_emode = MODE_TYPE::MODE_AUTO;
}
void COperateWnd::SwtichToJogMode()
{
	m_emode = MODE_TYPE::MODE_JOG;
}


void COperateWnd::OnSwitchOperateMode(CCmdUI* pCmdUI)
{
	std::vector<UINT> autoVector = { IDC_BTN_CYCLESTART, IDC_BTN_CYCLEINTERUPT, IDC_BTN_CYCLERESET, IDC_BTN_ROLLBACK, IDC_CHECK_STEPRUN};
	std::vector<UINT> jogVector = { ID_BUTTON_XPLUS, ID_BUTTON_XMINUS, ID_BUTTON_YPLUS, ID_BUTTON_YMINUS,ID_BUTTON_ZPLUS, ID_BUTTON_ZMINUS,
									ID_BUTTON_APLUS, ID_BUTTON_AMINUS, ID_BUTTON_BPLUS, ID_BUTTON_BMINUS,ID_CHECK_RAPID, ID_EDIT_RAPID_VALUE};
	std::vector<UINT> mdiVector = { IDC_BTN_CYCLESTART, IDC_BTN_CYCLEINTERUPT, IDC_BTN_CYCLERESET, IDC_RICHEDIT_MDI };
	
	switch (m_emode)
	{
	case MODE_TYPE::MODE_AUTO:
		pCmdUI->Enable(std::find(autoVector.begin(), autoVector.end(), pCmdUI->m_nID) != autoVector.end());
		break;
	case MODE_TYPE::MODE_JOG:
		pCmdUI->Enable(std::find(jogVector.begin(), jogVector.end(), pCmdUI->m_nID) != jogVector.end());
		break;
	case MODE_TYPE::MODE_MDI:
		pCmdUI->Enable(std::find(mdiVector.begin(), mdiVector.end(), pCmdUI->m_nID) != mdiVector.end());
		break;
	default:
		break;
	}
	
}
