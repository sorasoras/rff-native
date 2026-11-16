#include "tc_rt.h"

void fn_8026ac30(void)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = rd32(0x80502c90u);
    if (r3 > 0x44u || (r3 + 0x4000u) <= 0x44u || (rd32(0x805029f0u) & 3u) == 0u) {
        r5 = 0x80000044u;
    } else {
        r5 = 0x44u;
    }
    r29 = rd32(r5);
    r31 = 0x8038f478u;
    r30 = 0u;
    do {
        if ((r29 & (((r30 & 0x20u) != 0u) ? 0u : (1u << (r30 & 0x1fu)))) != 0u && r30 != 4u) {
            r6 = rd32(r31);
            r3 = rd32(0x80502c90u);
            if (r6 < r3 || r6 >= (r3 + 0x4000u) || (rd32(0x805029f0u) & 3u) == 0u) {
                if (r6 < 0x7e000000u || r6 > 0x80000000u) {
                    r27 = (r6 & 0x3fffffffu) | 0x80000000u;
                } else {
                    r27 = r6;
                }
            } else {
                r27 = r6;
            }
            a.r[0] = r27;
            a.r[1] = r6 - 0x7fffbb40u;
            a.r[2] = 0x100u;
            (void)tc_call(0x8000449cu, &a);
            a.r[0] = r27;
            a.r[1] = 0x100u;
            (void)tc_call(0x80268a84u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 <= 14);
    return;
}
