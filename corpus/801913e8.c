#include "tc_rt.h"

void fn_801913e8(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x1c4u, param_2);
    wr32((u32)param_1 + 0x1c0u, 2u);
    wr32((u32)param_1 + 0x1c8u, param_3);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = 0x8033acc9u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    a.r[0] = (u32)param_1 + 0xd4u;
    (void)tc_call(0x801e63e8u, &a);
    return;
}
