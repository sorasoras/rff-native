#include "tc_rt.h"

u32 fn_80239c9c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = rd32(param_1 + 4u);
    r5 = rd32(param_1);
    if (r4 == 0u || r5 == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        wr32(r4, r5);
        wr32(r5 + 4u, r4);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 1u;
    }
    return r3;
}
