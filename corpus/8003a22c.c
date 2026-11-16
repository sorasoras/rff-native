#include "tc_rt.h"

void fn_8003a22c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x28u) != 0u) {
        (void)tc_call(0x8024f870u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = (u32)param_3;
        r3 = tc_call(0x80039f10u, &a);
        if (r3 == 0u) {
            return;
        }
        r29 = (u32)param_1 + 0x20u;
        r27 = 2u;
        while ((s32)r27 < (s32)rd8((u32)param_1 + 0x19u)) {
            r28 = rd32(r29 + 0x40u);
            r30 = r28 & 0xffu;
            a.r[0] = r30;
            a.r[1] = (r28 >> 0x1cu) & 0xfu;
            (void)tc_call(0x8024f27cu, &a);
            a.r[0] = 0u;
            a.r[1] = r30;
            a.r[2] = (r28 >> 0x14u) & 0xfu;
            a.r[3] = (r28 >> 0x10u) & 0xfu;
            a.r[4] = (r28 >> 0x18u) & 0xfu;
            (void)tc_call(0x8024f8a4u, &a);
            a.r[0] = r30;
            a.r[1] = rd32(r29 + 0x38u);
            a.r[2] = (r28 >> 8u) & 0xffu;
            (void)tc_call(0x8024fef4u, &a);
            r29 = r29 + 0x10u;
            r27 = r27 + 1u;
        }
        r29 = rd32((u32)param_1 + 0x2cu);
        r30 = 0u;
        while ((s32)r30 < (s32)rd16((u32)param_1 + 0x1cu)) {
            a.r[0] = (u32)(s16)rd16(r29 + 2u);
            a.r[1] = (u32)rd16((u32)param_1 + 0x1au);
            (void)tc_call(0x80040358u, &a);
            a.r[0] = rd32(r29 + 8u);
            a.r[1] = rd32(r29 + 0xcu);
            (void)tc_call(0x80254170u, &a);
            r30 = r30 + 1u;
            r29 = r29 + 0x10u;
        }
    } else {
        (void)tc_call(0x8024f870u, &a);
        r30 = (u32)param_1;
        r27 = 0u;
        while ((s32)r27 < (s32)rd8((u32)param_1 + 0x19u)) {
            r28 = rd32(r30 + 0x40u);
            r29 = r28 & 0xffu;
            a.r[0] = r29;
            a.r[1] = (r28 >> 0x1cu) & 0xfu;
            (void)tc_call(0x8024f27cu, &a);
            a.r[0] = 0u;
            a.r[1] = r29;
            a.r[2] = (r28 >> 0x14u) & 0xfu;
            a.r[3] = (r28 >> 0x10u) & 0xfu;
            a.r[4] = (r28 >> 0x18u) & 0xfu;
            (void)tc_call(0x8024f8a4u, &a);
            a.r[0] = r29;
            a.r[1] = rd32(r30 + 0x38u);
            a.r[2] = (r28 >> 8u) & 0xffu;
            (void)tc_call(0x8024fef4u, &a);
            r30 = r30 + 0x10u;
            r27 = r27 + 1u;
        }
        a.r[0] = 0u;
        a.r[1] = 1u;
        (void)tc_call(0x8024f27cu, &a);
        r27 = rd32((u32)param_1 + 0x2cu);
        r30 = 0u;
        while ((s32)r30 < (s32)rd16((u32)param_1 + 0x1cu)) {
            a.r[0] = (u32)(s16)rd16(r27 + 2u);
            a.r[1] = (u32)rd16((u32)param_1 + 0x1au);
            (void)tc_call(0x80040358u, &a);
            r26 = 0u;
            r29 = 0u;
            do {
                r0 = (u32)rd8(rd32(r27 + 4u) + r26);
                if (r0 < 0xfeu) {
                    r28 = r0 * 0x30u;
                    a.r[0] = (u32)param_2 + r28;
                    a.r[1] = r29;
                    (void)tc_call(0x802544a0u, &a);
                    a.r[0] = (u32)param_3 + r28;
                    a.r[1] = r29;
                    (void)tc_call(0x802544f0u, &a);
                }
                r26 = r26 + 1u;
                r29 = r29 + 3u;
            } while ((s32)r26 < 10);
            a.r[0] = rd32(r27 + 8u);
            a.r[1] = rd32(r27 + 0xcu);
            (void)tc_call(0x80254170u, &a);
            r30 = r30 + 1u;
            r27 = r27 + 0x10u;
        }
    }
    return;
}
