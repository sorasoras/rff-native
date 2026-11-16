#include "tc_rt.h"

void fn_800d57f8(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800d56bcu, &a);
    a.r[0] = param_2;
    a.r[1] = 0xffffffffu;
    a.r[2] = r3 - 1u;
    r3 = tc_call(0x800adf14u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = r3;
    (void)tc_call(0x800d56a4u, &a);
    wr32((u32)param_1 + 0x4b8u, rd32((u32)param_1 + 0x4b8u) | 0x40000000u);
    return;
}
