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
		G_TraceMode = 0,
		G_Position
	};
	sptPoint CoverntStr2Point(sptString str, sptPoint current_point, UCHAR groupG[]);
};

