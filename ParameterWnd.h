#pragma once

#include"ParaJson.h"
// CParameterWnd
#include <vector>
class CParameterWnd : public CDockablePane
{
	DECLARE_DYNAMIC(CParameterWnd)
private:

	CMFCPropertyGridCtrl m_wndPropList;
	std::vector<ParameterSpace::CParaJson> m_paralist;
	void FillParameterData();
	void InitParaList();
	void InitPropList();
	void AdjustLayout();
	void LoadParameterDescription();

public:
	CParameterWnd();
	virtual ~CParameterWnd();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy); 
	afx_msg LRESULT OnParameterChanged(WPARAM, LPARAM lparam);
};


