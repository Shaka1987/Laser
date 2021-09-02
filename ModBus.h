#pragma once
#include "ICommunication.h"

#include <string>
#include <modbus.h>
class CModBus :
    public ICommunication
{
public:
    WORD Connect();
    WORD Disconnect();
 protected:
    modbus_t* m_ctx;
private:
    const WORD TYPE = 0;
    const WORD INDEX1 = 1;
    const WORD INDEX2 = 2;
    const WORD SUBINDEX = 3;


    const WORD NC_WR_PLC = 1;
    const WORD NC_R_SYS = 2;
    const WORD NC_R_OPER_TIME_INT = 3;
    const WORD NC_R_PARA_SYS_INT = 4;
    const WORD NC_R_PARA_SYS_DOUBLE = 5;
    const WORD NC_R_DIA_INT = 6;
    const WORD NC_R_DIA_DOUBLE = 7;
    const WORD NC_W_TOFFSET_INT = 10;
    const WORD NC_WR_TOOFSET_INT = 11;
    const WORD NC_WR_TWEAR_INT = 12;
    const WORD NC_WR_MACRO_INT = 15;                                               
    const WORD NC_WR_MACRO_INT1000 = 16;
    const WORD NC_WR_MACRO_FLOAT = 17;
    const WORD NC_WR_MACRO_DOUBLE = 18;
    const WORD NC_OPEN_FILE = 20;
    const WORD NC_CLOSE_FILE = 21;
    const WORD NC_READ_FILE = 22;
    const WORD NC_WRITE_FILE = 23;
    const WORD NC_DELETE_FILE = 25;
    const WORD NC_LIST_FILE = 30;
    const WORD NC_CLOSE = 31;
    const WORD NC_R_FILE_LIST = 32;

    bool SubjectAddress(WORD address, WORD type,  WORD subIndex, WORD index2=0, WORD const* const pData = nullptr, WORD len_data = 0,  WORD index1 = 0);

    bool ReadAddress(WORD address, WORD * const pData, WORD len_data, WORD type, WORD index2, WORD subIndex, WORD index1);

    bool ReadData(WORD address,  WORD* const p_output_data, WORD len_output_data, WORD type,  WORD subIndex, WORD index2 =0, WORD const* const p_input_data = nullptr, WORD len_input_data = 0, WORD index1 = 0);
public: //to be deleted
    bool ReadFile(const char* pName, WORD len, std::string& data);
    INT32 GetParameterInt32(WORD index, WORD line);
    double GetParameterFloat64(WORD index, WORD line);
};

