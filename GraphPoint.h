	#pragma once
class CGraphPoint
{
private:
	double m_x;
	double m_y;
	double m_z;
	bool m_bStart;
	bool m_bValid;
public:
	CGraphPoint();
	CGraphPoint(double x, double y, bool bStart = false);
	~CGraphPoint();
	inline double GetX() { return m_x; };
	inline double GetY() { return m_y; };
	inline bool IsStart() {	return m_bStart;};
	inline bool IsValidable() { return m_bValid; };
};

