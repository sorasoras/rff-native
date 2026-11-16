#include "tc_rt.h"

u32 fn_8023a7c0(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r5 = rd32(0x80571668u);
    r4 = 0u;
    r31 = (((0u - r5) | r5) >> 0x1fu) & 1u;
    if ((u32)param_1 != 0u) {
        r4 = 0x8023a6f0u;
    }
    wr32(0x80571668u, r4);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return r31;
}
