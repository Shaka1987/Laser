#include "stdafx.h"
#include "FactoryParamType.h"

CFactoryParamType::CFactoryParamType()
{
}

CFactoryParamType::~CFactoryParamType()
{
}

CMFCPropertyGridProperty* CFactoryParamType::CreateBinParameter(const CString & strName, LPCTSTR lpszDescr, DWORD index_data)
{
	CMFCPropertyGridProperty* pProp = new CMFCPropertyGridProperty(strName, _variant_t(_T("0")), lpszDescr);
	pProp->SetData(index_data);
	pProp->AddOption(_T("0"));
	pProp->AddOption(_T("1"));
	return pProp;
}

