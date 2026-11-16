#include "tc_rt.h"

u32 fn_8025e8c0(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    r3 = (u32)param_1 - 2u;
    for (;;) {
        r3 = r3 + 2u;
        r0 = (u32)rd16(r3);
        if (r0 == 0u) break;
        if (r0 == param_2) {
            return r3;
        }
    }
    if (param_2 == 0u) {
        return r3;
    }
    return 0u;
}
