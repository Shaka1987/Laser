#pragma once
class CGraphPoint
{
private:
	double m_x;
	double m_y;
	double m_z;
	
public:
	CGraphPoint();
	CGraphPoint(double x, double y);
	~CGraphPoint();
	void SetX(double x);
	void SetY(double y);
	void SetZ(double z);
	void SetPoint(double x, double y, double z);
	void SetPointXY(double x, double y);
};

