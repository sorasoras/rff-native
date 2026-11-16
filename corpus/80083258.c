#include "tc_rt.h"

void fn_80083258(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r7 = 0, r11 = 0, r12 = 0, r30 = 0, r31 = 0;
    (void)param_1;
    r7 = 0u;
    r31 = 0u;
    while (r31 < param_3) {
        r3 = param_4;
        r11 = (u32)param_2 + r7;
        r30 = 0u;
        do {
            if (param_4 > 0u) {
                r0 = (param_4 >> 2u) & 0x3fffffffu;
                ctr = r0;
                if (r0 != 0u) {
                    do {
                        r3 = param_3 * r30;
                        r30 = r30 + 1u;
                        r0 = (r3 << 3u) & 0xfffffff8u;
                        wr8(r11 + r0, 0u);
                        r12 = r11 + r0;
                        r3 = param_3 * r30;
                        r30 = r30 + 1u;
                        wr8(r12 + 1u, 0u);
                        wr8(r12 + 2u, 0xeu);
                        wr8(r12 + 3u, 0u);
                        r0 = (r3 << 3u) & 0xfffffff8u;
                        r3 = param_3 * r30;
                        r30 = r30 + 1u;
                        wr8(r12 + 4u, 0u);
                        wr8(r12 + 5u, 1u);
                        wr8(r12 + 6u, 0u);
                        wr8(r12 + 7u, 0u);
                        r12 = r11 + r0;
                        r0 = (r3 << 3u) & 0xfffffff8u;
                        wr8(r12, 0u);
                        r3 = param_3 * r30;
                        r30 = r30 + 1u;
                        wr8(r12 + 1u, 0u);
                        wr8(r12 + 2u, 0xeu);
                        wr8(r12 + 3u, 0u);
                        wr8(r12 + 4u, 0u);
                        wr8(r12 + 5u, 1u);
                        wr8(r12 + 6u, 0u);
                        wr8(r12 + 7u, 0u);
                        r12 = r11 + r0;
                        r0 = (r3 << 3u) & 0xfffffff8u;
                        wr8(r12, 0u);
                        wr8(r12 + 1u, 0u);
                        wr8(r12 + 2u, 0xeu);
                        wr8(r12 + 3u, 0u);
                        wr8(r12 + 4u, 0u);
                        wr8(r12 + 5u, 1u);
                        wr8(r12 + 6u, 0u);
                        wr8(r12 + 7u, 0u);
                        r12 = r11 + r0;
                        wr8(r11 + r0, 0u);
                        wr8(r12 + 1u, 0u);
                        wr8(r12 + 2u, 0xeu);
                        wr8(r12 + 3u, 0u);
                        wr8(r12 + 4u, 0u);
                        wr8(r12 + 5u, 1u);
                        wr8(r12 + 6u, 0u);
                        wr8(r12 + 7u, 0u);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r3 = param_4 & 3u;
                    if (r3 == 0u) break;
                }
                ctr = r3;
                do {
                    r3 = param_3 * r30;
                    r30 = r30 + 1u;
                    r0 = (r3 << 3u) & 0xfffffff8u;
                    wr8(r11 + r0, 0u);
                    r12 = r11 + r0;
                    wr8(r12 + 1u, 0u);
                    wr8(r12 + 2u, 0xeu);
                    wr8(r12 + 3u, 0u);
                    wr8(r12 + 4u, 0u);
                    wr8(r12 + 5u, 1u);
                    wr8(r12 + 6u, 0u);
                    wr8(r12 + 7u, 0u);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        } while (0);
        r31 = r31 + 1u;
        r7 = r7 + 8u;
    }
    return;
}
