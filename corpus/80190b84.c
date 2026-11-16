#include "tc_rt.h"

void fn_80190b84(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0xc0u, rd32((u32)param_1 + 0xc0u) + (u32)param_2);
    a.r[0] = (u32)param_1 + 0x70u;
    a.r[1] = 0x8033ac45u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = (u32)param_1 + 0x70u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    return;
}
