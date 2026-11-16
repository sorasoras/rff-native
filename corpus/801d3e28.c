#include "tc_rt.h"

void fn_801d3e28(u32 param_r3)
{
    u32 r0 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    (void)tc_call(0x8007e848u, &a);
    r0 = rd32(0x805710e0u) * 0x6d0u;
    wr32(0x8057118cu, rd32(0x8057118cu) | 0x20000u);
    a.r[0] = r0 - 0x7fc2e738u;
    (void)tc_call(0x80056f08u, &a);
    return;
}
