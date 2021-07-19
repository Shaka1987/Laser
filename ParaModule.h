#pragma once
#include <afxstr.h>
class CParaModule
{
public:
	CParaModule() {};
	CParaModule(const CParaModule&) {};
	CParaModule & operater = (const CParaModule &) {};
	~CParaModule() {};

private:
	CString m_strTitle;
	CString m_strDescription;
	COleVariant m_defaultData;
};


