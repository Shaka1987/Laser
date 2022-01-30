#pragma once
#include "LaserProg.h"
#include "LogSystem.h"
class CNCProg :
	public CLaserProg
{

public:
	CNCProg();
	~CNCProg();
	virtual BOOL Convert();
private:
	enum 
	{ 
		G_TraceMode = 0,		//G0, G1, G2, G3
		G_Increase,				//G90, G91
		G_Position,				//G92
	};

	src::severity_channel_logger<severity_level, std::string> scl;
	sptPoint CoverntStr2Point(sptString str, sptPoint current_point, UCHAR groupG[]);
	void InitGFunction(UCHAR groupGFunction[]);
	void SaveTypeData(char type, string strData, UCHAR groupG[], sptPoint currentPoint);
};

