#pragma once
class CGraphPoint
{
//private:
public:
	double m_x;
	double m_y;
	double m_z;
	bool m_bStart;
	
public:
	CGraphPoint();
	CGraphPoint(double x, double y, bool bStart = false);
	~CGraphPoint();
	inline double GetX() { return m_x; };
	inline double GetY() { return m_y; };
	inline bool IsStart() {	return m_bStart;};
};

