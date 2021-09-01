// ParameterWnd.cpp : implementation file
//

#include "stdafx.h"
#include "laserMachine.h"
#include "ParameterWnd.h"
#include "FactoryParamType.h"
#include <fstream>
//#include <sstream>  
#include <string>
#include <boost/json.hpp>
#include <boost/locale.hpp>
#include <boost/algorithm/string.hpp>
#include "NCExchange.h"
//#include <boost/json/src.hpp>
using namespace std;

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
	ON_REGISTERED_MESSAGE(AFX_WM_PROPERTY_CHANGED, OnParameterChanged)
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

void CParameterWnd::LoadParameterDescription()
{
	ifstream filePara(_T("Resources\\Parameter Data\\SystemParameter.json"));
	stringstream buffer;
	buffer << filePara.rdbuf();
	string contents(buffer.str());
	boost::json::error_code ec;
	auto decode_val = boost::json::parse(contents, ec);
	TRACE(CString(ec.message().c_str()));
	auto groups = decode_val.as_array();
	if (decode_val.is_array())
	{
		for (auto data : groups)
		{
			auto parameter = data.as_object();
			auto lines = parameter["lines"].as_string().c_str();
			auto bBin = parameter["bin"].as_bool();
			DWORD index = atoi(parameter["index"].as_string().c_str());
			CString title = CString(boost::locale::conv::from_utf(parameter["title"].as_string().c_str(), "GBK").c_str());
			CMFCPropertyGridProperty* pGroup;
			if (strlen(lines) > 1)
			{
				pGroup = new CMFCPropertyGridProperty(title);

				for (int i = 0; i < strlen(lines); i++)
				{
					CString lineName;
					lineName.Format(_T("%c"), lines[i]);

					if (bBin)
					{
						CMFCPropertyGridProperty* pBins = new CMFCPropertyGridProperty(lineName, 0, TRUE);
						pGroup->AddSubItem(pBins);
						auto value_texts = parameter["text"].as_array();
						for (auto value_text : value_texts)
						{
							auto text = value_text.as_object();
							CString name = CString(boost::locale::conv::from_utf(text["name"].as_string().c_str(), "GBK").c_str());
							CString description = CString(boost::locale::conv::from_utf(text["description"].as_string().c_str(), "GBK").c_str());
							pBins->AddSubItem(CFactoryParamType::CreateBinParameter(name, description));
						}
					}
					else
					{
						CMFCPropertyGridProperty* pPropInput = new CMFCPropertyGridProperty(lineName, _T("Ĭ��ֵ"), title);
						pGroup->AddSubItem(pPropInput);
					}
				}
			}
			else
			{
				if (bBin)
				{
					pGroup = new CMFCPropertyGridProperty(title, 0, TRUE);
					auto value_texts = parameter["text"].as_array();
					for (auto value_text : value_texts)
					{
						auto text = value_text.as_object();
						CString name = CString(boost::locale::conv::from_utf(text["name"].as_string().c_str(), "GBK").c_str());
						CString description = CString(boost::locale::conv::from_utf(text["description"].as_string().c_str(), "GBK").c_str());
						pGroup->AddSubItem(CFactoryParamType::CreateBinParameter(name, description));
					}
				}
				else
				{
					pGroup = new CMFCPropertyGridProperty(title, _T("Ĭ��ֵ"), title);
				}
			}
			TRACE(title + _T("\n"));

			pGroup->SetData(index);
			m_wndPropList.AddProperty(pGroup);
		}
	}

	////������������ʾ��
	//CMFCPropertyGridProperty* pGroupXXX = new CMFCPropertyGridProperty(_T("XXX ��������ʾ��"));
	//CMFCPropertyGridProperty* pPropInput = new CMFCPropertyGridProperty(_T("���������"), _T("Ĭ��ֵ"), _T("�ò���Ϊ�����������������������ֵ�������ֵ��һ�����"));
	//pGroupXXX->AddSubItem(pPropInput);
	//CMFCPropertyGridProperty* pPropSelect = new CMFCPropertyGridProperty(_T("��ѡ�����"), _T("X"), _T("�ò���Ϊ�ɿ�ѡ�������ֻ���ڸ�����ֵ��ѡȡĳ��ֵ��Ϊ����ֵ"));
	//for (CString axis : Axes)
	//{
	//	pPropSelect->AddOption(axis);
	//}
	//pPropSelect->AllowEdit(false);
	//pGroupXXX->AddSubItem(pPropSelect);
	//m_wndPropList.AddProperty(pGroupXXX);

}

void CParameterWnd::FillParameterData()
{
	//read from low-machine
	//CNCExchange* exchange = theApp.GetNCExchange();
	//string data = exchange->GetParameters();

	//read from communication
	ifstream filePara(_T("Resources\\Parameter Data\\SYS.PAR"));
	stringstream buffer;
	buffer << filePara.rdbuf();
	string data(buffer.str());

	vector<string> str_lines;
	boost::split(str_lines, data, boost::is_any_of("\n"), boost::token_compress_on);
	int index = 0;
	int line = 0;
	int count = 1;
	int list_count = m_wndPropList.GetPropertyCount();
	CMFCPropertyGridProperty* pProp = nullptr;
	//test
	COleVariant title;
	for (auto str : str_lines)
	{

		TRACE(CString(str.c_str()) + _T("\n"));
		if (str.starts_with('[') && str.ends_with(']'))
		{
			if (str == "[END]" || index >= list_count)
				break;
			pProp = m_wndPropList.GetProperty(index++);
			count = pProp->GetSubItemsCount();
			title = pProp->GetName();

			TRACE(_T("title:") + CString(title.bstrVal) + _T("\n"));
			line = 0;
		}
		else if(pProp != nullptr)
		{
			CMFCPropertyGridProperty* pDataProp = nullptr;
			if (count > 0 )	//����λ���� �� ����ϵͳ���� �� ����λ����
			{
				
				if (count == 8 && str.size() == 8)	//����λ����
				{
					for (int i = 0; i < 8; i++)
					{
						CMFCPropertyGridProperty* pBin = pProp->GetSubItem(i);
						char bin = str.at(i);
						COleVariant value = pBin->GetValue();
						pBin->SetValue(_variant_t(CString(bin)));
						value = pBin->GetValue();
					}
				}
				else //����
				{
					if (line == count)		//���������ݱ���ʾ�Ķ�
						continue;
					pDataProp = pProp->GetSubItem(line++);
					int nCount = pDataProp->GetSubItemsCount();
					if (nCount == 0)	//����λϵͳ����
					{
						COleVariant value = pDataProp->GetValue();
						pDataProp->SetValue(_variant_t(CString(str.c_str())));
						value = pDataProp->GetValue();
					}
					else
					{
						assert(nCount == 8);	//����λ����
						for (int i = 0; i < 8; i++)
						{
							CMFCPropertyGridProperty* pBin = pDataProp->GetSubItem(i);
							char bin = str.at(i);
							COleVariant value = pBin->GetValue();
							pBin->SetValue(_variant_t(CString(bin)));
							value = pBin->GetValue();
						}
					}
				}

			}
			else if (count == 0)	//����ϵͳ����
			{
				COleVariant value = pProp->GetValue();
				pProp->SetValue(_variant_t(CString(str.c_str())));
				value = pProp->GetValue();
			}
		}
	}
}
void CParameterWnd::InitPropList()
{
	m_wndPropList.EnableHeaderCtrl(FALSE);
	m_wndPropList.EnableDescriptionArea();
	m_wndPropList.SetVSDotNetLook();
	m_wndPropList.MarkModifiedProperties();

	LoadParameterDescription();
	FillParameterData();
	// 
	//PropList�������
	//	m_wndPropList.ExpandAll();
	
}



void CParameterWnd::OnSize(UINT nType, int cx, int cy)
{
	CDockablePane::OnSize(nType, cx, cy);
	AdjustLayout();
}

LRESULT CParameterWnd::OnParameterChanged(WPARAM, LPARAM lparam)
{
	CMFCPropertyGridProperty* pProp = (CMFCPropertyGridProperty*)lparam;
	CMFCPropertyGridProperty *pParent = pProp->GetParent();
	std::string value = _com_util::ConvertBSTRToString(pProp->GetValue().bstrVal);
	std::string valueOrigin = _com_util::ConvertBSTRToString(pProp->GetOriginalValue().bstrVal);
	int index = 0;
	int line = 0;
	COleVariant revalue = pProp->GetValue();
	DWORD data = 0;
	if (pParent ==nullptr)	//����ϵͳ����
	{
		CMFCPropertyGridProperty* ptemp = m_wndPropList.GetProperty(index);
		while (ptemp != pProp)
		{
			index++;
			data = pProp->GetData();
			ptemp = m_wndPropList.GetProperty(index);
		} 
		int w = 0;
	}
	else
	{
		CMFCPropertyGridProperty *pData = pParent;
		pParent = pData->GetParent();
		if (pParent == nullptr)	//���ϵͳ���� ���� ����λ����
		{
			while (m_wndPropList.GetProperty(index) != pData)
			{
				index++;
			}

			int count = pData->GetSubItemsCount();
			if (count = 8 && valueOrigin.size() == 1)	//����λ����
			{
				
			}
			else //���ϵͳ����
			{
				while (pData->GetSubItem(line) != pProp)
				{
					line++;
				}
			}
		}
		else //���λ����
		{
			CMFCPropertyGridProperty* pRoot = pParent;
			while (m_wndPropList.GetProperty(index) != pRoot)
			{
				index++;
			}
			while (pRoot->GetSubItem(line++) != pData)
			{
				line++;
			}
		}
	}
	WORD old_value = theApp.GetNCExchange()->GetParameterInt32(index+1, line+1);
	return LRESULT();
}
