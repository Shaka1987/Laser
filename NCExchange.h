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
	src::severity_channel_logger<severity_level, std::string> scl;
	ICommunication *m_pCommunication;
	boost::asio::io_context m_io;
	boost::asio::io_context m_io2;
	boost::asio::strand<boost::asio::io_context::executor_type> m_strand;
	boost::asio::strand<boost::asio::io_context::executor_type> m_strand2;
	boost::asio::steady_timer m_update_timer;
	boost::asio::steady_timer m_update_timer2;
	INT32 m_machine_coordinate[4];
	INT32 m_workpiece_coordinate[4];
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
	void UpdateData();
	void UpdateData2();
	boost::thread m_t;
	boost::thread m_t2;
	//void* GetParemeters(std::string filepath);
	//void* GetDiagData(WORD type);

};

