#include "tc_rt.h"

void fn_8011b480(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = rd32(param_1);
    r3 = rd32(param_1 + 4u);
    r6 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    if (r4 == 0x64u) {
        r3 = rd32(0x80571198u);
        r7 = 1u;
        ctr = 2u;
        do {
            r0 = r7 - 1u;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r5 = r3 & ~r0;
            if (r6 != 0u) {
                r5 = r3 | r0;
            }
            r0 = ((r7 & 0x20u) != 0u) ? 0u : (1u << (r7 & 0x1fu));
            r3 = r5;
            r5 = r5 & ~r0;
            if (r6 != 0u) {
                r5 = r3 | r0;
            }
            r0 = r7 + 1u;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r3 = r5;
            r5 = r5 & ~r0;
            if (r6 != 0u) {
                r5 = r3 | r0;
            }
            r0 = r7 + 2u;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r3 = r5;
            r5 = r5 & ~r0;
            if (r6 != 0u) {
                r5 = r3 | r0;
            }
            r0 = r7 + 3u;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r3 = r5;
            r5 = r5 & ~r0;
            if (r6 != 0u) {
                r5 = r3 | r0;
            }
            r0 = r7 + 4u;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r3 = r5;
            r5 = r5 & ~r0;
            if (r6 != 0u) {
                r5 = r3 | r0;
            }
            r3 = r5;
            r7 = r7 + 6u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        wr32(0x80571198u, r5);
        return;
    }
    if ((s32)r4 < 13) {
        r0 = r4 - 1u;
        r4 = rd32(0x80571198u);
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r3 = r4 & ~r0;
        if (r6 != 0u) {
            r3 = r4 | r0;
        }
        wr32(0x80571198u, r3);
        return;
    }
    return;
}
