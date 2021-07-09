#pragma once

#include <boost/foreach.hpp>
#include <list>

// COperateWnd

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
	enum class MODE_TYPE {MODE_AUTO, MODE_JOG, MODE_RETURN, MODE_INC, MODE_WHEEL, MODE_MDI};

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);

private:
	MODE_TYPE m_emode;
public:
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);

public:
	void SwitchToAutoMode();
	void SwtichToJogMode();
	CMFCButton m_btnStart;
	afx_msg void OnUpdateBtnCyclestart(CCmdUI* pCmdUI);
};


