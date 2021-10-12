#include "stdafx.h"
#include "NCExchange.h"
#include "FactoryCommunication.h"

#include <boost/thread/thread.hpp>
#include <boost/bind/bind.hpp>


CNCExchange::CNCExchange() noexcept
: UPDATE_TIME(1)	//通讯需要时间，所以小于50没有效果
, m_strand(boost::asio::make_strand(m_io))
, m_update_timer(m_io, boost::asio::chrono::milliseconds(UPDATE_TIME))
, m_strand2(boost::asio::make_strand(m_io2))
, m_update_timer2(m_io2, boost::asio::chrono::milliseconds(UPDATE_TIME))
, scl(logging::keywords::channel = "CNCExchange")
{
	m_pCommunication = CFactoryCommunication::Create(COMMUNICATION_TYPE::COM_MODEBUS);

	Init();
	m_update_timer.async_wait(boost::asio::bind_executor(m_strand,boost::bind(&CNCExchange::UpdateData, this)));
	//m_update_timer2.async_wait(boost::asio::bind_executor(m_strand2, boost::bind(&CNCExchange::UpdateData2, this)));

}

CNCExchange::~CNCExchange()
{
	BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__<< "11111111111111";
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

		//m_t2 = boost::thread(boost::bind(&boost::asio::io_context::run, &m_io2));
		
		//t.join();
		//m_io.run();
		return true;
	}
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

void CNCExchange::UpdateData()
{
	BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__<< "this thread" <<	boost::this_thread::get_id();

	m_pCommunication->GetCoordinates(m_machine_coordinate, 4, COORDINATES_TYPE::MACHINE, 1);
	m_update_timer.expires_at(m_update_timer.expiry() + boost::asio::chrono::milliseconds(UPDATE_TIME));
	m_update_timer.async_wait(boost::asio::bind_executor(m_strand, boost::bind(&CNCExchange::UpdateData, this)));
	
}

void CNCExchange::UpdateData2()
{
	//	BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__<< "this thread" <<	boost::this_thread::get_id();
	m_pCommunication->GetCoordinates(m_workpiece_coordinate, 4, COORDINATES_TYPE::WORKPIECE, 1);
	/*m_update_timer2.expires_at(m_update_timer2.expiry() + boost::asio::chrono::milliseconds(UPDATE_TIME));
	m_update_timer2.async_wait(boost::asio::bind_executor(m_strand2, boost::bind(&CNCExchange::UpdateData2, this)));*/

}