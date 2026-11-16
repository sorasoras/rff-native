#include "tc_rt.h"

void fn_80247a8c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r20 = 0;
    u32 r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    (void)param_4;
    r3 = param_1;
    r5 = param_3;
    r7 = param_5;
    r8 = param_6;
    r9 = param_7;
    r0 = rd32(param_2 + 0x34u);
    if (r0 != 0u) {
        r0 = r0 & 0xfffffffdu;
        wr32(param_2 + 0x34u, r0);
    } else {
        r6 = rd32(param_2 + 0x48u);
        r10 = rd32(param_2 + 0x28u);
        r11 = rd32(param_1);
        r12 = rd32(param_1 + 4u);
        r24 = 0x80u - r10;
        r31 = rd32(param_1 + 8u);
        if (r6 != 0u) {
            r3 = rd32(r6);
            r5 = rd32(r6 + 4u);
            r6 = rd32(r6 + 8u);
        }
        r20 = rd32(param_2 + 0x4cu);
        if (r20 != 0u) {
            r7 = rd32(r20);
            r8 = rd32(r20 + 4u);
            r9 = rd32(r20 + 8u);
        }
        ctr = 0x60u;
        do {
            r23 = (rd32(param_2 + 0xcu) << 2u) & 0xfffffffcu;
            r30 = rd32(rd32(param_2) + r23);
            r29 = rd32(rd32(param_2 + 4u) + r23);
            r28 = rd32(rd32(param_2 + 8u) + r23);
            if (rd32(param_2 + 0x48u) != 0u) {
                r20 = rd32(r3);
                r3 = r3 + 4u;
                r20 = rd32(r11) + r20;
                r20 = r24 * r20;
                r22 = rd32(r31) + rd32(r6);
                r21 = rd32(r5);
                r5 = r5 + 4u;
                r6 = r6 + 4u;
                r27 = r20 + (r10 * rd32(param_2 + 0x1cu));
                r22 = r24 * r22;
                r26 = (r24 * (rd32(r12) + r21)) + (r10 * rd32(param_2 + 0x20u));
                r25 = r22 + (r10 * rd32(param_2 + 0x24u));
            } else {
                r27 = (r24 * rd32(r11)) + (r10 * rd32(param_2 + 0x1cu));
                r26 = (r24 * rd32(r12)) + (r10 * rd32(param_2 + 0x20u));
                r25 = (r24 * rd32(r31)) + (r10 * rd32(param_2 + 0x24u));
            }
            r27 = (u32)((s32)r27 >> 7);
            r26 = (u32)((s32)r26 >> 7);
            r22 = rd32(param_2 + 0xcu);
            r21 = r30 * rd32(param_2 + 0x18u);
            r25 = (u32)((s32)r25 >> 7);
            wr32(param_2 + 0x1cu, r27);
            r22 = (r22 << 2u) & 0xfffffffcu;
            r23 = rd32(param_2);
            wr32(param_2 + 0x20u, r26);
            r21 = (u32)((s32)r21 >> 7);
            wr32(param_2 + 0x24u, r25);
            r27 = r27 + r21;
            wr32(r23 + r22, r27);
            r26 = r26 + (u32)((s32)(r29 * rd32(param_2 + 0x18u)) >> 7);
            wr32(rd32(param_2 + 4u) + ((rd32(param_2 + 0xcu) << 2u) & 0xfffffffcu), r26);
            r27 = rd32(param_2 + 0xcu);
            r26 = (r27 << 2u) & 0xfffffffcu;
            r27 = r27 + 1u;
            r25 = r25 + (u32)((s32)(r28 * rd32(param_2 + 0x18u)) >> 7);
            wr32(rd32(param_2 + 8u) + r26, r25);
            r25 = rd32(param_2 + 0x10u);
            wr32(param_2 + 0xcu, r27);
            if (r27 >= r25) {
                wr32(param_2 + 0xcu, 0u);
            }
            wr32(r11, (u32)((s32)(r30 * rd32(param_2 + 0x2cu)) >> 7));
            r11 = r11 + 4u;
            wr32(r12, (u32)((s32)(r29 * rd32(param_2 + 0x2cu)) >> 7));
            r12 = r12 + 4u;
            wr32(r31, (u32)((s32)(r28 * rd32(param_2 + 0x2cu)) >> 7));
            r31 = r31 + 4u;
            if (rd32(param_2 + 0x4cu) != 0u) {
                wr32(r7, (u32)((s32)(r30 * rd32(param_2 + 0x30u)) >> 7));
                r7 = r7 + 4u;
                wr32(r8, (u32)((s32)(r29 * rd32(param_2 + 0x30u)) >> 7));
                r8 = r8 + 4u;
                wr32(r9, (u32)((s32)(r28 * rd32(param_2 + 0x30u)) >> 7));
                r9 = r9 + 4u;
            }
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return;
}
