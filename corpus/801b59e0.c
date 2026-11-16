#include "tc_rt.h"

void fn_801b59e0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x30u);
    a.r[1] = rd32((u32)param_1 + 0x2cu);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 0x194u);
    r3 = tc_call(0x801b5420u, &a);
    a.r[0] = r3;
    a.r[1] = rd32((u32)param_1 + 0x198u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    a.r[0] = (u32)param_1 + 0xc4u;
    (void)tc_call(0x80190938u, &a);
    return;
}
