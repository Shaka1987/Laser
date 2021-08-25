#include "stdafx.h"
#include "FactoryParamType.h"

CFactoryParamType::CFactoryParamType()
{
}

CFactoryParamType::~CFactoryParamType()
{
}

CMFCPropertyGridProperty* CFactoryParamType::CreateBinParameter(const CString & strName, LPCTSTR lpszDescr)
{
	CMFCPropertyGridProperty* pProp = new CMFCPropertyGridProperty(strName, _variant_t('0'), lpszDescr);
	pProp->AddOption(_T("0"));
	pProp->AddOption(_T("1"));
	return pProp;
}

