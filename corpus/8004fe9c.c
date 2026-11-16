#include "tc_rt.h"

u32 fn_8004fe9c(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r6 = 0;
    r6 = rd32((u32)param_1 + 0x2cu);
    r5 = (u32)rd16((u32)param_1 + 0x28u) * (u32)rd16((u32)param_1 + 0x2au);
    if (r6 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r6;
    }
    wr32((u32)param_1 + 0x2cu, r0);
    r6 = 0u;
    ctr = r5;
    if (r5 > 0u) {
        do {
            r5 = rd32((u32)param_1 + 0x2cu);
            r0 = rd32(r5 + r6);
            if (r0 == 0u) {
                r0 = 0u;
            } else {
                r0 = (u32)param_2 + r0;
            }
            wr32(r5 + r6, r0);
            r6 = r6 + 8u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    r0 = rd32((u32)param_1 + 0x34u);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r0;
    }
    wr32((u32)param_1 + 0x34u, r0);
    return 0x8004fddcu;
}
