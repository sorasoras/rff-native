#include "tc_rt.h"

void fn_8003bb84(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r6 = 0;
    r6 = rd32((u32)param_1 + 0x2cu);
    r0 = (u32)rd16((u32)param_1 + 0x28u) * (u32)rd16((u32)param_1 + 0x2au);
    if (r6 == 0u) {
        r5 = 0u;
    } else {
        r5 = (u32)param_2 + r6;
    }
    wr32((u32)param_1 + 0x2cu, r5);
    ctr = r0;
    if (r0 > 0u) {
        do {
            r0 = rd32(r5);
            if (r0 == 0u) {
                r0 = 0u;
            } else {
                r0 = (u32)param_2 + r0;
            }
            wr32(r5, r0);
            r5 = r5 + 0xcu;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    wr32((u32)param_2 + 0x10u, 0x8003b55cu);
    wr32((u32)param_2 + 0x14u, 0x8003b62cu);
    wr32((u32)param_2 + 0x18u, 0x8003b87cu);
    return;
}
