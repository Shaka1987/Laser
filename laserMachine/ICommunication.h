#pragma once
#include <string>
#include <boost/thread.hpp>

enum class COORDINATES_TYPE { WORKPIECE, INCREASE, MACHINE, RESIDUAL};
class ICommunication
{
public:

	ICommunication();
	virtual ~ICommunication();
	virtual bool Connect() = 0;
	virtual bool Disconnect() = 0;
	virtual bool ReadFile(const char* pName, WORD len, std::string& data) = 0;
	virtual INT32 GetParameterInt32(WORD index, WORD line) = 0;
	virtual double GetParameterFloat64(WORD index, WORD line) = 0;
	virtual bool GetCoordinates(INT32 * pData, WORD len, COORDINATES_TYPE type, WORD index) = 0;

	enum class COMMUNICATION_STATUS {CS_UNCONNECTED = -1, CS_CONNECTED = 0};
protected:
	COMMUNICATION_STATUS m_status;
	boost::mutex mu;
};

