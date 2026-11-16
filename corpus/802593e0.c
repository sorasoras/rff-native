#include "tc_rt.h"

void fn_802593e0(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r5 = param_3;
    r7 = (u32)param_1 + param_3;
    r6 = (u32)param_2 + param_3;
    r3 = r7 & 3u;
    if (r3 != 0u) {
        r5 = param_3 - r3;
        do {
            r6 = r6 - 1u;
            r3 = r3 - 1u;
            wr8(r7 - 1u, rd8(r6));
            r7 = r7 - 1u;
        } while (r3 != 0u);
    }
    r4 = (r5 >> 5u) & 0x7ffffffu;
    if (r4 != 0u) {
        do {
            r4 = r4 - 1u;
            r0 = rd32(r6 - 8u);
            wr32(r7 - 4u, rd32(r6 - 4u));
            r3 = rd32(r6 - 0xcu);
            wr32(r7 - 8u, r0);
            r0 = rd32(r6 - 0x10u);
            wr32(r7 - 0xcu, r3);
            r3 = rd32(r6 - 0x14u);
            wr32(r7 - 0x10u, r0);
            r0 = rd32(r6 - 0x18u);
            wr32(r7 - 0x14u, r3);
            r3 = rd32(r6 - 0x1cu);
            wr32(r7 - 0x18u, r0);
            r6 = r6 - 0x20u;
            r0 = rd32(r6);
            wr32(r7 - 0x1cu, r3);
            wr32(r7 - 0x20u, r0);
            r7 = r7 - 0x20u;
        } while (r4 != 0u);
    }
    r3 = (r5 >> 2u) & 7u;
    if (r3 != 0u) {
        do {
            r6 = r6 - 4u;
            r3 = r3 - 1u;
            wr32(r7 - 4u, rd32(r6));
            r7 = r7 - 4u;
        } while (r3 != 0u);
    }
    r5 = r5 & 3u;
    if (r5 != 0u) {
        do {
            r6 = r6 - 1u;
            r5 = r5 - 1u;
            wr8(r7 - 1u, rd8(r6));
            r7 = r7 - 1u;
        } while (r5 != 0u);
        return;
    }
    return;
}
