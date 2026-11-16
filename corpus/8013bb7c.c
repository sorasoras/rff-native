#include "tc_rt.h"

void fn_8013bb7c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 8u);
    a.r[2] = 0u;
    r3 = tc_call(0x8013bdc0u, &a);
    a.r[0] = rd32((u32)param_1 + 4u);
    a.r[1] = r3;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = rd32((u32)param_1 + 4u);
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    return;
}
