#include "tc_rt.h"

u32 fn_801c095c(u32 param_r3, u32 param_r4, u32 param_r5)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x2e8u;
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    r3 = tc_call(0x801c0900u, &a);
    if (r3 != 0u) {
        r31 = rd32(r3 + 8u);
    }
    return r31;
}
