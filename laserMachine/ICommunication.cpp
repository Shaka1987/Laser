#include "stdafx.h"
#include "ICommunication.h"

ICommunication::ICommunication() 
	:m_status(COMMUNICATION_STATUS::CS_UNCONNECTED)
{

}

ICommunication::~ICommunication()
{
}

bool ICommunication::Connected()
{
	return (m_status == COMMUNICATION_STATUS::CS_CONNECTED);
}
