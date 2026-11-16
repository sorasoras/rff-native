#include "tc_rt.h"

void fn_8025bdf4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    r4 = (u32)param_2 - 1u;
    r6 = (u32)param_1 - 1u;
    r5 = (u32)param_3 + 1u;
    for (;;) {
        r5 = r5 - 1u;
        if (r5 == 0u) break;
        r4 = r4 + 1u;
        r0 = (u32)rd8(r4);
        wr8(r6 + 1u, (u8)r0);
        r6 = r6 + 1u;
        if (r0 == 0u) {
            for (;;) {
                r5 = r5 - 1u;
                if (r5 == 0u) break;
                wr8(r6 + 1u, 0u);
                r6 = r6 + 1u;
            }
            return;
        }
    }
    return;
}
