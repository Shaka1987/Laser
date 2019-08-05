#pragma once
#include "GraphPoint.h"
class CDrawBoard
{
public:
	CDrawBoard();
	~CDrawBoard();

	void Draw(CDC* pDC);
	void UpdateSize(int width, int height);
private:
	CPoint m_ptBase;
	const CPoint m_ptOffset;
};

