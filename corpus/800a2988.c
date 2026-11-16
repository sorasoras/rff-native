#include "tc_rt.h"

u32 fn_800a2988(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = rd32(param_3);
    if (r3 == 0u) {
        a.r[0] = param_2;
        a.r[1] = param_3 + 4u;
        (void)tc_call(0x8009eff8u, &a);
        r3 = 1u;
    } else {
        r0 = r3 - 1u;
        r3 = 0u;
        wr32(param_3, r0);
    }
    return r3;
}
