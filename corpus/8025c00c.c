#include "tc_rt.h"

u32 fn_8025c00c(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    r3 = (u32)param_1 - 1u;
    r0 = (u32)param_2 & 0xffu;
    for (;;) {
        r3 = r3 + 1u;
        r4 = (u32)rd8(r3);
        if (r4 == 0u) break;
        if (r4 == r0) {
            return r3;
        }
    }
    if (r0 == 0u) {
        return r3;
    }
    return 0u;
}
