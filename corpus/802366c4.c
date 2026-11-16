#include "tc_rt.h"

void fn_802366c4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r12 = 0, r28 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(0x805715c0u) != 0u) {
        wr32(((rd32(0x805715c0u) - 1u) * 0x14u) - 0x7fb1a158u, param_1);
    } else {
        wr32(0x804e5ef8u, param_1);
    }
    a.r[0] = r3;
    f1 = tc_callf(0x8022c2d8u, &a);
    r7 = 0u;
    if (param_1 != 0x10u) {
        if (param_1 != 0x20u) {
            if ((param_1 & 1u) == 0u) {
                a.r[0] = 0x27u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                f1 = tc_callf(0x80234fd0u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x802357f4u;
                a.r[7] = 0u;
                (void)tc_call(0x8023bff4u, &a);
            } else {
                r6 = 0x804e5c40u;
                wr32(0x805715d8u, 0u);
                r5 = 0x80000000u;
                wr32(0x8057160cu, 0x804e5c40u);
                wr32(0x80571608u, 0u);
                if (rd32(0x80003198u) == 0u) {
                    r3 = rd32(0x80571610u);
                    r7 = 0u;
                    while ((u32)(s16)r7 < rd32(r3)) {
                        if (rd32(r6 + 4u) == rd32(0x80003194u)) {
                            wr32(0x80571608u, r6);
                        }
                        r6 = r6 + 8u;
                        r7 = r7 + 1u;
                        wr32(0x8057160cu, r6);
                    }
                } else {
                    wr32(0x80571608u, 0x804e5c40u);
                    wr32(0x804e5c44u, rd32(0x80003194u));
                    wr32(rd32(0x80571608u), rd32(0x80003198u));
                }
                if (rd32(0x80571608u) == 0u) {
                    if (rd32(0x805715d0u) == 0u) {
                        r0 = 0u;
                    } else {
                        r28 = rd32(0x80571650u);
                        wr32(0x805715d4u, 1u);
                        wr32(0x805715d0u, 0u);
                        wr32(0x80571650u, 0x804e5b60u);
                        wr32(r28 + 0xcu, 0xau);
                        r12 = rd32(r28 + 0x28u);
                        if (r12 != 0u) {
                            a.r[0] = 0xfffffffdu;
                            a.r[1] = r28;
                            a.r[2] = 0x80000000u;
                            a.r[3] = r6;
                            a.r[4] = r7;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.f[0] = f1;
                            f1 = tc_callf(r12, &a);
                            r5 = 0u;
                            r6 = 0u;
                            r7 = 0u;
                        }
                        r12 = rd32(0x80571640u);
                        if (r12 != 0u) {
                            a.r[0] = 0u;
                            a.r[1] = r28;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            a.r[4] = r7;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(r12, &a);
                        }
                        (void)tc_call(0x80237c80u, &a);
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        wr32(rd32(0x80571650u) + 0xcu, 6u);
                        r0 = rd32(0x805715e4u);
                        wr32(0x80571630u, 1u);
                        if (r0 == 0u && rd32(0x805715e8u) == 0u) {
                            wr32(0x805715e4u, 1u);
                            a.r[0] = 0x804e5bc0u;
                            (void)tc_call(0x8022671cu, &a);
                            r3 = tc_call(0x802302b4u, &a);
                            a.r[0] = 0x804e5bc0u;
                            a.r[1] = 0x10624dd3u;
                            a.r[2] = 0u;
                            a.r[3] = r3;
                            a.r[4] = 0u;
                            a.r[5] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x64u;
                            a.r[6] = 0x80237c5cu;
                            (void)tc_call(0x802269ecu, &a);
                        }
                    }
                } else if (rd32(0x80571644u) == 3u) {
                    wr32(0x805715d8u, 0u);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8023cdc0u, &a);
                    r28 = rd32(rd32(0x80571608u));
                    r3 = tc_call(0x8022c2b0u, &a);
                    r30 = r3;
                    if (rd32(0x805715c0u) >= 5u) {
                        wr32(0x805715c0u, 0u);
                    }
                    r0 = rd32(0x805715c0u);
                    r3 = rd32(0x805715c0u) * 0x14u;
                    wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a164u, 0x22u);
                    r3 = r3 - 0x7fb1a180u;
                    r0 = r0 * 0x14u;
                    wr32(r3 + 0x20u, r28);
                    wr32(r0 - 0x7fb1a15cu, 0u);
                    r3 = tc_call(0x802302b4u, &a);
                    r5 = rd32(0x805715c0u) * 0x14u;
                    wr32(0x805715c0u, rd32(0x805715c0u) + 1u);
                    wr32(r5 - 0x7fb1a154u, r3);
                    a.r[0] = r30;
                    f1 = tc_callf(0x8022c2d8u, &a);
                    if ((u32)rd8(0x80003187u) != 0x80u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = rd32(rd32(0x80571608u));
                        a.r[1] = 0u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0x804e1140u;
                        a.r[5] = 0x80236b3cu;
                        a.r[7] = 0u;
                        (void)tc_call(0x8023b090u, &a);
                    } else {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = rd32(rd32(0x80571608u));
                        a.r[1] = 0x804e1040u;
                        a.r[2] = rd32(0x80571620u);
                        a.r[3] = 0x804e1140u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0x80236b3cu;
                        (void)tc_call(0x8023b2f8u, &a);
                    }
                } else {
                    wr32(0x805715d8u, 0u);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8023cdc0u, &a);
                    r28 = rd32(rd32(0x80571608u));
                    r3 = tc_call(0x8022c2b0u, &a);
                    r30 = r3;
                    if (rd32(0x805715c0u) >= 5u) {
                        wr32(0x805715c0u, 0u);
                    }
                    r0 = rd32(0x805715c0u);
                    r3 = rd32(0x805715c0u) * 0x14u;
                    wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a164u, 0x22u);
                    r3 = r3 - 0x7fb1a180u;
                    r0 = r0 * 0x14u;
                    wr32(r3 + 0x20u, r28);
                    wr32(r0 - 0x7fb1a15cu, 0u);
                    r3 = tc_call(0x802302b4u, &a);
                    r5 = rd32(0x805715c0u) * 0x14u;
                    wr32(0x805715c0u, rd32(0x805715c0u) + 1u);
                    wr32(r5 - 0x7fb1a154u, r3);
                    a.r[0] = r30;
                    f1 = tc_callf(0x8022c2d8u, &a);
                    if ((u32)rd8(0x80003187u) != 0x80u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = rd32(rd32(0x80571608u));
                        a.r[1] = 0u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0x804e1140u;
                        a.r[5] = 0x80236cc4u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8023b090u, &a);
                    } else {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = rd32(rd32(0x80571608u));
                        a.r[1] = 0x804e1040u;
                        a.r[2] = rd32(0x80571620u);
                        a.r[3] = 0x804e1140u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0x80236cc4u;
                        (void)tc_call(0x8023b2f8u, &a);
                    }
                }
            }
        } else {
            a.r[0] = 0x1234569u;
            a.r[1] = 0x80235600u;
            (void)tc_call(0x8023a598u, &a);
        }
    } else {
        a.r[0] = 0x1234568u;
        a.r[1] = 0x80235600u;
        (void)tc_call(0x8023a598u, &a);
    }
    return;
}
