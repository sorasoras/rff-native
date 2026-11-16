#include "tc_rt.h"

void fn_803056d0(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(param_1, (u32)param_2);
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x802f743cu, &a);
    if (r3 != 0u) {
        a.r[0] = rd32(param_1);
        (void)tc_call(0x802f7450u, &a);
    }
    wr32(rd32(param_1) + 8u, param_1);
    return;
}
