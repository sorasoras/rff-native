#include "tc_rt.h"

void fn_80259548(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    r5 = param_3;
    r11 = (u32)param_1 + param_3;
    r10 = (u32)param_2 + param_3;
    r3 = r11 & 3u;
    if (r3 != 0u) {
        r5 = param_3 - r3;
        do {
            r10 = r10 - 1u;
            r3 = r3 - 1u;
            wr8(r11 - 1u, rd8(r10));
            r11 = r11 - 1u;
        } while (r3 != 0u);
    }
    r8 = (r10 << 3u) & 0x18u;
    r7 = r10 & 3u;
    r9 = 0x20u - r8;
    r6 = (r5 >> 3u) & 0x1fffffffu;
    r10 = r10 + (4u - r7);
    r10 = r10 - 4u;
    r4 = rd32(r10);
    do {
        r0 = rd32(r10 - 4u);
        r3 = ((r9 & 0x20u) != 0u) ? 0u : (r4 >> (r9 & 0x1fu));
        r6 = r6 - 1u;
        r4 = ((r8 & 0x20u) != 0u) ? 0u : (r0 << (r8 & 0x1fu));
        r0 = ((r9 & 0x20u) != 0u) ? 0u : (r0 >> (r9 & 0x1fu));
        r3 = r4 | r3;
        wr32(r11 - 4u, r3);
        r10 = r10 - 8u;
        r4 = rd32(r10);
        r0 = (((r8 & 0x20u) != 0u) ? 0u : (r4 << (r8 & 0x1fu))) | r0;
        wr32(r11 - 8u, r0);
        r11 = r11 - 8u;
    } while (r6 != 0u);
    if ((r5 & 4u) != 0u) {
        r10 = r10 - 4u;
        wr32(r11 - 4u, (((r8 & 0x20u) != 0u) ? 0u : (rd32(r10) << (r8 & 0x1fu))) | (((r9 & 0x20u) != 0u) ? 0u : (r4 >> (r9 & 0x1fu))));
        r11 = r11 - 4u;
    }
    r5 = r5 & 3u;
    if (r5 != 0u) {
        r10 = r10 + r7;
        do {
            r10 = r10 - 1u;
            r5 = r5 - 1u;
            wr8(r11 - 1u, rd8(r10));
            r11 = r11 - 1u;
        } while (r5 != 0u);
        return;
    }
    return;
}
