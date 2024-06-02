#pragma once
#include <include/shaiya/include/SLog.h>
#include <shaiya/include/common.h>
#include <shaiya/include/common/SConnection.h>

namespace shaiya
{
    #pragma pack(push, 1)
    struct CLogConnection
    {
        SConnection connection;  //0x00
        PAD(16);
        SLog log;                //0xE0
        // 0x100
        PAD(8);
        // 0x108
    };
    #pragma pack(pop)

    static auto g_pClientToLog = (CLogConnection*)0x10A2710;
}
