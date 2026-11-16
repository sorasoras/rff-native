#include "tc_rt.h"

void fn_80037914(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    if (rd32((u32)param_1 + 4u) != 0u) {
        r0 = rd32((u32)param_1 + 0xcu);
        if (r0 == 0u) {
            r0 = 0u;
        } else {
            r0 = (u32)param_1 + r0;
        }
        wr32((u32)param_1 + 0xcu, r0);
        r6 = 0u;
        r5 = 0u;
        while (r6 < rd32((u32)param_1 + 8u)) {
            r4 = rd32((u32)param_1 + 0xcu);
            r0 = rd32(r4 + r5);
            if (r0 == 0u) {
                r0 = 0u;
            } else {
                r0 = (u32)param_1 + r0;
            }
            wr32(r4 + r5, r0);
            r5 = r5 + 8u;
            r6 = r6 + 1u;
        }
        wr32((u32)param_1 + 4u, 0u);
        return;
    }
    return;
}
