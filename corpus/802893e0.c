#include "tc_rt.h"

u32 fn_802893e0(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (param_1 < 0x10u) {
        r31 = rd32(((param_1 << 2u) & 0x3fcu) - 0x7faf01e0u);
    } else {
        r31 = 0u;
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return r31;
}
