#pragma once
class CFactoryParamType
{
	CFactoryParamType();
	~CFactoryParamType();
public:
	static CMFCPropertyGridProperty* CreateBinParameter(const CString& strName = _T(""), LPCTSTR lpszDescr = _T("´ý¶¨"));

};

