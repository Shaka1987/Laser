#pragma once
#include "ICommunication.h"
#include "modbus.h"
class CModBus :
    public ICommunication
{

    WORD Connect();
    WORD Disconnect();
    WORD GetParameter(WORD index, WORD line);
    protected:
    modbus_t* m_ctx;
private:
    bool SubjectData(WORD address, WORD type, WORD index2, WORD subIndex, WORD const* pData = nullptr, WORD len_data=0, WORD index1 = 0);
    bool ReadData(WORD type, WORD index1, WORD index2, WORD subIndex, WORD const *pData);

    bool ReadFile(WORD open_method, CHAR* pName, WORD const* pData);
};

