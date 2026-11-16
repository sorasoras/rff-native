#include "tc_rt.h"

void fn_802fdc98(s32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    do {
        if ((u32)rd8((u32)param_1 + 0xe8u) != 0u) {
            r4 = (u32)param_1;
            r5 = 0u;
            ctr = 0x10u;
            for (;;) {
                if ((s32)r5 <= 15) {
                    r3 = rd32(r4 + 0x11cu);
                } else {
                    r3 = 0u;
                }
                if (r3 != 0u) {
                    r0 = rd32(r3 + 0x50u);
                    if (param_2 <= r0 && r0 <= param_3) {
                        fl_ = 2u;
                        break;
                    }
                }
                r4 = r4 + 4u;
                r5 = r5 + 1u;
                ctr = ctr - 1u;
                if (ctr == 0u) {
                    fl_ = 1u;
                    break;
                }
            }
            if (fl_ == 2u) {
                fl_ = 0u;
            } else if (fl_ == 1u) {
                fl_ = 0u;
                break;
            }
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d56cu, &a);
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d56cu, &a);
            if ((u32)rd8((u32)param_1 + 0xe9u) != 0u) {
                r29 = (u32)param_1;
                if ((u32)param_1 != 0u) {
                    r29 = (u32)param_1 + 0xdcu;
                }
                r3 = tc_call(0x80306860u, &a);
                a.r[0] = r3;
                a.r[1] = r29;
                (void)tc_call(0x80306c94u, &a);
                wr8((u32)param_1 + 0xe9u, 0u);
            }
            if ((u32)rd8((u32)param_1 + 0xe8u) != 0u) {
                r29 = (u32)param_1;
                if ((u32)param_1 != 0u) {
                    r29 = (u32)param_1 + 0xd0u;
                }
                r3 = tc_call(0x802f85a0u, &a);
                a.r[0] = r3;
                a.r[1] = r29;
                (void)tc_call(0x802f86b4u, &a);
                wr8((u32)param_1 + 0xe8u, 0u);
            }
            r28 = (u32)param_1;
            r29 = 0u;
            do {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d56cu, &a);
                if ((s32)r29 <= 15) {
                    r3 = rd32(r28 + 0x11cu);
                } else {
                    r3 = 0u;
                }
                if (r3 != 0u) {
                    a.r[0] = r3;
                    f1 = tc_callf(0x802ff138u, &a);
                    r3 = rd32((u32)param_1 + 0x110u);
                    a.r[0] = r3;
                    a.r[1] = rd32(r28 + 0x11cu);
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
                    wr32(r28 + 0x11cu, 0u);
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    (void)tc_call(0x8022d648u, &a);
                } else {
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    (void)tc_call(0x8022d648u, &a);
                }
                r29 = r29 + 1u;
                r28 = r28 + 4u;
            } while ((s32)r29 < 16);
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
        }
    } while (0);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
