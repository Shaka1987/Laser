#include "stdafx.h"
#include "CModBusMaster.h"

using namespace std;

CModBusMaster::CModBusMaster()
	:m_address(ip::address::from_string("10.0.0.14"))
	,m_port(502)
{
}

void CModBusMaster::SetEndPoint(ip::address& address, WORD& port)
{
	m_address = address;
	m_port = port;
}

void CModBusMaster::Connect()
{
	CHAR buf[12] = { 0x01, 0xd3, 0x00, 0x00, 0x00, 0x06, 0x01, 0x03, 0x00, 0x00, 0x00, 0x0a };
	vector<CHAR> str(100, 0);
	io_service ios;
	ip::tcp::socket socket(ios);
	ip::tcp::endpoint endpoint(m_address, m_port);
	socket.connect(endpoint);

	socket.write_some(buffer(buf, 12));
	socket.read_some(buffer(str));
	socket.close();
}