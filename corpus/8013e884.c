#include "tc_rt.h"

u32 fn_8013e884(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0;
    u32 r27 = 0, r28 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = 0u;
    r31 = param_1;
    r5 = param_1;
    ctr = 0x14u;
    do {
        r0 = rd32(r5 + 8u);
        if (r0 == 0x40u) {
            wr32(param_1 + ((r6 << 2u) & 0xfffffffcu) + 8u, (u32)param_2);
            break;
        }
        if ((u32)param_2 == r0) {
            r3 = 0u;
            return r3;
        }
        r5 = r5 + 4u;
        r6 = r6 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if (rd32(param_1 + 0x70u) == 0u) {
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0x320u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        wr32(param_1 + 4u, r3);
        a.r[0] = 1u;
        (void)tc_call(0x80050b14u, &a);
        a.r[0] = rd32(param_1 + 4u);
        r3 = tc_call(0x80037914u, &a);
        r26 = r3;
        r27 = param_1;
        r28 = 0u;
        do {
            a.r[0] = r26;
            a.r[1] = r28;
            r3 = tc_call(0x80037988u, &a);
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8004bf2cu, &a);
            r28 = r28 + 1u;
            wr32(r27 + 0x6cu, r3);
            r27 = r27 + 0x20u;
        } while (r28 < 0x4au);
        r28 = rd32(param_1 + 4u);
        r3 = tc_call(0x800545e4u, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) == 0u) {
            if (rd32(r3 + 0x20u) == 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r28;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            } else {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r28;
                (void)tc_call(0x80094ec0u, &a);
            }
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r28;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        }
        r0 = rd32(param_1);
        wr32(param_1 + 4u, 0u);
        if (r0 == 0u) {
            r3 = tc_call(0x8006bb94u, &a);
            f1 = tc_lastf();
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[1] = 0x31fu;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0xffffffffu;
            r3 = tc_call(0x80050dd4u, &a);
            wr32(param_1, r3);
        }
        a.r[0] = 1u;
        (void)tc_call(0x80050b14u, &a);
        a.r[0] = rd32(param_1);
        r3 = tc_call(0x80037914u, &a);
        r26 = r3;
        r25 = 0u;
        do {
            a.r[0] = r26;
            a.r[1] = r25;
            r3 = tc_call(0x80037988u, &a);
            a.r[0] = r3;
            r3 = tc_call(0x80037914u, &a);
            r23 = rd32(r3 + 8u);
            r24 = r3;
            r27 = r31;
            r22 = 0u;
            while (r22 < r23) {
                a.r[0] = r24;
                a.r[1] = r22;
                r3 = tc_call(0x80037988u, &a);
                r4 = rd32(r3);
                c0lt = (s32)r4 < 1213745218;
                if (r4 == 0x48584842u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x8003b444u, &a);
                    wr32(r31 + 0x58u, r3);
                } else if (!c0lt) {
                    if (r4 == 0x48584d42u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x8003e048u, &a);
                        wr32(r31 + 0x60u, r3);
                    }
                } else {
                    c0lt = (s32)r4 < 1213744962;
                    if (r4 == 0x48584742u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x80038ce4u, &a);
                        wr32(r31 + 0x5cu, r3);
                    } else if (c0lt && r4 == 0x48584142u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x80031edcu, &a);
                        wr32(r27 + 0x64u, r3);
                        r27 = r27 + 4u;
                    }
                }
                r22 = r22 + 1u;
            }
            r25 = r25 + 1u;
            wr32(r31 + 0x70u, 1u);
            r31 = r31 + 0x20u;
        } while (r25 < 0x4au);
        r3 = 1u;
    } else {
        r3 = 1u;
    }
    return r3;
}
