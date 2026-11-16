#include "tc_rt.h"

void fn_803065e4(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80571dc0u) == 0u) {
        r3 = rd32(0x80570f40u);
        wr8(0x80571dc0u, 1u);
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = r3;
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x80226610u, &a);
        r3 = tc_call(0x802f08ccu, &a);
        a.r[0] = r3;
        (void)tc_call(0x802f09a8u, &a);
        (void)tc_call(0x80273694u, &a);
        do {
            r3 = tc_call(0x80273734u, &a);
        } while (r3 == 1u);
        r3 = tc_call(0x802751e0u, &a);
        r0 = r3 & 0xffu;
        c0lt = (s32)r0 < 1;
        do {
            if (r0 == 1u) {
                r3 = tc_call(0x802f08ccu, &a);
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x802f0f88u, &a);
            } else {
                if (!c0lt) {
                    if ((s32)r0 < 3) {
                        r3 = tc_call(0x802f08ccu, &a);
                        a.r[0] = r3;
                        a.r[1] = 2u;
                        (void)tc_call(0x802f0f88u, &a);
                        break;
                    }
                } else if ((s32)r0 >= 0) {
                    r3 = tc_call(0x802f08ccu, &a);
                    a.r[0] = r3;
                    a.r[1] = 3u;
                    (void)tc_call(0x802f0f88u, &a);
                    break;
                }
                r3 = tc_call(0x802f08ccu, &a);
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x802f0f88u, &a);
            }
        } while (0);
        r3 = tc_call(0x802fce20u, &a);
        a.r[0] = r3;
        (void)tc_call(0x802fcec8u, &a);
        r30 = param_r4 + rd32(param_r3 + 0xcu);
        r29 = r30;
        r30 = r30 + rd32(param_r3 + 4u);
        r3 = tc_call(0x802465c0u, &a);
        wr32(0x80571dc4u, r3);
        r28 = r30;
        r3 = tc_call(0x802f46b8u, &a);
        a.r[0] = r3;
        a.r[1] = rd32(0x80571dc4u);
        r3 = tc_call(0x802f47e0u, &a);
        r30 = r30 + r3;
        r3 = tc_call(0x802f46b8u, &a);
        a.r[0] = r3;
        a.r[1] = rd32(0x80571dc4u);
        r3 = tc_call(0x802f47e0u, &a);
        r31 = r3;
        r3 = tc_call(0x802f46b8u, &a);
        a.r[0] = r3;
        a.r[1] = r28;
        a.r[2] = r31;
        (void)tc_call(0x802f47ecu, &a);
        r28 = r30;
        r3 = tc_call(0x8030de70u, &a);
        a.r[0] = r3;
        a.r[1] = rd32(0x80571dc4u);
        r3 = tc_call(0x8030df6cu, &a);
        r30 = r30 + r3;
        r3 = tc_call(0x8030de70u, &a);
        a.r[0] = r3;
        a.r[1] = rd32(0x80571dc4u);
        r3 = tc_call(0x8030df6cu, &a);
        r31 = r3;
        r3 = tc_call(0x8030de70u, &a);
        a.r[0] = r3;
        a.r[1] = r28;
        a.r[2] = r31;
        (void)tc_call(0x8030df74u, &a);
        r3 = tc_call(0x802f74ecu, &a);
        a.r[0] = r3;
        a.r[1] = rd32(0x80571dc4u);
        (void)tc_call(0x802f75c8u, &a);
        r3 = tc_call(0x802f74ecu, &a);
        a.r[0] = r3;
        a.r[1] = rd32(0x80571dc4u);
        r3 = tc_call(0x802f75c8u, &a);
        r31 = r3;
        r3 = tc_call(0x802f74ecu, &a);
        a.r[0] = r3;
        a.r[1] = r30;
        a.r[2] = r31;
        (void)tc_call(0x802f75d4u, &a);
        (void)tc_call(0x802fd190u, &a);
        a.r[0] = 0x80548d30u;
        a.r[1] = rd32(param_r3 + 8u);
        a.r[2] = param_r4;
        a.r[3] = rd32(param_r3 + 0xcu);
        (void)tc_call(0x8030b2f4u, &a);
        r3 = tc_call(0x80306860u, &a);
        a.r[0] = r3;
        a.r[1] = rd32(param_r3);
        a.r[2] = r29;
        a.r[3] = rd32(param_r3 + 4u);
        (void)tc_call(0x80306994u, &a);
    }
    return;
}
