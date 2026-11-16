#include "tc_rt.h"

void fn_802dcc44(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r4 = 0, r5 = 0;
    r0 = rd32((u32)param_1 + 0x30u);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        return;
    }
    if (!c0lt) {
        if ((s32)r0 >= 4) {
            return;
        }
        r4 = rd32((u32)param_1 + 0x34u);
        if ((s32)r4 > -47185920) {
            wr32((u32)param_1 + 0x34u, r4 + rd32((u32)param_1 + 0x48u));
            return;
        }
        wr32((u32)param_1 + 0x30u, 4u);
        return;
    }
    c0lt = (s32)r0 < 0;
    if (r0 == 0u) {
        r4 = rd32((u32)param_1 + 0x38u) + rd32((u32)param_1 + 0x3cu);
        wr32((u32)param_1 + 0x38u, r4);
        if ((s32)r4 < 6488064) {
            wr32((u32)param_1 + 0x34u, rd32((((u32)((s32)r4 >> 16) << 2u) & 0xfffffffcu) - 0x7fc63cc0u));
        } else {
            wr32((u32)param_1 + 0x34u, 0u);
        }
        if (rd32((u32)param_1 + 0x34u) != 0u) {
            return;
        }
        wr32((u32)param_1 + 0x30u, 1u);
        return;
    }
    if (!c0lt) {
        r5 = rd32((u32)param_1 + 0x44u);
        r0 = rd32((u32)param_1 + 0x34u) + rd32((u32)param_1 + 0x40u);
        wr32((u32)param_1 + 0x34u, r0);
        if ((s32)r0 <= (s32)r5) {
            wr32((u32)param_1 + 0x34u, r5);
            wr32((u32)param_1 + 0x30u, 2u);
        }
        if ((s32)rd32((u32)param_1 + 0x34u) > -47185920) {
            return;
        }
        r0 = (u32)rd8((u32)param_1 + 0xdu);
        r5 = rd32((u32)param_1 + 8u);
        r4 = ((u32)rd8((u32)param_1 + 0xcu) << 9u) & 0xfffffe00u;
        wr32((u32)param_1 + 0x30u, 4u);
        r0 = (r0 << 2u) & 0xfffffffcu;
        wr32(r5 + r4 + r0 + 0x408u, 0u);
        return;
    }
    return;
}
