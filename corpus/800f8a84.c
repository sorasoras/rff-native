#include "tc_rt.h"

void fn_800f8a84(s32 param_1, u32 param_2, s32 param_3)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    r3 = (u32)param_1;
    r4 = param_2;
    c1lt = param_3 < 0;
    r7 = 0u;
    if (param_3 > 0) {
        r9 = (u32)param_3 - 8u;
        if (param_3 > 8) {
            r8 = 0u;
            if (!c1lt && param_3 <= 2147483646) {
                r8 = 1u;
            }
            if (r8 != 0u) {
                r0 = (u32)param_3 - 1u;
                ctr = ((r9 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r9 > 0) {
                    do {
                        r12 = ppc_mulhw(1717986919, (s32)r3);
                        r29 = (u32)((s32)r12 >> 2);
                        r29 = r29 + ((r29 >> 0x1fu) & 1u);
                        r12 = (u32)((s32)r12 >> 2);
                        r10 = r3 - (r29 * 0xau);
                        r3 = r12 + ((r12 >> 0x1fu) & 1u);
                        r29 = ppc_mulhw(1717986919, (s32)r3);
                        wr16(param_2 + (((r0 - r7) << 1u) & 0xfffffffeu), (u16)(r10 + 0xff10u));
                        r30 = (u32)((s32)r29 >> 2);
                        r9 = (u32)((s32)r29 >> 2);
                        r31 = r3 - ((r30 + ((r30 >> 0x1fu) & 1u)) * 0xau);
                        r3 = r9 + ((r9 >> 0x1fu) & 1u);
                        r9 = ppc_mulhw(1717986919, (s32)r3);
                        wr16(param_2 + (((0xfffffffeu - r7 + (u32)param_3) << 1u) & 0xfffffffeu), (u16)(r31 + 0xff10u));
                        r10 = (u32)((s32)r9 >> 2);
                        r9 = (u32)((s32)r9 >> 2);
                        r10 = r10 + ((r10 >> 0x1fu) & 1u);
                        r30 = r3 - (r10 * 0xau);
                        r3 = r9 + ((r9 >> 0x1fu) & 1u);
                        r9 = ppc_mulhw(1717986919, (s32)r3);
                        wr16(param_2 + (((r0 - (r7 + 2u)) << 1u) & 0xfffffffeu), (u16)(r30 + 0xff10u));
                        r10 = (u32)((s32)r9 >> 2);
                        r9 = (u32)((s32)r9 >> 2);
                        r10 = r10 + ((r10 >> 0x1fu) & 1u);
                        r30 = r3 - (r10 * 0xau);
                        r3 = r9 + ((r9 >> 0x1fu) & 1u);
                        r11 = ppc_mulhw(1717986919, (s32)r3);
                        wr16(param_2 + (((r0 - (r7 + 3u)) << 1u) & 0xfffffffeu), (u16)(r30 + 0xff10u));
                        r9 = (u32)((s32)r11 >> 2);
                        r9 = r9 + ((r9 >> 0x1fu) & 1u);
                        r9 = r9 * 0xau;
                        r3 = r3 - r9;
                        r3 = r3 + 0x10000u;
                        r3 = r3 - 0xf0u;
                        wr16(param_2 + (((r0 - (r7 + 4u)) << 1u) & 0xfffffffeu), (u16)r3);
                        r3 = (u32)((s32)r11 >> 2);
                        r3 = r3 + ((r3 >> 0x1fu) & 1u);
                        r30 = ppc_mulhw(1717986919, (s32)r3);
                        r11 = ((r0 - (r7 + 6u)) << 1u) & 0xfffffffeu;
                        r12 = ((r0 - (r7 + 5u)) << 1u) & 0xfffffffeu;
                        r9 = (u32)((s32)r30 >> 2);
                        r10 = ((r0 - (r7 + 7u)) << 1u) & 0xfffffffeu;
                        r8 = (u32)((s32)r30 >> 2);
                        r9 = r9 + ((r9 >> 0x1fu) & 1u);
                        r7 = r7 + 8u;
                        r31 = r3 - (r9 * 0xau);
                        r3 = r8 + ((r8 >> 0x1fu) & 1u);
                        r8 = ppc_mulhw(1717986919, (s32)r3);
                        wr16(param_2 + r12, (u16)(r31 + 0xff10u));
                        r9 = (u32)((s32)r8 >> 2);
                        r8 = (u32)((s32)r8 >> 2);
                        r9 = r9 + ((r9 >> 0x1fu) & 1u);
                        r12 = r3 - (r9 * 0xau);
                        r3 = r8 + ((r8 >> 0x1fu) & 1u);
                        r8 = ppc_mulhw(1717986919, (s32)r3);
                        wr16(param_2 + r11, (u16)(r12 + 0xff10u));
                        r9 = (u32)((s32)r8 >> 2);
                        r8 = (u32)((s32)r8 >> 2);
                        r9 = r9 + ((r9 >> 0x1fu) & 1u);
                        r11 = r3 - (r9 * 0xau);
                        r3 = r8 + ((r8 >> 0x1fu) & 1u);
                        wr16(param_2 + r10, (u16)(r11 + 0xff10u));
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r9 = (u32)param_3 - 1u;
        ctr = (u32)param_3 - r7;
        if ((s32)r7 < param_3) {
            do {
                r12 = ppc_mulhw(1717986919, (s32)r3);
                r0 = r9 - r7;
                r7 = r7 + 1u;
                r8 = (r0 << 1u) & 0xfffffffeu;
                r6 = (u32)((s32)r12 >> 2);
                r0 = (u32)((s32)r12 >> 2);
                r6 = r6 + ((r6 >> 0x1fu) & 1u);
                r10 = r3 - (r6 * 0xau);
                r3 = r0 + ((r0 >> 0x1fu) & 1u);
                wr16(param_2 + r8, (u16)(r10 + 0xff10u));
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r0 = (u32)param_3 - 1u;
    ctr = r0;
    if ((s32)r0 > 0) {
        while ((u32)rd16(r4) == 0xff10u) {
            wr16(r4, 0x3000u);
            r4 = r4 + 2u;
            ctr = ctr - 1u;
            if (ctr == 0u) break;
        }
    }
    return;
}
