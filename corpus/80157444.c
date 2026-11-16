#include "tc_rt.h"

void fn_80157444(s32 param_1, s32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0;
    r3 = (u32)param_1;
    r6 = (u32)param_1 + 0x28u;
    r7 = 0u;
    r8 = 0u;
    ctr = 7u;
    do {
        r0 = rd32(r3 + 0x28u);
        if ((u32)param_2 == r0) {
            r7 = r6;
        } else {
            if ((u32)param_3 == r0) {
                r8 = r6;
            }
        }
        r3 = r3 + 4u;
        r6 = r6 + 4u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if (r7 != 0u && r8 != 0u) {
        r3 = rd32(r8);
        wr32(r8, rd32(r7));
        wr32(r7, r3);
        return;
    }
    if (r7 != 0u && r8 == 0u) {
        wr32(r7, (u32)param_3);
        return;
    }
    if (r7 == 0u) {
        if (r8 == 0u) {
            return;
        }
        wr32(r8, (u32)param_2);
        return;
    }
    return;
}
