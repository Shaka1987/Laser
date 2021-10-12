#pragma once
#include "GraphPoint.h"
class CDrawBoard
{
public:
	CDrawBoard(CView* pView); 
	~CDrawBoard();


	void Draw(CDC* pDC);
	void UpdateSize(int width, int height);


private:
	CDrawBoard(const CDrawBoard&);
	CView* m_pView;
	double m_scale;
	CGraphPoint m_ptOffset;
	CPoint m_ptBase;
	const CPoint m_cptOrigin;

};

