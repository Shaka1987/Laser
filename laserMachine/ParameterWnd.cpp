// ParameterWnd.cpp : implementation file
//

#include "stdafx.h"
#include "laserMachine.h"
#include "ParameterWnd.h"
#include "FactoryParamType.h"
#include <fstream>
#include <string>
#include <boost/json.hpp>
#include <boost/locale.hpp>
#include <boost/algorithm/string.hpp>
#include "NCExchange.h"
#include "AdditionalFunction.h"
using namespace std;
// CParameterWnd

IMPLEMENT_DYNAMIC(CParameterWnd, CDockablePane)

CParameterWnd::CParameterWnd()
	:scl(logging::keywords::channel = "CParameterWnd")
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
	InitParaList();
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
	
		for (auto para : m_paralist)
		{
	
			auto lines = para.m_lines.c_str();
			DWORD index = para.m_index;
			CMFCPropertyGridProperty* pGroup;
			if (strlen(lines) > 1)
			{
				pGroup = new CMFCPropertyGridProperty(para.m_title);

				for (int i = 0; i < strlen(lines); i++)
				{
					CString lineName;
					lineName.Format(_T("%c"), lines[i]);

					if (para.m_bBin)
					{
						CMFCPropertyGridProperty* pBins = new CMFCPropertyGridProperty(lineName, 0, TRUE);
						pBins->SetData(index);
						pGroup->AddSubItem(pBins);
						for (auto bin : para.m_binArray)
						{
							pBins->AddSubItem(CFactoryParamType::CreateBinParameter(bin.name, bin.description, index));
						}
					}
					else
					{
						CMFCPropertyGridProperty* pPropInput = new CMFCPropertyGridProperty(lineName, _T("默认值"), para.m_title);
						pPropInput->SetData(index);
						pGroup->AddSubItem(pPropInput);
					}
				}
			}
			else
			{
				if (para.m_bBin)
				{
					pGroup = new CMFCPropertyGridProperty(para.m_title, 0, TRUE);
					pGroup->SetData(index);
					for (auto bin : para.m_binArray)
					{
						pGroup->AddSubItem(CFactoryParamType::CreateBinParameter(bin.name, bin.description, index));
					}
				}
				else
				{
					pGroup = new CMFCPropertyGridProperty(para.m_title, _T("默认值"), para.m_title);
					pGroup->SetData(index);
				}
			}
			//TRACE(para.m_title + _T("\n"));

			//BOOST_LOG_SEV(scl, trace) << __FUNCTION__ << ":" << __LINE__ 
			//	<< "titlle:" << ws2s(para.m_title.GetString());

			m_wndPropList.AddProperty(pGroup);
		}

	////其他参数类型示例
	//CMFCPropertyGridProperty* pGroupXXX = new CMFCPropertyGridProperty(_T("XXX 其他参数示例"));
	//CMFCPropertyGridProperty* pPropInput = new CMFCPropertyGridProperty(_T("可输入参数"), _T("默认值"), _T("该参数为可输入参数，可以输入任意值，但会对值做一定检查"));
	//pGroupXXX->AddSubItem(pPropInput);
	//CMFCPropertyGridProperty* pPropSelect = new CMFCPropertyGridProperty(_T("可选择参数"), _T("X"), _T("该参数为可可选择参数，只能在给定的值中选取某个值作为参数值"));
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
	CNCExchange* exchange = theApp.GetNCExchange();
	if (exchange == nullptr)
	{
		return;
	}
	string data = exchange->GetParameters();

	//read parameter data from File
	//ifstream filePara(_T("Resources\\Parameter Data\\SYS.PAR"));
	//stringstream buffer;
	//buffer << filePara.rdbuf();
	//string data(buffer.str());

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

			//BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__ 
			//	<< "titlle:" << ws2s(title.bstrVal);
			line = 0;
		}
		else if(pProp != nullptr)
		{
			CMFCPropertyGridProperty* pDataProp = nullptr;
			if (count > 0 )	//单行位参数 或 多行系统参数 ； 多行位参数
			{
				
				if (count == 8 && str.size() == 8)	//单行位参数
				{
					for (int i = 0; i < 8; i++)
					{
						CMFCPropertyGridProperty* pBin = pProp->GetSubItem(i);
						char bin = str.at(i);
						COleVariant value = pBin->GetValue();
						pBin->SetOriginalValue(_variant_t(CString(bin)));
						pBin->SetValue(_variant_t(CString(bin)));
						value = pBin->GetValue();
					}
				}
				else //多行
				{
					if (line == count)		//导出的数据比显示的多
						continue;
					pDataProp = pProp->GetSubItem(line++);
					int nCount = pDataProp->GetSubItemsCount();
					if (nCount == 0)	//多行位系统参数
					{
						COleVariant value = pDataProp->GetValue();
						pDataProp->SetOriginalValue(_variant_t(CString(str.c_str())));
						pDataProp->SetValue(_variant_t(CString(str.c_str())));
						value = pDataProp->GetValue();
					}
					else
					{
						assert(nCount == 8);	//多行位参数
						for (int i = 0; i < 8; i++)
						{
							CMFCPropertyGridProperty* pBin = pDataProp->GetSubItem(i);
							char bin = str.at(i);
							COleVariant value = pBin->GetValue();
							pBin->SetOriginalValue(_variant_t(CString(bin)));
							pBin->SetValue(_variant_t(CString(bin)));
							value = pBin->GetValue();
						}
					}
				}

			}
			else if (count == 0)	//单行系统参数
			{
				COleVariant value = pProp->GetValue();
				pProp->SetOriginalValue(_variant_t(CString(str.c_str())));
				pProp->SetValue(_variant_t(CString(str.c_str())));
				value = pProp->GetValue();
			}
		}
	}
}
void CParameterWnd::InitParaList()
{
	ifstream filePara(_T("Resources\\Parameter Data\\SystemParameter.json"));
	stringstream buffer;
	buffer << filePara.rdbuf();
	string contents(buffer.str());
	boost::json::error_code ec;
	auto decode_val = boost::json::parse(contents, ec);
	
	TRACE(CString(ec.message().c_str()));
	if (decode_val.is_array())
	{
		auto groups = decode_val.as_array();
		for (auto para : groups)
		{
			m_paralist.push_back(boost::json::value_to<ParameterSpace::CParaJson>(para));
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
	//PropList填充后操作
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
	string value = _com_util::ConvertBSTRToString(pProp->GetValue().bstrVal);
	string valueOrigin = _com_util::ConvertBSTRToString(pProp->GetOriginalValue().bstrVal);
	bool bIntType = (string::npos == valueOrigin.find('.'));
	int index = pProp->GetData();
	int line = 0;
	COleVariant revalue = pProp->GetValue();
	DWORD data = 0;
	if (pParent ==nullptr)	//单个系统参数
	{

	}
	else
	{
		CMFCPropertyGridProperty *pData = pParent;
		pParent = pData->GetParent();
		if (pParent == nullptr)	//多个系统参数 或者 单个位参数
		{
			int count = pData->GetSubItemsCount();
			if (count = 8 && valueOrigin.size() == 1)	//单个位参数
			{
				
			}
			else //多个系统参数
			{
				while (pData->GetSubItem(line) != pProp)
				{
					line++;
				}
			}
		}
		else //多个位参数
		{
			CMFCPropertyGridProperty* pRoot = pParent;
			while (pRoot->GetSubItem(line) != pData)
			{
				line++;
			}
		}
	}
	CNCExchange* pExchange = theApp.GetNCExchange();
	if (pExchange != nullptr)
	{
		return LRESULT();
	}
	if(bIntType)
	{
		INT32 old_value = pExchange->GetParameterInt32(index, line + 1);
	}
	else
	{
		DOUBLE old_value = pExchange->GetParameterFloat64(index, line + 1);
	}
	return LRESULT();
}
