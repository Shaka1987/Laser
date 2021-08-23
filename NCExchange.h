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
	//void* GetParemeters(std::string filepath);
	//void* GetDiagData(WORD type);

};

