#include "tc_rt.h"

void fn_800f8734(s32 param_1, u32 param_2, s32 param_3)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    r3 = (u32)param_1;
    r4 = param_2;
    c1lt = param_3 < 0;
    r8 = 0u;
    if (param_3 > 0) {
        r10 = (u32)param_3 - 8u;
        if (param_3 > 8) {
            r7 = 0u;
            if (!c1lt && param_3 <= 2147483646) {
                r7 = 1u;
            }
            if (r7 != 0u) {
                r6 = (u32)param_3 - 1u;
                r0 = param_2 + (u32)param_3;
                ctr = ((r10 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r10 > 0) {
                    do {
                        r28 = ppc_mulhw(1717986919, (s32)r3);
                        r27 = (u32)((s32)r28 >> 2);
                        r28 = (u32)((s32)r28 >> 2);
                        r27 = r27 + ((r27 >> 0x1fu) & 1u);
                        r27 = r27 * 0xau;
                        r10 = r3 - r27;
                        r3 = r28 + ((r28 >> 0x1fu) & 1u);
                        r28 = ppc_mulhw(1717986919, (s32)r3);
                        r10 = r10 + 0x30u;
                        wr8(param_2 + (r6 - r8), (u8)r10);
                        r10 = (u32)((s32)r28 >> 2);
                        r11 = r10 + ((r10 >> 0x1fu) & 1u);
                        r10 = (u32)((s32)r28 >> 2);
                        r28 = r3 - (r11 * 0xau);
                        r3 = r10 + ((r10 >> 0x1fu) & 1u);
                        r10 = ppc_mulhw(1717986919, (s32)r3);
                        wr8(0xfffffffeu - r8 + r0, (u8)(r28 + 0x30u));
                        r11 = (u32)((s32)r10 >> 2);
                        r10 = (u32)((s32)r10 >> 2);
                        r11 = r11 + ((r11 >> 0x1fu) & 1u);
                        r29 = r3 - (r11 * 0xau);
                        r3 = r10 + ((r10 >> 0x1fu) & 1u);
                        r10 = ppc_mulhw(1717986919, (s32)r3);
                        wr8(param_2 + (r6 - (r8 + 2u)), (u8)(r29 + 0x30u));
                        r11 = (u32)((s32)r10 >> 2);
                        r10 = (u32)((s32)r10 >> 2);
                        r11 = r11 + ((r11 >> 0x1fu) & 1u);
                        r31 = r3 - (r11 * 0xau);
                        r3 = r10 + ((r10 >> 0x1fu) & 1u);
                        r10 = ppc_mulhw(1717986919, (s32)r3);
                        wr8(param_2 + (r6 - (r8 + 3u)), (u8)(r31 + 0x30u));
                        r11 = (u32)((s32)r10 >> 2);
                        r10 = (u32)((s32)r10 >> 2);
                        r11 = r11 + ((r11 >> 0x1fu) & 1u);
                        r31 = r3 - (r11 * 0xau);
                        r3 = r10 + ((r10 >> 0x1fu) & 1u);
                        r12 = ppc_mulhw(1717986919, (s32)r3);
                        wr8(param_2 + (r6 - (r8 + 4u)), (u8)(r31 + 0x30u));
                        r10 = (u32)((s32)r12 >> 2);
                        r10 = r10 + ((r10 >> 0x1fu) & 1u);
                        r10 = r10 * 0xau;
                        r3 = r3 - r10;
                        r3 = r3 + 0x30u;
                        wr8(param_2 + (r6 - (r8 + 5u)), (u8)r3);
                        r3 = (u32)((s32)r12 >> 2);
                        r3 = r3 + ((r3 >> 0x1fu) & 1u);
                        r12 = r6 - (r8 + 6u);
                        r30 = ppc_mulhw(1717986919, (s32)r3);
                        r11 = r6 - (r8 + 7u);
                        r8 = r8 + 8u;
                        r10 = (u32)((s32)r30 >> 2);
                        r9 = (u32)((s32)r30 >> 2);
                        r10 = r10 + ((r10 >> 0x1fu) & 1u);
                        r31 = r3 - (r10 * 0xau);
                        r3 = r9 + ((r9 >> 0x1fu) & 1u);
                        r9 = ppc_mulhw(1717986919, (s32)r3);
                        wr8(param_2 + r12, (u8)(r31 + 0x30u));
                        r10 = (u32)((s32)r9 >> 2);
                        r9 = (u32)((s32)r9 >> 2);
                        r10 = r10 + ((r10 >> 0x1fu) & 1u);
                        r12 = r3 - (r10 * 0xau);
                        r3 = r9 + ((r9 >> 0x1fu) & 1u);
                        wr8(param_2 + r11, (u8)(r12 + 0x30u));
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r9 = (u32)param_3 - 1u;
        ctr = (u32)param_3 - r8;
        if ((s32)r8 < param_3) {
            do {
                r0 = ppc_mulhw(1717986919, (s32)r3);
                r7 = r9 - r8;
                r8 = r8 + 1u;
                r6 = (u32)((s32)r0 >> 2);
                r0 = (u32)((s32)r0 >> 2);
                r6 = r6 + ((r6 >> 0x1fu) & 1u);
                r10 = r3 - (r6 * 0xau);
                r3 = r0 + ((r0 >> 0x1fu) & 1u);
                wr8(param_2 + r7, (u8)(r10 + 0x30u));
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r0 = (u32)param_3 - 1u;
    ctr = r0;
    if ((s32)r0 > 0) {
        while ((u32)rd8(r4) == 0x30u) {
            wr8(r4, 0x20u);
            r4 = r4 + 1u;
            ctr = ctr - 1u;
            if (ctr == 0u) break;
        }
    }
    return;
}
