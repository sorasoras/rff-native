#include "tc_rt.h"

void fn_801a29b8(s32 param_1, u32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdfe8u, param_2);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 0u;
    f1 = tc_callf(0x8014a130u, &a);
    wrf32d((u32)param_1 + 0xd58u, f1);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 1u;
    f1 = tc_callf(0x8014a130u, &a);
    wrf32d((u32)param_1 + 0xd5cu, f1);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 2u;
    f1 = tc_callf(0x8014a130u, &a);
    wrf32d((u32)param_1 + 0xd60u, f1);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 3u;
    f1 = tc_callf(0x8014a130u, &a);
    wrf32d((u32)param_1 + 0xd64u, f1);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 4u;
    f1 = tc_callf(0x8014a130u, &a);
    wrf32d((u32)param_1 + 0xd68u, f1);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 0xau;
    f1 = tc_callf(0x8014a130u, &a);
    wrf32d((u32)param_1 + 0xd50u, f1);
    return;
}
