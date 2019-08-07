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
	void SetX(double x);
	void SetY(double y);
	void SetZ(double z);
	void SetPoint(double x, double y, double z);
	void SetPointXY(double x, double y);
	inline double GetX() { return m_x; };
	inline double GetY() { return m_y; };
	inline bool IsStart() {	return m_bStart;};
};

