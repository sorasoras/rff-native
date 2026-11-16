#include "tc_rt.h"

s32 fn_802fac5c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = rd32(param_1);
    r31 = 0u;
    while (r4 != 0u) {
        r4 = rd32(r4);
        r31 = r31 + 1u;
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return (s32)r31;
}
