#include "tc_rt.h"

void fn_802f0ec4(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    wr32((u32)param_2 + 8u, param_3);
    r31 = r3;
    wr32(0x817fdfe8u, (u32)param_1 + 0xcu);
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = (u32)param_2;
    (void)tc_call(0x802deba4u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
