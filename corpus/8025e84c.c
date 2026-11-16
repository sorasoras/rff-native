#include "tc_rt.h"

s32 fn_8025e84c(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    r5 = (u32)param_1 - 2u;
    r4 = (u32)param_2 - 2u;
    for (;;) {
        r5 = r5 + 2u;
        r3 = (u32)rd16(r5);
        r4 = r4 + 2u;
        r0 = (u32)rd16(r4);
        if (r3 != r0) break;
        if (r3 == 0u) {
            return 0;
        }
    }
    r3 = r3 - r0;
    return (s32)r3;
}
