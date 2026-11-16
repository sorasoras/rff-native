#include "tc_rt.h"

u32 fn_800a6d5c(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = param_2;
    a.r[3] = 0u;
    r3 = tc_call(0x800a3090u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = r3;
        (void)tc_call(0x800a6d04u, &a);
        r3 = 1u;
    }
    return r3;
}
