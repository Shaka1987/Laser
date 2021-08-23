#pragma once
#include <string>
class ICommunication
{
public:

	ICommunication();
	~ICommunication();
	virtual WORD Connect() = 0;
	virtual WORD Disconnect() = 0;
	virtual bool ReadFile(const char* pName, WORD len, std::string& data) = 0;
	
};

