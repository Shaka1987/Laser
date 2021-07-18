// ParameterWnd.cpp : implementation file
//

#include "stdafx.h"
#include "laserMachine.h"
#include "ParameterWnd.h"
#include "FactoryParamType.h"

// CParameterWnd

IMPLEMENT_DYNAMIC(CParameterWnd, CDockablePane)

CParameterWnd::CParameterWnd()
{

}

CParameterWnd::~CParameterWnd()
{
}


BEGIN_MESSAGE_MAP(CParameterWnd, CDockablePane)

	ON_WM_ERASEBKGND()
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()



// CParameterWnd message handlers




BOOL CParameterWnd::OnEraseBkgnd(CDC* pDC)
{
	CRect rectClient;
	CBrush brushBackGround;
	GetClientRect(rectClient);

	brushBackGround.CreateSolidBrush(RGB(0xff, 0xff, 0xff));
	pDC->FillRect(rectClient, &brushBackGround);
	return TRUE;
}


int CParameterWnd::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDockablePane::OnCreate(lpCreateStruct) == -1)
		return -1;


	CRect rectDummy;
	rectDummy.SetRectEmpty();

	if (!m_wndPropList.Create(WS_VISIBLE | WS_CHILD, rectDummy, this, 2))
	{
		TRACE0("Failed to create Properties Grid \n");
		return -1;      // fail to create
	}
	InitPropList();
	AdjustLayout();
	return 0;
}

void CParameterWnd::AdjustLayout()
{
	if (GetSafeHwnd() == nullptr || (AfxGetMainWnd() != nullptr && AfxGetMainWnd()->IsIconic()))
	{
		return;
	}

	CRect rectClient;
	GetClientRect(rectClient);
	m_wndPropList.SetWindowPos(nullptr, rectClient.left, rectClient.top , rectClient.Width(), rectClient.Height() , SWP_NOACTIVATE | SWP_NOZORDER);

}

void CParameterWnd::InitPropList()
{
	m_wndPropList.EnableHeaderCtrl(FALSE);
	m_wndPropList.EnableDescriptionArea();
	m_wndPropList.SetVSDotNetLook();
	m_wndPropList.MarkModifiedProperties();
	CString Axes[] = { _T("X"), _T("Y"), _T("Z"), _T("A") };

	//001号位参数
	CMFCPropertyGridProperty* pGroup001= new CMFCPropertyGridProperty(_T("001 各轴相关参数"));
	for(CString axis : Axes)
	{
		CString title = axis +_T("轴");
		CMFCPropertyGridProperty* pBins = new CMFCPropertyGridProperty(title, 0, TRUE);
		pGroup001->AddSubItem(pBins);
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("编程方式"), _T("DIA 0/1: 半径编程/直径")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("轴类型"), _T("ROT 0/1: 直线轴/旋转轴功能有效")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("循环方式"), _T("RRL 0/1: 相对坐标不循环/以一周移动量循环")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("旋转轴绝对指令旋转方式"), _T("RABS 0/1: 旋转轴绝对指令不就近/就近旋转")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("旋转轴绝对指令移动方向"), _T("RABG 0/1: 旋转轴绝对指令移动方向按相对值/按指令符号")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("旋转轴绝对指令移动量"), _T("RABM 0/1: 旋转轴绝对指令移动量不进行/进行一周取模")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter());
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("坐标轴是否显示"), _T("HID 0/1: 坐标轴显示/不显示")));
	}
	m_wndPropList.AddProperty(pGroup001);
	
	//002号位参数
	CMFCPropertyGridProperty* pGroup002 = new CMFCPropertyGridProperty(_T("002 伺服/电机控制相关设置"));
	for (CString axis : Axes)
	{
		CString title = axis + _T("轴");
		CMFCPropertyGridProperty* pBins = new CMFCPropertyGridProperty(title, 0, TRUE);
		pGroup002->AddSubItem(pBins);
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("伺服报警模式"), _T("SVAC 0/1: 伺服报警为常开/常闭")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("S型后速度平滑功能"), _T("SSS 0/1: 不/开放S型后速度平滑功能")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("电机移动方向"), _T("MD 0/1: 电机移动方向正/负")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("手动移动方向"), _T("JD 0/1: 手动移动方向正/负（内置PLC时有效）")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("伺服方式"), _T("SVPT 0/1: 伺服为方向+脉冲/AB脉冲")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("指令电子齿轮比使用扩展模式"), _T("GRECX 0/1: 指令电子齿轮比不/使用扩展模式")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter());
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter());
	}
	m_wndPropList.AddProperty(pGroup002);

	//其他参数类型示例
	CMFCPropertyGridProperty* pGroupXXX = new CMFCPropertyGridProperty(_T("XXX 其他参数示例"));
	CMFCPropertyGridProperty* pPropInput = new CMFCPropertyGridProperty(_T("可输入参数"), _T("默认值"), _T("该参数为可输入参数，可以输入任意值，但会对值做一定检查"));
	pGroupXXX->AddSubItem(pPropInput);
	CMFCPropertyGridProperty* pPropSelect = new CMFCPropertyGridProperty(_T("可选择参数"), _T("X"), _T("该参数为可可选择参数，只能在给定的值中选取某个值作为参数值"));
	for (CString axis : Axes)
	{
		pPropSelect->AddOption(axis);
	}
	pPropSelect->AllowEdit(false);
	pGroupXXX->AddSubItem(pPropSelect);
	m_wndPropList.AddProperty(pGroupXXX);
	
	//PropList填充后操作
	m_wndPropList.ExpandAll();
}

void CParameterWnd::OnSize(UINT nType, int cx, int cy)
{
	CDockablePane::OnSize(nType, cx, cy);
	AdjustLayout();
}
