#include "tc_rt.h"

void fn_8022b064(u32 param_r3, u32 param_r4)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r26 = 0, r27 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    r30 = param_r3 + 0x10u;
    r0 = rd32(param_r3 + 4u);
    r8 = 0u;
    r29 = param_r3 + rd32(param_r3 + 0xcu);
    r9 = rd32(param_r3 + 8u);
    r11 = 0u;
    do {
        if (r11 == 0u) {
            r12 = rd32(r30);
            r11 = 0x20u;
            r30 = r30 + 4u;
        }
        if ((r12 & 0x80000000u) != 0u) {
            r6 = (u32)rd8(r29);
            r29 = r29 + 1u;
            wr8(param_r4 + r8, (u8)r6);
            r8 = r8 + 1u;
        } else {
            r6 = (u32)rd8(param_r3 + r9);
            r7 = (u32)rd8(param_r3 + r9 + 1u);
            r9 = r9 + 2u;
            r7 = (r7 & 0xffff00ffu) | ((r6 << 8u) & 0xff00u);
            r10 = (u32)((s32)r7 >> 12);
            r7 = r8 - (r7 & 0xfffu);
            if (r10 == 0u) {
                r6 = (u32)rd8(r29);
                r29 = r29 + 1u;
                r10 = r6 + 0x12u;
            } else {
                r10 = r10 + 2u;
            }
            c1lt = (s32)r10 < 0;
            r6 = 0u;
            if ((s32)r10 > 0) {
                r27 = r10 - 8u;
                if ((s32)r10 > 8) {
                    r28 = 0u;
                    if (!c1lt && (s32)r10 <= 2147483646) {
                        r28 = 1u;
                    }
                    if (r28 != 0u) {
                        r28 = param_r4 + r8;
                        ctr = ((r27 + 7u) >> 3u) & 0x1fffffffu;
                        if ((s32)r27 > 0) {
                            do {
                                r26 = param_r4 + r7;
                                r27 = r8 + param_r4;
                                r8 = r8 + 8u;
                                r6 = r6 + 8u;
                                wr8(r28, rd8(r26 - 1u));
                                r28 = r28 + 8u;
                                r31 = (u32)rd8(param_r4 + r7);
                                r7 = r7 + 8u;
                                wr8(r27 + 1u, (u8)r31);
                                wr8(r27 + 2u, rd8(r26 + 1u));
                                wr8(r27 + 3u, rd8(r26 + 2u));
                                wr8(r27 + 4u, rd8(r26 + 3u));
                                wr8(r27 + 5u, rd8(r26 + 4u));
                                wr8(r27 + 6u, rd8(r26 + 5u));
                                wr8(r27 + 7u, rd8(r26 + 6u));
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r28 = param_r4 + r8;
                ctr = r10 - r6;
                if ((s32)r6 < (s32)r10) {
                    do {
                        r6 = r6 + 1u;
                        r10 = (u32)rd8(param_r4 + r7 - 1u);
                        r8 = r8 + 1u;
                        r7 = r7 + 1u;
                        wr8(r28, (u8)r10);
                        r28 = r28 + 1u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r12 = (r12 << 1u) & 0xfffffffeu;
        r11 = r11 - 1u;
    } while ((s32)r8 < (s32)r0);
    return;
}
