#pragma once
#include "GraphPoint.h"
#include <list>
#include <boost/smart_ptr.hpp>
class CDrawBoard
{
public:
	CDrawBoard();
	~CDrawBoard();

	using sptPoint = boost::shared_ptr<CGraphPoint>;
	void Draw(CDC* pDC);
	void UpdateSize(int width, int height);

	
	int AddPoint(sptPoint spPoint);
	bool ResetPoints();
private:
	double m_scale;
	CGraphPoint m_ptOffset;
	CPoint m_ptBase;
	const CPoint m_cptOrigin;
	using point_list = std::list<sptPoint>;
	point_list m_ptList;

};

