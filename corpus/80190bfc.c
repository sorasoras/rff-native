#include "tc_rt.h"

void fn_80190bfc(s32 param_1, s32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + ((u32)param_2 * 0x58u) + 0x18u;
    a.r[0] = r31;
    a.r[1] = 0x8033ac45u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = r31;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    return;
}
