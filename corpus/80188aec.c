#include "tc_rt.h"

void fn_80188aec(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x34u) != 0u) {
        a.r[0] = (u32)param_1 + 0x278u;
        a.r[1] = param_r4;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = (u32)param_1 + 0x278u;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
    }
    return;
}
