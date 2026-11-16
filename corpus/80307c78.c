#include "tc_rt.h"

void fn_80307c78(u32 param_1, u32 param_2, s32 param_3, u32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r27 = param_4;
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    f1 = tc_callf(0x8022d56cu, &a);
    r4 = tc_lastr4();
    if ((u32)rd8(param_1 + 0x11cu) != 0u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x10u), &a);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        if ((u32)rd8(param_1 + 0x11cu) != 0u) {
            wr32(param_1 + 0x820u, 0u);
            a.r[0] = param_1 + 0x19cu;
            a.r[1] = param_1 + 0x1a0u;
            a.r[2] = 0x680u;
            (void)tc_call(0x802fabdcu, &a);
            wr8(param_1 + 0x11cu, 0u);
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
    }
    a.r[0] = param_1;
    (void)tc_call(0x803085c0u, &a);
    r0 = 0x10u;
    if (param_3 <= 16) {
        r0 = (u32)param_3;
    }
    wr32(param_1 + 0x82cu, r0);
    r4 = param_1;
    r5 = 0u;
    while (r27 != 0u) {
        if ((r27 & 1u) != 0u) {
            if ((s32)r5 >= 8) break;
            wr8(r4 + 0xb74u, 1u);
        }
        r27 = (r27 >> 1u) & 0x7fffffffu;
        r4 = r4 + 0x38u;
        r5 = r5 + 1u;
    }
    r0 = 8u;
    if ((s32)r5 <= 8) {
        r0 = r5;
    }
    wr32(param_1 + 0x828u, r0);
    if (r0 != 0u) {
        wr32(param_1 + 0x830u, (u32)param_5);
        wr32(param_1 + 0x820u, param_2);
        r3 = tc_call(0x8022c2b0u, &a);
        r30 = r3;
        if ((s32)rd32(param_1 + 0x82cu) > 0) {
            r28 = param_1;
            r27 = 0u;
            for (;;) {
                if ((s32)r27 >= (s32)rd32(param_1 + 0x82cu)) {
                    r0 = 1u;
                    break;
                }
                a.r[0] = rd32(param_1 + 0x820u);
                r3 = tc_call(0x80306ec4u, &a);
                if (r3 == 0u) {
                    r26 = param_1;
                    r28 = 0u;
                    while ((s32)r28 < (s32)r27) {
                        a.r[0] = rd32(param_1 + 0x820u);
                        a.r[1] = rd32(r26 + 0x834u);
                        (void)tc_call(0x80306fa8u, &a);
                        wr32(r26 + 0x834u, 0u);
                        r26 = r26 + 0x34u;
                        r28 = r28 + 1u;
                    }
                    r0 = 0u;
                    break;
                }
                wr32(r28 + 0x834u, r3);
                r28 = r28 + 0x34u;
                r27 = r27 + 1u;
            }
            if (r0 == 0u) {
                a.r[0] = r30;
                (void)tc_call(0x8022c2d8u, &a);
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                return;
            }
            wr8(param_1 + 0x12bu, 1u);
        }
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        wr8(param_1 + 0x11cu, 1u);
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
