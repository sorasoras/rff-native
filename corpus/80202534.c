#include "tc_rt.h"

void fn_80202534(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x40u;
    a.r[1] = 0x8033c54eu;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = (u32)param_1 + 0x40u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    return;
}
