#include "stdafx.h"
#include "CModBusMaster.h"
#include <iostream>

using namespace std;

struct MBAP_Header
{
	unsigned short Transaction_Identifier;
	unsigned short Protocol_Identifier;
	unsigned short length;
	unsigned char Unit_Identifier;
};

struct PDU
{

};

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

void CModBusMaster::TestTCP()
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

void CModBusMaster::TestUDP()
{
	CHAR buf[12] = { 0x01, 0xd3, 0x00, 0x00, 0x00, 0x06, 0x01, 0x03, 0x00, 0x00, 0x00, 0x0a };
	vector<CHAR> str(10, 0);
	io_service ios;
	ip::udp::socket socket(ios);
	ip::udp::endpoint endpoint(m_address, m_port);
	socket.open(endpoint.protocol());
	socket.send_to(buffer(buf, 12), endpoint);
	socket.receive_from(buffer(str), endpoint);

	CString strOutput;
	for (CHAR ch : str)
	{
		CString str;
		str.Format(_T("%0X "), ch);
		strOutput += str;
	}
	OutputDebugString(strOutput);

}

// to do
void BuildReadCoils(UCHAR slaveId)
{
	MBAP_Header header = {0,0,6,slaveId};
	UCHAR fun_code = 0x01;
	WORD start_address = 0;
	WORD count = 1;
}