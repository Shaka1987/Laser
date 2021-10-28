#pragma once
#include "ICommunication.h"
#include <string>
#include <boost/asio.hpp>
#include "LogSystem.h"
class CNCExchange
{
public:
	CNCExchange() noexcept;
	~CNCExchange();
//connect
private:
	const int UPDATE_TIME;
	boost::thread m_t;
	src::severity_channel_logger<severity_level, std::string> scl;
	ICommunication *m_pCommunication;
	boost::asio::io_context m_io;
	boost::asio::strand<boost::asio::io_context::executor_type> m_strand;
	boost::asio::steady_timer m_update_timer;
	INT32 m_machine_coordinate[4];
	INT32 m_workpiece_coordinate[4];
	unsigned char m_plcX[128];
	unsigned char m_plcY[128];
	unsigned char m_plcF[1000];
	unsigned char m_plcG[1000];

	void UpdateData();
public:
	bool Init();
	BOOL Connect();
	BOOL Disconnect();

public:
	//WORD GetParameterInt(WORD index, WORD line);
	//DOUBLE GetParamterFloat(WORD index, WORD line);
	std::string GetParameters();
	INT32 GetParameterInt32(WORD index, WORD line);
	double GetParameterFloat64(WORD index, WORD line);
	double GetCoordinates(COORDINATES_TYPE type, WORD index);
	unsigned char GetPLCTableF(WORD index);
	
	//void* GetParemeters(std::string filepath);
	//void* GetDiagData(WORD type);

};

