#include "stdafx.h"
#include "NCExchange.h"
#include "FactoryCommunication.h"

#include <boost/thread/thread.hpp>
#include <boost/bind/bind.hpp>


CNCExchange::CNCExchange() noexcept
: m_strand(boost::asio::make_strand(m_io))
, m_update_timer(m_io, boost::asio::chrono::seconds(5))
, scl(logging::keywords::channel = "CNCExchange")
{
	m_pCommunication = CFactoryCommunication::Create(COMMUNICATION_TYPE::COM_MODEBUS);
	m_update_timer.async_wait(boost::asio::bind_executor(m_strand,boost::bind(&CNCExchange::UpdateData, this)));

	Init();
}

bool CNCExchange::Init()
{
	if (Connect())
	{
		boost::thread t(boost::bind(&boost::asio::io_context::run, &m_io));
		t.interrupt();
		t.join();
		m_io.run();
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
	return m_machine_coordinate[index];
}

void CNCExchange::UpdateData()
{
	BOOST_LOG_SEV(scl, debug) << __FUNCTION__ << ":" << __LINE__
		<< "this thread" <<	boost::this_thread::get_id();
	//m_pCommunication->GetCoordinates(m_machine_coordinate, 4, COORDINATES_TYPE::MACHINE, 1);

	m_update_timer.expires_at(m_update_timer.expiry() + boost::asio::chrono::seconds(5));

	m_update_timer.async_wait(boost::asio::bind_executor(m_strand,
		boost::bind(&CNCExchange::UpdateData, this)));
	//boost::this_thread::sleep(boost::chrono::seconds(5));
}