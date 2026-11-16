#include "tc_rt.h"

void fn_800fc708(s32 param_1)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x1cu);
    r30 = rd32(r5 + 0x1cu) + 0x44u;
    a.r[0] = r5;
    r3 = tc_call(0x800fb154u, &a);
    a.r[0] = r3;
    a.r[1] = r30;
    (void)tc_call(0x80184584u, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xb98u;
    a.r[1] = 0xeu;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
    r3 = tc_call(0x8011a4b4u, &a);
    r27 = r3;
    r29 = rd32(rd32((u32)param_1 + 0x20u) + 0x5cu);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    (void)tc_call(0x800fa7c0u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x800fa7c0u, &a);
    r6 = rd32((u32)param_1 + 0x1cu);
    r30 = r3;
    r28 = rd32(rd32(r3 + 0x2cu) + (((rd32(rd32(r6 + 0x1cu) + 0x430u) + rd32(r3 + 0x10u)) << 2u) & 0xfffffffcu));
    a.r[0] = r6;
    r3 = tc_call(0x800fb154u, &a);
    a.r[0] = r3;
    a.r[1] = r29;
    r3 = tc_call(0x80197508u, &a);
    if (r3 != 0u) {
        a.r[0] = r28;
        a.r[1] = r27;
        r3 = tc_call(0x80161f9cu, &a);
        if (r3 != 0u) {
            a.r[0] = r29;
            a.r[1] = r28;
            r3 = tc_call(0x80161f9cu, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
                a.r[1] = 3u;
                (void)tc_call(0x8020f18cu, &a);
                wr32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x434u, 1u);
                return;
            }
        }
        if ((u32)rd16(r28 + 0xbcu) == 0x2e8u) {
            a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
            a.r[1] = 0xcu;
            (void)tc_call(0x8020f18cu, &a);
            wr32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x434u, 1u);
            return;
        }
        a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
        a.r[1] = 0x19u;
        (void)tc_call(0x8020f18cu, &a);
    } else {
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x800fb154u, &a);
        if (r30 == r3) {
            a.r[0] = r28;
            a.r[1] = r27;
            r3 = tc_call(0x80161f9cu, &a);
            if (r3 != 0u) {
                a.r[0] = r29;
                a.r[1] = r28;
                r3 = tc_call(0x80161f9cu, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
                    a.r[1] = 3u;
                    (void)tc_call(0x8020f18cu, &a);
                    wr32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x434u, 1u);
                    return;
                }
            }
            a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
            a.r[1] = 0x19u;
            (void)tc_call(0x8020f18cu, &a);
        } else {
            if ((u32)rd16(r28 + 0xbcu) == 0x2e8u) {
                a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
                a.r[1] = 0xcu;
                (void)tc_call(0x8020f18cu, &a);
            } else {
                a.r[0] = r28;
                a.r[1] = r27;
                r3 = tc_call(0x80161f9cu, &a);
                if (r3 != 0u) {
                    a.r[0] = r29;
                    a.r[1] = r28;
                    r3 = tc_call(0x80161f9cu, &a);
                    if (r3 != 0u && (u32)rd16(r29 + 0xbcu) == 0x2e8u) {
                        a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
                        a.r[1] = 0x16u;
                        (void)tc_call(0x8020f18cu, &a);
                        wr32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x434u, 1u);
                        return;
                    }
                }
                a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
                a.r[1] = 0x19u;
                (void)tc_call(0x8020f18cu, &a);
            }
        }
    }
    wr32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x434u, 1u);
    return;
}
