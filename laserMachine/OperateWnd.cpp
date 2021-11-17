// OperateWnd.cpp : implementation file
//

#include "stdafx.h"
#include "laserMachine.h"
#include "OperateWnd.h"
#include <algorithm>
#include "MainFrm.h"

using namespace std;
// COperateWnd dialog

IMPLEMENT_DYNAMIC(COperateWnd, CPaneDialog)

COperateWnd::COperateWnd(CWnd* pParent /*=nullptr*/)
	:m_emode(MODE_TYPE::MODE_JOG)
	, m_autoVector({ IDC_BTN_CYCLESTART, IDC_BTN_CYCLEINTERUPT, IDC_BTN_CYCLERESET, IDC_BTN_ROLLBACK, IDC_CHECK_STEPRUN })

	, m_jogVector({ ID_BUTTON_XPLUS, ID_BUTTON_XMINUS, ID_BUTTON_YPLUS, ID_BUTTON_YMINUS,ID_BUTTON_ZPLUS, ID_BUTTON_ZMINUS,
				ID_BUTTON_APLUS, ID_BUTTON_AMINUS, ID_BUTTON_BPLUS, ID_BUTTON_BMINUS,ID_CHECK_RAPID, ID_EDIT_RAPID_VALUE })

	, m_mdiVector({ IDC_BTN_CYCLESTART, IDC_BTN_CYCLEINTERUPT, IDC_BTN_CYCLERESET, IDC_RICHEDIT_MDI })

	, m_incVector({ ID_BUTTON_XPLUS, ID_BUTTON_XMINUS, ID_BUTTON_YPLUS, ID_BUTTON_YMINUS, ID_BUTTON_ZPLUS, ID_BUTTON_ZMINUS,
				ID_BUTTON_APLUS, ID_BUTTON_AMINUS, ID_BUTTON_BPLUS, ID_BUTTON_BMINUS, ID_CHECK_INC_CUT, ID_CHECK_INC, ID_EDIT_INC_VALUE })

	, m_refVector({ ID_BUTTON_XPLUS, ID_BUTTON_XMINUS, ID_BUTTON_YPLUS, ID_BUTTON_YMINUS, ID_BUTTON_ZPLUS, ID_BUTTON_ZMINUS,
				ID_BUTTON_APLUS, ID_BUTTON_AMINUS, ID_BUTTON_BPLUS, ID_BUTTON_BMINUS })

	, m_wheelVector({})
	, m_modeGroup({ MODE_TYPE::MODE_INC, MODE_TYPE::MODE_WHEEL, MODE_TYPE::MODE_JOG, MODE_TYPE::MODE_MDI, MODE_TYPE::MODE_UNKNOWN,MODE_TYPE::MODE_AUTO, MODE_TYPE::MODE_EDIT, MODE_TYPE::MODE_UNKNOWN })
	, scl(logging::keywords::channel = "COperateWnd")

	/*: CPaneDialog(IDD_OPERATE, pParent)*/
{
	m_mapMode[ID_BUTTON_MAUTO] =  MODE_TYPE::MODE_AUTO;
	m_mapMode[ID_BUTTON_MJOG] =   MODE_TYPE::MODE_JOG;
	m_mapMode[ID_BUTTON_MMDI] =   MODE_TYPE::MODE_MDI;
	m_mapMode[ID_BUTTON_MINC] =   MODE_TYPE::MODE_INC;
	m_mapMode[ID_BUTTON_MREFER] = MODE_TYPE::MODE_REFER;
	m_mapMode[ID_BUTTON_MWHEEL] = MODE_TYPE::MODE_WHEEL;
	m_mapModeCtl[MODE_TYPE::MODE_AUTO] = m_autoVector;
	m_mapModeCtl[MODE_TYPE::MODE_JOG] = m_jogVector;
	m_mapModeCtl[MODE_TYPE::MODE_MDI] = m_mdiVector;
	m_mapModeCtl[MODE_TYPE::MODE_INC] = m_incVector;
	m_mapModeCtl[MODE_TYPE::MODE_REFER] = m_refVector;
	m_mapModeCtl[MODE_TYPE::MODE_WHEEL] = m_wheelVector;
}

COperateWnd::~COperateWnd()
{
}

void COperateWnd::DoDataExchange(CDataExchange* pDX)
{
	CPaneDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(COperateWnd, CPaneDialog)
	ON_WM_CTLCOLOR()
	ON_WM_PAINT()
	ON_WM_ERASEBKGND()
	ON_UPDATE_COMMAND_UI_RANGE(IDC_OPERATE_START, IDC_OPERATE_END, &COperateWnd::OnSwitchOperateMode)
	ON_WM_TIMER()
	ON_WM_CREATE()
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
	return CPaneDialog::OnEraseBkgnd(pDC);
//	return TRUE;
}

void COperateWnd::OnSwitchOperateMode(CCmdUI* pCmdUI)
{

	BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__;
	boost::this_thread::get_id();
	std::vector<UINT>* pV = &m_mapModeCtl[m_emode];
	if (pV)
	{
		pCmdUI->Enable(std::find(pV->begin(), pV->end(), pCmdUI->m_nID) != pV->end());
	}
}

void COperateWnd::OnSwitchMode(UINT nID)
{
	CNCExchange* exchange = theApp.GetNCExchange();
	unsigned char F0003 = exchange->GetPLCTableF(3);
	unsigned char F0004 = exchange->GetPLCTableF(4);
	unsigned char bit = 0;

	while (!(F0003 & (0x01 << bit)) && bit < 8)
	{
		bit++;
	}
	if (bit < 8)
	{
		m_emode = m_modeGroup[bit];
	}
	else if (F0004 & (0x01 << 5))
	{
		m_emode = MODE_TYPE::MODE_REFER;
	}
	else
	{
		m_emode = MODE_TYPE::MODE_UNKNOWN;
	}
	
	//if (exchange->GetPLCTableF(3) & (0x01 << 2))
	//{
	//	m_emode = MODE_TYPE::MODE_JOG;
	//}
	//if (exchange->GetPLCTableF(3) & (0x01 << 5))
	//{
	//	m_emode = MODE_TYPE::MODE_AUTO;
	//}
	CMainFrame* pMain = (CMainFrame*)GetParent();
	pMain->SetOperationMode(m_emode);
	//m_emode = m_mapMode[nID];
}


void COperateWnd::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: Add your message handler code here and/or call default
	OnSwitchMode(0);
	CPaneDialog::OnTimer(nIDEvent);
}


int COperateWnd::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CPaneDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here
	SetTimer(0, 100, nullptr);
	return 0;
}
