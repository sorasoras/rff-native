#include "tc_rt.h"

void fn_802fde84(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    r29 = param_r3;
    r28 = 0u;
    r27 = 0u;
    do {
        if ((s32)r27 > 15) {
            r30 = 0u;
        } else {
            r30 = rd32(r29 + 0x11cu);
        }
        if (r30 != 0u) {
            a.r[0] = r30;
            (void)tc_call(0x802ff208u, &a);
            a.r[0] = r30;
            a.r[1] = param_r4;
            r3 = tc_call(0x802ff2d8u, &a);
            if ((s32)r3 < 0) {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d56cu, &a);
                if ((s32)r27 > 15) {
                    r3 = 0u;
                } else {
                    r3 = rd32(r29 + 0x11cu);
                }
                if (r3 == 0u) {
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    (void)tc_call(0x8022d648u, &a);
                } else {
                    a.r[0] = r3;
                    f1 = tc_callf(0x802ff138u, &a);
                    r3 = rd32(param_r3 + 0x110u);
                    a.r[0] = r3;
                    a.r[1] = rd32(r29 + 0x11cu);
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
                    wr32(r29 + 0x11cu, 0u);
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    (void)tc_call(0x8022d648u, &a);
                }
            }
            if ((u32)rd8(r30 + 5u) != 0u) {
                r28 = 1u;
            }
        }
        r27 = r27 + 1u;
        r29 = r29 + 4u;
    } while ((s32)r27 < 16);
    if (r28 == 0u) {
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
    return;
}
