#include "tc_rt.h"

u32 fn_802facac(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = rd32(param_1);
    if (r31 == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        wr32(param_1, rd32(r31));
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = r31;
    }
    return r3;
}
