#include "stdafx.h"
#include "NCExchange.h"
#include "FactoryCommunication.h"

#include <boost/thread/thread.hpp>
#include <boost/bind/bind.hpp>


CNCExchange::CNCExchange() noexcept
: UPDATE_TIME(200)	//通讯需要时间，所以小于50没有效果
, m_strand(boost::asio::make_strand(m_io))
, m_update_timer(m_io, boost::asio::chrono::milliseconds(UPDATE_TIME))
, scl(logging::keywords::channel = "CNCExchange")
{
	m_pCommunication = CFactoryCommunication::Create(COMMUNICATION_TYPE::COM_MODEBUS);

	Init();
	m_update_timer.async_wait(boost::asio::bind_executor(m_strand,boost::bind(&CNCExchange::UpdateData, this)));

}

CNCExchange::~CNCExchange()
{
	m_update_timer.cancel();
	//m_update_timer2.cancel();

	if (m_pCommunication != nullptr)
	{

		delete m_pCommunication;
	}
}

bool CNCExchange::Init()
{
	if (Connect())
	{
		m_t = boost::thread(boost::bind(&boost::asio::io_context::run, &m_io));
				
		//t.join();
		//m_io.run();
		return true;
	}
	AfxMessageBox(_T("下位机连接失败！"));
	return false;
}

BOOL CNCExchange::Connect()
{
	return m_pCommunication->Connect();
}

BOOL CNCExchange::Disconnect()
{
	return m_pCommunication->Disconnect();
}


std::string CNCExchange::GetParameters()
{
	std::string data_parameter;
	std::string name = "SYS.PAR";
	m_pCommunication->ReadFile(name.c_str(), name.size(), data_parameter);
	return data_parameter;
}

INT32 CNCExchange::GetParameterInt32(WORD index, WORD line)
{
	return m_pCommunication->GetParameterInt32(index, line);
}

double CNCExchange::GetParameterFloat64(WORD index, WORD line)
{
	return m_pCommunication->GetParameterFloat64(index, line);
}

double CNCExchange::GetCoordinates(COORDINATES_TYPE type, WORD index)
{
	return m_machine_coordinate[index]/1000.0;
}

unsigned char CNCExchange::GetPLCTableF(WORD index)
{
	return m_plcF[index];
}

bool CNCExchange::SetPLCBitTableG(WORD index, unsigned char bit)
{
	return m_pCommunication->SetPLCBit("wplc_table_G", 'G', index, bit);
}
bool CNCExchange::SetPLCTableG(WORD index, unsigned char data)
{
	return m_pCommunication->SetPLCData("wplc_table_G", 'G', index, data);
}
void CNCExchange::UpdateData()
{
	BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__<< "this thread" <<	boost::this_thread::get_id();

	m_pCommunication->GetCoordinates(m_machine_coordinate, 4, COORDINATES_TYPE::MACHINE);
//	m_pCommunication->GetPLCData(m_plcX, 128, PLC_TABLE_TYPE::X);
//	m_pCommunication->GetPLCData(m_plcY, 128, PLC_TABLE_TYPE::Y);
	m_pCommunication->GetPLCData(m_plcF, 20, PLC_TABLE_TYPE::F);	
//	m_pCommunication->GetPLCData(m_plcG, 200, PLC_TABLE_TYPE::G);
	if (m_pCommunication->Connected())
	{
		m_update_timer.expires_at(m_update_timer.expiry() + boost::asio::chrono::milliseconds(UPDATE_TIME));
		m_update_timer.async_wait(boost::asio::bind_executor(m_strand, boost::bind(&CNCExchange::UpdateData, this)));
	}

	
}
