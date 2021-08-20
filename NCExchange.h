#pragma once
#include "ICommunication.h"
#include <string>
class CNCExchange
{
public:
	CNCExchange();
	~CNCExchange();

//connect
private:
	ICommunication *m_pCommunication;
public:
	void Init();
	BOOL Connect();
	BOOL Disconnect();

public:
	WORD GetParameterInt(WORD index, WORD line);
	DOUBLE GetParamterFloat(WORD index, WORD line);
	void* GetParameters();
	void* GetParemeters(std::string filepath);
	void* GetDiagData(WORD type);

};

