#include "tc_rt.h"

void fn_8030e1d4(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r3 = tc_call(0x802f85a0u, &a);
    a.r[0] = r3;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x802f86b4u, &a);
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = (u32)param_2 + 0x114u;
    r30 = r3;
    a.r[0] = (u32)param_1 + 4u;
    a.r[1] = r29;
    (void)tc_call(0x802debd0u, &a);
    wr32(0x817fdfe8u, (u32)param_1 + 0x14u);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = r29;
    (void)tc_call(0x802deba4u, &a);
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
