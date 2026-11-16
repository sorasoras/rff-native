#include "tc_rt.h"

void fn_80224ad8(s32 param_1)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r4 = 0, r6 = 0, r8 = 0;
    r8 = 0u;
    r4 = 0u;
    ctr = 0x1eu;
    do {
        r6 = r4 - 0x7fb66fa0u;
        r0 = (u32)rd16(r6 + 0x1e0u);
        if (r0 != 0x2e8u) {
            c0lt = (s32)r0 < 450;
            if (r0 == 0x1c2u) {
                wr32((u32)param_1 + 0x120u, rd32((u32)param_1 + 0x120u) + (u32)rd8(r6 + 0x1e2u));
            } else if (!c0lt) {
                if ((s32)r0 < 452) {
                    wr32((u32)param_1 + 0x128u, rd32((u32)param_1 + 0x128u) + (u32)rd8(r6 + 0x1e2u));
                }
            } else {
                c0lt = (s32)r0 < 448;
                if (r0 == 0x1c0u) {
                    wr32((u32)param_1 + 0x12cu, rd32((u32)param_1 + 0x12cu) + (u32)rd8(r6 + 0x1e2u));
                } else if (!c0lt) {
                    wr32((u32)param_1 + 0x124u, rd32((u32)param_1 + 0x124u) + (u32)rd8(r6 + 0x1e2u));
                }
            }
        }
        r4 = r4 + 4u;
        r6 = r4 - 0x7fb66fa0u;
        r0 = (u32)rd16(r6 + 0x1e0u);
        if (r0 != 0x2e8u) {
            c0lt = (s32)r0 < 450;
            if (r0 == 0x1c2u) {
                wr32((u32)param_1 + 0x120u, rd32((u32)param_1 + 0x120u) + (u32)rd8(r6 + 0x1e2u));
            } else if (!c0lt) {
                if ((s32)r0 < 452) {
                    wr32((u32)param_1 + 0x128u, rd32((u32)param_1 + 0x128u) + (u32)rd8(r6 + 0x1e2u));
                }
            } else {
                c0lt = (s32)r0 < 448;
                if (r0 == 0x1c0u) {
                    wr32((u32)param_1 + 0x12cu, rd32((u32)param_1 + 0x12cu) + (u32)rd8(r6 + 0x1e2u));
                } else if (!c0lt) {
                    wr32((u32)param_1 + 0x124u, rd32((u32)param_1 + 0x124u) + (u32)rd8(r6 + 0x1e2u));
                }
            }
        }
        r8 = r8 + 1u;
        r4 = r4 + 4u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
