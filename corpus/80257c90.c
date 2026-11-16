#include "tc_rt.h"

void fn_80257c90(u32 param_1, s32 param_2, s32 param_3)
{
    u32 c0eq = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r10 = 0, r11 = 0, r12 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
    wr32(0x817fdfa0u, 0x817fe000u);
    r8 = (u32)rd8((u32)param_2 + 4u);
    r11 = 0u;
    wr32(0x817fdffcu, 0u);
    r7 = (u32)rd8((u32)param_3 + 4u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r12 = r8 + r7 - 1u;
    r6 = r12 - 0x7e802057u;
    wr8(param_1, 0u);
    r0 = r6;
    while ((s32)r12 > 0) {
        r31 = (u32)rd8((u32)param_3 + 4u) - 1u;
        r30 = r12 - r31 - 1u;
        if ((s32)r30 < 0) {
            r30 = 0u;
            r31 = r12 - 1u;
        }
        r8 = (u32)param_3 + r31;
        r31 = r31 + 1u;
        r7 = (u32)rd8((u32)param_2 + 4u) - r30;
        r29 = r8 + 5u;
        r30 = (u32)param_2 + r30 + 5u;
        if ((s32)r31 > (s32)r7) {
            r31 = r7;
        }
        do {
            if ((s32)r31 > 0) {
                r7 = (r31 >> 3u) & 0x1fffffffu;
                ctr = r7;
                if (r7 != 0u) {
                    do {
                        r10 = (u32)rd8(r30);
                        r7 = r10 * (u32)rd8(r29);
                        r10 = (u32)rd8(r30 + 1u);
                        r11 = r11 + r7;
                        r7 = r10 * (u32)rd8(r29 - 1u);
                        r10 = (u32)rd8(r30 + 2u);
                        r11 = r11 + r7;
                        r7 = r10 * (u32)rd8(r29 - 2u);
                        r10 = (u32)rd8(r30 + 3u);
                        r11 = r11 + r7;
                        r7 = r10 * (u32)rd8(r29 - 3u);
                        r10 = (u32)rd8(r30 + 4u);
                        r11 = r11 + r7;
                        r7 = r10 * (u32)rd8(r29 - 4u);
                        r10 = (u32)rd8(r30 + 5u);
                        r11 = r11 + r7;
                        r7 = r10 * (u32)rd8(r29 - 5u);
                        r10 = (u32)rd8(r30 + 6u);
                        r11 = r11 + r7;
                        r7 = r10 * (u32)rd8(r29 - 6u);
                        r10 = (u32)rd8(r30 + 7u);
                        r8 = (u32)rd8(r29 - 7u);
                        r30 = r30 + 8u;
                        r29 = r29 - 8u;
                        r11 = r11 + r7;
                        r11 = r11 + (r10 * r8);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r31 = r31 & 7u;
                    if (r31 == 0u) break;
                }
                ctr = r31;
                do {
                    r10 = (u32)rd8(r30);
                    r30 = r30 + 1u;
                    r8 = (u32)rd8(r29);
                    r29 = r29 - 1u;
                    r11 = r11 + (r10 * r8);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        } while (0);
        r8 = ppc_mulhwu(0xcccccccdu, r11);
        r12 = r12 - 1u;
        r7 = r8;
        r8 = (r8 >> 3u) & 0x1fffffffu;
        r8 = r8 * 0xau;
        r8 = r11 - r8;
        r11 = (r7 >> 3u) & 0x1fffffffu;
        wr8(r6 - 1u, (u8)r8);
        r6 = r6 - 1u;
    }
    r7 = (u32)(s16)rd16((u32)param_2 + 2u);
    wr16(param_1 + 2u, (u16)(r7 + (u32)(s16)rd16((u32)param_3 + 2u)));
    if (r11 != 0u) {
        wr8(r6 - 1u, (u8)r11);
        r6 = r6 - 1u;
        wr16(param_1 + 2u, (u16)((u32)(s16)rd16(param_1 + 2u) + 1u));
    }
    r7 = 0u;
    while ((s32)r7 < 36 && r6 < r0) {
        r5 = (u32)rd8(r6);
        r4 = param_1 + r7;
        r7 = r7 + 1u;
        r6 = r6 + 1u;
        wr8(r4 + 5u, (u8)r5);
    }
    wr8(param_1 + 4u, (u8)r7);
    if (r6 < r0) {
        r4 = (u32)rd8(r6);
        c0eq = r4 == 5u;
        if (r4 >= 5u) {
            if (c0eq) {
                r5 = r6 + 1u;
                ctr = r0 - r5;
                if (r5 >= r0) {
                    if (((u32)rd8(r6 - 1u) & 1u) == 0u) {
                        return;
                    }
                } else {
                    while ((u32)rd8(r5) == 0u) {
                        r5 = r5 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            if (((u32)rd8(r6 - 1u) & 1u) == 0u) {
                                return;
                            }
                            break;
                        }
                    }
                }
            }
            r6 = param_1 + 5u;
            r5 = r6 + (u32)rd8(param_1 + 4u) - 1u;
            for (;;) {
                r4 = (u32)rd8(r5);
                if (r4 < 9u) {
                    wr8(r5, (u8)(r4 + 1u));
                    return;
                }
                if (r5 == r6) break;
                wr8(r5, 0u);
                r5 = r5 - 1u;
            }
            wr8(r5, 1u);
            wr16(param_1 + 2u, (u16)((u32)(s16)rd16(param_1 + 2u) + 1u));
        }
    }
    return;
}
