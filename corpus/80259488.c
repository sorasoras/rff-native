#include "tc_rt.h"

void fn_80259488(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    r5 = param_3;
    r8 = (u32)param_2 - 1u;
    r6 = (0u - (u32)param_1) & 3u;
    r3 = (u32)param_1 - 1u;
    if (r6 != 0u) {
        r5 = param_3 - r6;
        do {
            r8 = r8 + 1u;
            r6 = r6 - 1u;
            wr8(r3 + 1u, rd8(r8));
            r3 = r3 + 1u;
        } while (r6 != 0u);
    }
    r0 = r8 + 1u;
    r6 = r3 - 3u;
    r9 = r0 & 3u;
    r7 = (r5 >> 3u) & 0x1fffffffu;
    r8 = r8 - r9;
    r10 = (r0 << 3u) & 0x18u;
    r8 = r8 + 1u;
    r4 = rd32(r8);
    r11 = 0x20u - r10;
    do {
        r3 = rd32(r8 + 4u);
        r4 = ((r10 & 0x20u) != 0u) ? 0u : (r4 << (r10 & 0x1fu));
        r7 = r7 - 1u;
        r0 = ((r11 & 0x20u) != 0u) ? 0u : (r3 >> (r11 & 0x1fu));
        r3 = ((r10 & 0x20u) != 0u) ? 0u : (r3 << (r10 & 0x1fu));
        r0 = r4 | r0;
        wr32(r6 + 4u, r0);
        r8 = r8 + 8u;
        r4 = rd32(r8);
        wr32(r6 + 8u, r3 | (((r11 & 0x20u) != 0u) ? 0u : (r4 >> (r11 & 0x1fu))));
        r6 = r6 + 8u;
    } while (r7 != 0u);
    if ((r5 & 4u) != 0u) {
        r8 = r8 + 4u;
        wr32(r6 + 4u, (((r10 & 0x20u) != 0u) ? 0u : (r4 << (r10 & 0x1fu))) | (((r11 & 0x20u) != 0u) ? 0u : (rd32(r8) >> (r11 & 0x1fu))));
        r6 = r6 + 4u;
    }
    r5 = r5 & 3u;
    r4 = r8 + 3u;
    r3 = r6 + 3u;
    if (r5 != 0u) {
        r4 = r4 - (4u - r9);
        do {
            r4 = r4 + 1u;
            r5 = r5 - 1u;
            wr8(r3 + 1u, rd8(r4));
            r3 = r3 + 1u;
        } while (r5 != 0u);
        return;
    }
    return;
}
