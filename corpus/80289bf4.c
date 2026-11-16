#include "tc_rt.h"

void fn_80289bf4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r11 = 0, r12 = 0, r18 = 0, r19 = 0;
    u32 r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r26 = 0;
    r6 = param_4;
    r12 = param_2 + 3u;
    r9 = r12 & 0xfffffffcu;
    r26 = r9 + 0xcu;
    r8 = r26 & 0xffffu;
    r0 = (param_1 << 4u) & 0xff0u;
    r12 = r12 & 0xfffcu;
    r24 = ((param_1 << 2u) & 0x3fcu) - 0x7fabef04u;
    wr32(r24 - 0x75e4u, param_4);
    r4 = 0u;
    wr32(r24 - 0x75c0u, param_4 + (r8 * param_3));
    r11 = r0 - 0x7fabef04u;
    wr16(((param_1 << 1u) & 0x1feu) - 0x7fac64a0u, (u16)r26);
    r7 = 0u;
    wr16(r11 - 0x766cu, (u16)r12);
    wr16(r11 - 0x766au, (u16)param_3);
    wr16(r11 - 0x7668u, 0u);
    wr16(r11 - 0x7666u, 0u);
    wr32(r11 - 0x7674u, param_4);
    if (param_3 != 0u) {
        r11 = param_3 + 0xfff8u;
        if (param_3 > 8u) {
            r12 = r11 & 0xffffu;
            ctr = ((r12 + 7u) >> 3u) & 0x1fffffffu;
            if (r12 > 0u) {
                do {
                    wr8(r6 + 5u, 0xf0u);
                    r18 = r6 + r8;
                    r19 = r18 + r8;
                    wr8(r6 + 4u, (u8)param_1);
                    r20 = r19 + r8;
                    r21 = r20 + r8;
                    wr8(r6 + 6u, 0u);
                    r22 = r21 + r8;
                    r23 = r22 + r8;
                    wr32(r6 + r9 + 8u, 0xddbaddbau);
                    r4 = r23 + r8;
                    wr32(r6, r18);
                    wr8(r18 + 5u, 0xf0u);
                    r6 = r4 + r8;
                    r7 = r7 + 8u;
                    wr8(r18 + 4u, (u8)param_1);
                    wr8(r18 + 6u, 0u);
                    wr32(r18 + r9 + 8u, 0xddbaddbau);
                    wr32(r18, r19);
                    wr8(r19 + 5u, 0xf0u);
                    wr8(r19 + 4u, (u8)param_1);
                    wr8(r19 + 6u, 0u);
                    wr32(r19 + r9 + 8u, 0xddbaddbau);
                    wr32(r18 + r8, r20);
                    wr8(r20 + 5u, 0xf0u);
                    wr8(r20 + 4u, (u8)param_1);
                    wr8(r20 + 6u, 0u);
                    wr32(r20 + r9 + 8u, 0xddbaddbau);
                    wr32(r19 + r8, r21);
                    wr8(r21 + 5u, 0xf0u);
                    wr8(r21 + 4u, (u8)param_1);
                    wr8(r21 + 6u, 0u);
                    wr32(r21 + r9 + 8u, 0xddbaddbau);
                    wr32(r20 + r8, r22);
                    wr8(r22 + 5u, 0xf0u);
                    wr8(r22 + 4u, (u8)param_1);
                    wr8(r22 + 6u, 0u);
                    wr32(r22 + r9 + 8u, 0xddbaddbau);
                    wr32(r21 + r8, r23);
                    wr8(r23 + 5u, 0xf0u);
                    wr8(r23 + 4u, (u8)param_1);
                    wr8(r23 + 6u, 0u);
                    wr32(r23 + r9 + 8u, 0xddbaddbau);
                    wr32(r22 + r8, r4);
                    wr8(r4 + 5u, 0xf0u);
                    wr8(r4 + 4u, (u8)param_1);
                    wr8(r4 + 6u, 0u);
                    wr32(r4 + r9 + 8u, 0xddbaddbau);
                    wr32(r23 + r8, r6);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r12 = r7 & 0xffffu;
        ctr = param_3 - r12;
        if (r12 < param_3) {
            do {
                wr8(r6 + 5u, 0xf0u);
                r5 = r6 + r9;
                r4 = r6;
                r7 = r7 + 1u;
                wr8(r6 + 4u, (u8)param_1);
                wr8(r6 + 6u, 0u);
                r6 = r6 + r8;
                wr32(r5 + 8u, 0xddbaddbau);
                wr32(r4, r6);
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32(r4, 0u);
    wr32(r0 - 0x7fac6574u, r4);
    return;
}
