#include "tc_rt.h"

void fn_8025e7dc(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    r4 = (u32)param_2 - 2u;
    r6 = (u32)param_1 - 2u;
    r5 = (u32)param_3 + 1u;
    for (;;) {
        r5 = r5 - 1u;
        if (r5 == 0u) break;
        r4 = r4 + 2u;
        r0 = (u32)rd16(r4);
        wr16(r6 + 2u, (u16)r0);
        r6 = r6 + 2u;
        if (r0 == 0u) {
            for (;;) {
                r5 = r5 - 1u;
                if (r5 == 0u) break;
                wr16(r6 + 2u, 0u);
                r6 = r6 + 2u;
            }
            return;
        }
    }
    return;
}
