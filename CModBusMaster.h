#pragma once
#include <boost/asio.hpp>
using namespace boost::asio;

class CModBusMaster
{
public:
		CModBusMaster();
private:
	ip::address m_address;
	WORD m_port;

public:
	void SetEndPoint(ip::address& address, WORD& port);
	void TestTCP();
	void TestUDP();
};

