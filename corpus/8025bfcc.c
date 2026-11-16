#include "tc_rt.h"

s32 fn_8025bfcc(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    r3 = (u32)param_1 - 1u;
    r4 = (u32)param_2 - 1u;
    r6 = (u32)param_3 + 1u;
    for (;;) {
        r6 = r6 - 1u;
        if (r6 == 0u) break;
        r3 = r3 + 1u;
        r0 = (u32)rd8(r3);
        r4 = r4 + 1u;
        r5 = (u32)rd8(r4);
        if (r0 != r5) {
            return (s32)(r0 - r5);
        }
        if (r0 == 0u) {
            return 0;
        }
    }
    return 0;
}
