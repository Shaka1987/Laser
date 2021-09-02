#pragma once
#include "ICommunication.h"
#include <string>
class CNCExchange
{
public:
	CNCExchange() noexcept;

//connect
private:
	ICommunication *m_pCommunication;
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
	//void* GetParemeters(std::string filepath);
	//void* GetDiagData(WORD type);

};

