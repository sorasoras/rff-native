#include "tc_rt.h"

void fn_802fd324(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_r3 != 0u) {
        wr32(param_r3, 0x8039d430u);
        wr32(param_r3 + 0xd8u, 0x8039d454u);
        wr32(param_r3 + 0xe4u, 0x8039d468u);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        if ((u32)rd8(param_r3 + 0xe9u) != 0u) {
            r30 = param_r3;
            if (param_r3 != 0u) {
                r30 = param_r3 + 0xdcu;
            }
            r3 = tc_call(0x80306860u, &a);
            a.r[0] = r3;
            a.r[1] = r30;
            (void)tc_call(0x80306c94u, &a);
            wr8(param_r3 + 0xe9u, 0u);
        }
        if ((u32)rd8(param_r3 + 0xe8u) != 0u) {
            r30 = param_r3;
            if (param_r3 != 0u) {
                r30 = param_r3 + 0xd0u;
            }
            r3 = tc_call(0x802f85a0u, &a);
            a.r[0] = r3;
            a.r[1] = r30;
            (void)tc_call(0x802f86b4u, &a);
            wr8(param_r3 + 0xe8u, 0u);
        }
        r29 = param_r3;
        r30 = 0u;
        do {
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d56cu, &a);
            if ((s32)r30 > 15) {
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
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
                wr32(r29 + 0x11cu, 0u);
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
            }
            r30 = r30 + 1u;
            r29 = r29 + 4u;
        } while ((s32)r30 < 16);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        if ((s32)param_r4 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return;
}
