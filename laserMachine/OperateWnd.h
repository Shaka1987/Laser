#pragma once


// COperateWnd

#include <map>
#include <vector>
#include "LogSystem.h"
enum class MODE_TYPE {MODE_UNKNOWN, MODE_AUTO, MODE_JOG, MODE_REFER, MODE_INC, MODE_WHEEL, MODE_MDI, MODE_EDIT };

class COperateWnd : public CPaneDialog
{
	DECLARE_DYNAMIC(COperateWnd)

public:
	COperateWnd(CWnd* pParent = nullptr);   // standard constructor
	virtual ~COperateWnd();

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_OPERATE };
#endif
	
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);

private:
	MODE_TYPE m_emode;
	std::array<MODE_TYPE, 9> m_modeGroup;
	std::map<UINT, MODE_TYPE> m_mapMode;
	std::map<MODE_TYPE, std::vector<UINT>> m_mapModeCtl;
	std::vector<UINT> m_autoVector;
	std::vector<UINT> m_jogVector;
	std::vector<UINT> m_mdiVector;
	std::vector<UINT> m_incVector;
	std::vector<UINT> m_refVector;
	std::vector<UINT> m_wheelVector;
	src::severity_channel_logger<severity_level, std::string> scl;
public:
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnSwitchOperateMode(CCmdUI* pCmdUI);

public:
	void OnSwitchMode(UINT nID);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};


