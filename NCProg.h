#pragma once
#include "LaserProg.h"

class CNCProg :
	public CLaserProg
{

public:

	virtual BOOL Convert();
private:
	enum 
	{ 
		G_TraceMode = 0,		//G0, G1, G2, G3
		G_Increase,				//G90, G91
		G_Position,				//G92
	};
	sptPoint CoverntStr2Point(sptString str, sptPoint current_point, UCHAR groupG[]);
	void InitGFunction(UCHAR groupGFunction[]);
};

