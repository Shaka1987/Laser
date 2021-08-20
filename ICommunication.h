#pragma once
class ICommunication
{
public:

	ICommunication();
	~ICommunication();
	virtual WORD Connect() = 0;
	virtual WORD Disconnect() = 0;
	virtual WORD GetParameter(WORD index, WORD line) = 0;
	
};

