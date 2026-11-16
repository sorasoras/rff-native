#include "tc_rt.h"

void fn_802fd5c0(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = param_3;
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    if ((u32)rd8(param_1 + 0xe9u) != 0u) {
        r27 = param_1;
        if (param_1 != 0u) {
            r27 = param_1 + 0xdcu;
        }
        r3 = tc_call(0x80306860u, &a);
        a.r[0] = r3;
        a.r[1] = r27;
        (void)tc_call(0x80306c94u, &a);
        wr8(param_1 + 0xe9u, 0u);
    }
    if ((u32)rd8(param_1 + 0xe8u) != 0u) {
        r27 = param_1;
        if (param_1 != 0u) {
            r27 = param_1 + 0xd0u;
        }
        r3 = tc_call(0x802f85a0u, &a);
        a.r[0] = r3;
        a.r[1] = r27;
        (void)tc_call(0x802f86b4u, &a);
        wr8(param_1 + 0xe8u, 0u);
    }
    r26 = param_1;
    r27 = 0u;
    do {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        if ((s32)r27 > 15) {
            r3 = 0u;
        } else {
            r3 = rd32(r26 + 0x11cu);
        }
        if (r3 == 0u) {
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
        } else {
            a.r[0] = r3;
            f1 = tc_callf(0x802ff138u, &a);
            r3 = rd32(param_1 + 0x110u);
            a.r[0] = r3;
            a.r[1] = rd32(r26 + 0x11cu);
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
            wr32(r26 + 0x11cu, 0u);
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
        }
        r27 = r27 + 1u;
        r26 = r26 + 4u;
    } while ((s32)r27 < 16);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    a.r[0] = param_1;
    a.r[1] = param_4;
    a.r[2] = param_5;
    (void)tc_call(0x802fd4a0u, &a);
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r28 = r3;
    r3 = param_3;
    r26 = 0u;
    while (r3 != 0u) {
        if ((r3 & 1u) != 0u) {
            r26 = r26 + 1u;
        }
        r3 = (r3 >> 1u) & 0x7fffffffu;
    }
    a.r[0] = param_2;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x14u), &a);
    f1 = tc_lastf();
    if ((s32)r26 > (s32)r3) {
        a.r[0] = r28;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    } else {
        r27 = param_1;
        r26 = 0u;
        while (r31 != 0u) {
            if ((r31 & 1u) != 0u) {
                a.r[0] = param_2;
                a.r[1] = param_1;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_2) + 0xcu), &a);
                r25 = r3;
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d56cu, &a);
                if ((s32)r26 > 15) {
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    f1 = tc_callf(0x8022d648u, &a);
                } else {
                    wr32(r27 + 0x11cu, r25);
                    a.r[0] = r25;
                    a.r[1] = r26;
                    (void)tc_call(0x802fedc4u, &a);
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    f1 = tc_callf(0x8022d648u, &a);
                }
            }
            r31 = (r31 >> 1u) & 0x7fffffffu;
            r27 = r27 + 4u;
            r26 = r26 + 1u;
        }
        a.r[0] = r28;
        (void)tc_call(0x8022c2d8u, &a);
        r27 = param_1;
        if (param_1 != 0u) {
            r27 = param_1 + 0xd0u;
        }
        r3 = tc_call(0x802f85a0u, &a);
        a.r[0] = r3;
        a.r[1] = r27;
        (void)tc_call(0x802f8684u, &a);
        wr32(param_1 + 0x110u, param_2);
        wr8(param_1 + 0xe8u, 1u);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
