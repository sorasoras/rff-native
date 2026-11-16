#include "tc_rt.h"

u32 fn_802592d8(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r4 = 0, r6 = 0, r7 = 0;
    r7 = (u32)param_2 - 1u;
    r6 = (u32)param_1 - 1u;
    r4 = (u32)param_3 + 1u;
    for (;;) {
        r4 = r4 - 1u;
        if (r4 == 0u) break;
        r6 = r6 + 1u;
        r7 = r7 + 1u;
        if ((u32)rd8(r6) != (u32)rd8(r7)) {
            if ((u32)rd8(r6) >= (u32)rd8(r7)) {
                return 1u;
            }
            return 0xffffffffu;
        }
    }
    return 0u;
}
