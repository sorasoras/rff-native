#include "tc_rt.h"

void fn_80306c2c(s32 param_1, u32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = (u32)param_1 + 0x354u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = r31;
    (void)tc_call(0x8022d56cu, &a);
    wr32(0x817fdfe8u, (u32)param_1 + 0x388u);
    a.r[0] = (u32)param_1 + 0x384u;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = param_2;
    (void)tc_call(0x802deba4u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022d648u, &a);
    return;
}
