#include "tc_rt.h"

u32 fn_802f2348(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(param_1) == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        r4 = rd32(param_1 + 0x10u);
        r31 = 0u;
        if (r4 != 0u) {
            r0 = 0u;
            if (param_2 <= r4 && r4 <= param_3) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                r31 = 1u;
            }
        }
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = r31;
    }
    return r3;
}
