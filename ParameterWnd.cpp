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

	//001��λ����
	CMFCPropertyGridProperty* pGroup001= new CMFCPropertyGridProperty(_T("001 ������ز���"));
	for(CString axis : Axes)
	{
		CString title = axis +_T("��");
		CMFCPropertyGridProperty* pBins = new CMFCPropertyGridProperty(title, 0, TRUE);
		pGroup001->AddSubItem(pBins);
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("��̷�ʽ"), _T("DIA 0/1: �뾶���/ֱ��")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("������"), _T("ROT 0/1: ֱ����/��ת�Ṧ����Ч")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("ѭ����ʽ"), _T("RRL 0/1: ������겻ѭ��/��һ���ƶ���ѭ��")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("��ת�����ָ����ת��ʽ"), _T("RABS 0/1: ��ת�����ָ��ͽ�/�ͽ���ת")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("��ת�����ָ���ƶ�����"), _T("RABG 0/1: ��ת�����ָ���ƶ��������ֵ/��ָ�����")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("��ת�����ָ���ƶ���"), _T("RABM 0/1: ��ת�����ָ���ƶ���������/����һ��ȡģ")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter());
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("�������Ƿ���ʾ"), _T("HID 0/1: ��������ʾ/����ʾ")));
	}
	m_wndPropList.AddProperty(pGroup001);
	
	//002��λ����
	CMFCPropertyGridProperty* pGroup002 = new CMFCPropertyGridProperty(_T("002 �ŷ�/��������������"));
	for (CString axis : Axes)
	{
		CString title = axis + _T("��");
		CMFCPropertyGridProperty* pBins = new CMFCPropertyGridProperty(title, 0, TRUE);
		pGroup002->AddSubItem(pBins);
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("�ŷ�����ģʽ"), _T("SVAC 0/1: �ŷ�����Ϊ����/����")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("S�ͺ��ٶ�ƽ������"), _T("SSS 0/1: ��/����S�ͺ��ٶ�ƽ������")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("����ƶ�����"), _T("MD 0/1: ����ƶ�������/��")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("�ֶ��ƶ�����"), _T("JD 0/1: �ֶ��ƶ�������/��������PLCʱ��Ч��")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("�ŷ���ʽ"), _T("SVPT 0/1: �ŷ�Ϊ����+����/AB����")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter(_T("ָ����ӳ��ֱ�ʹ����չģʽ"), _T("GRECX 0/1: ָ����ӳ��ֱȲ�/ʹ����չģʽ")));
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter());
		pBins->AddSubItem(CFactoryParamType::CreateBinParameter());
	}
	m_wndPropList.AddProperty(pGroup002);

	//������������ʾ��
	CMFCPropertyGridProperty* pGroupXXX = new CMFCPropertyGridProperty(_T("XXX ��������ʾ��"));
	CMFCPropertyGridProperty* pPropInput = new CMFCPropertyGridProperty(_T("���������"), _T("Ĭ��ֵ"), _T("�ò���Ϊ�����������������������ֵ�������ֵ��һ�����"));
	pGroupXXX->AddSubItem(pPropInput);
	CMFCPropertyGridProperty* pPropSelect = new CMFCPropertyGridProperty(_T("��ѡ�����"), _T("X"), _T("�ò���Ϊ�ɿ�ѡ�������ֻ���ڸ�����ֵ��ѡȡĳ��ֵ��Ϊ����ֵ"));
	for (CString axis : Axes)
	{
		pPropSelect->AddOption(axis);
	}
	pPropSelect->AllowEdit(false);
	pGroupXXX->AddSubItem(pPropSelect);
	m_wndPropList.AddProperty(pGroupXXX);
	
	//PropList�������
	m_wndPropList.ExpandAll();
}

void CParameterWnd::OnSize(UINT nType, int cx, int cy)
{
	CDockablePane::OnSize(nType, cx, cy);
	AdjustLayout();
}
