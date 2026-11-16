#include "tc_rt.h"

void fn_801f6994(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = 0x8033c347u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    return;
}
