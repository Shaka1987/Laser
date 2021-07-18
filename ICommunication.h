#pragma once
class ICommunication
{
public:

	ICommunication();
	~ICommunication();
	virtual DWORD Connect();
	
};

