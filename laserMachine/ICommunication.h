#pragma once
#include <string>
#include <boost/thread.hpp>

enum class COORDINATES_TYPE { WORKPIECE, INCREASE, MACHINE, RESIDUAL};
enum class PLC_TABLE_TYPE { X, Y, F, D, R, G, A, K };
class ICommunication
{
public:

	ICommunication();
	virtual ~ICommunication();
	virtual bool Connect() = 0;
	virtual bool Disconnect() = 0;
	enum class COMMUNICATION_STATUS { CS_UNCONNECTED = -1, CS_CONNECTED = 0 };
	bool Connected();

	virtual bool ReadFile(const char* pName, WORD len, std::string& data) = 0;
	virtual INT32 GetParameterInt32(WORD index, WORD line) = 0;
	virtual double GetParameterFloat64(WORD index, WORD line) = 0;
	virtual bool GetCoordinates(INT32 * pData, WORD len, COORDINATES_TYPE type) = 0;
	virtual bool GetPLCData(unsigned char* pData, WORD len, PLC_TABLE_TYPE type) = 0;
	virtual	bool SetPLCData(std::string name, char table, WORD index, unsigned char data) = 0;
	virtual	bool SetPLCBit(std::string name, char table, WORD index, unsigned char bit) = 0;
protected:
	COMMUNICATION_STATUS m_status;
	boost::mutex mu;
};

