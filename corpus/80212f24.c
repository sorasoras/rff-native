#include "tc_rt.h"

void fn_80212f24(u32 param_r3, u32 param_r4)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r23 = 0, r24 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if (param_r4 != 0u) {
        return;
    }
    r3 = tc_call(0x80097e5cu, &a);
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
    a.r[1] = 0x456u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    a.r[0] = param_r3 + 0x104u;
    a.r[1] = r3;
    (void)tc_call(0x802154d8u, &a);
    r3 = tc_call(0x80097e5cu, &a);
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
    a.r[1] = 0x45bu;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    a.r[0] = param_r3 + 0x104u;
    a.r[1] = r3;
    (void)tc_call(0x802154f8u, &a);
    r3 = tc_call(0x80097e5cu, &a);
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
    a.r[1] = 0x457u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    a.r[0] = param_r3 + 0x104u;
    a.r[1] = r3;
    (void)tc_call(0x80215564u, &a);
    r3 = tc_call(0x80097e5cu, &a);
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
    a.r[1] = 0x458u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    a.r[0] = param_r3 + 0x104u;
    a.r[1] = r3;
    (void)tc_call(0x80215518u, &a);
    r3 = tc_call(0x80097e5cu, &a);
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
    a.r[1] = 0x459u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    a.r[0] = param_r3 + 0x104u;
    a.r[1] = r3;
    (void)tc_call(0x802155d8u, &a);
    r3 = tc_call(0x80097e5cu, &a);
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
    a.r[1] = 0x45cu;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r27 = r3;
    r28 = 0u;
    r23 = rd32(r3 + 4u) + r3;
    r24 = rd32(r3 + 8u) + r3;
    r26 = rd32(r3 + 0xcu) + r3;
    while ((s32)r28 < (s32)rd32(r27)) {
        a.r[0] = param_r3 + 0x104u;
        a.r[1] = r28;
        a.r[2] = r27 + rd32(r23);
        (void)tc_call(0x80215720u, &a);
        a.r[0] = param_r3 + 0x104u;
        a.r[1] = r28;
        a.r[2] = r27 + rd32(r24);
        (void)tc_call(0x80215730u, &a);
        a.r[0] = param_r3 + 0x104u;
        a.r[1] = r28;
        a.r[2] = r27 + rd32(r26);
        (void)tc_call(0x80215774u, &a);
        r23 = r23 + 4u;
        r24 = r24 + 4u;
        r26 = r26 + 4u;
        r28 = r28 + 1u;
    }
    wr32(param_r3 + 0x9c8u, r27);
    r23 = param_r3;
    r26 = 0u;
    for (;;) {
        r0 = rd32(rd32(param_r3 + 0x4ecu));
        if ((s32)r26 >= (s32)r0) break;
        r24 = rd32(r23 + 0x60u);
        if (r24 != 0u) {
            r3 = tc_call(0x80097e5cu, &a);
            r6 = r3;
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r24;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = r24;
                    (void)tc_call(0x80094ec0u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r24;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                }
            }
        }
        r23 = r23 + 4u;
        r26 = r26 + 1u;
    }
    wr32(param_r3 + 0xe4u, r0);
    f31 = (f64)rdf32(0x80576960u);
    r27 = param_r3;
    wr32(param_r3 + 0x60u, 0u);
    r26 = 0u;
    wr32(param_r3 + 0x64u, 0u);
    wr32(param_r3 + 0x68u, 0u);
    wr32(param_r3 + 0x6cu, 0u);
    wr32(param_r3 + 0x70u, 0u);
    wr32(param_r3 + 0x74u, 0u);
    wr32(param_r3 + 0x78u, 0u);
    wr32(param_r3 + 0x7cu, 0u);
    wr32(param_r3 + 0x80u, 0u);
    wr32(param_r3 + 0x84u, 0u);
    wr32(param_r3 + 0x88u, 0u);
    wr32(param_r3 + 0x8cu, 0u);
    wr32(param_r3 + 0x90u, 0u);
    wr32(param_r3 + 0x94u, 0u);
    wr32(param_r3 + 0x98u, 0u);
    wr32(param_r3 + 0x9cu, 0u);
    wr32(param_r3 + 0xa0u, 0u);
    wr32(param_r3 + 0xa4u, 0u);
    wr32(param_r3 + 0xa8u, 0u);
    wr32(param_r3 + 0xacu, 0u);
    wr32(param_r3 + 0xb0u, 0u);
    wr32(param_r3 + 0xb4u, 0u);
    wr32(param_r3 + 0xb8u, 0u);
    wr32(param_r3 + 0xbcu, 0u);
    wr32(param_r3 + 0xc0u, 0u);
    wr32(param_r3 + 0xc4u, 0u);
    wr32(param_r3 + 0xc8u, 0u);
    wr32(param_r3 + 0xccu, 0u);
    wr32(param_r3 + 0xd0u, 0u);
    wr32(param_r3 + 0xd4u, 0u);
    wr32(param_r3 + 0xd8u, 0u);
    wr32(param_r3 + 0xdcu, 0u);
    wr32(param_r3 + 0xe0u, 0u);
    while ((s32)r26 < (s32)rd32(param_r3 + 0xe4u)) {
        r3 = tc_call(0x80097e5cu, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x210u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x210u;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x210u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            }
        }
        if (r3 != 0u) {
            wr8(r3, 1u);
            r4 = r3 + 0xa0u;
            r6 = r3 + 0x1fcu;
            wr8(r3 + 1u, 0u);
            wr32(r3 + 0x20u, 0xffffffffu);
            wr32(r3 + 0x24u, ppc_single_bits(f31));
            wr32(r3 + 0x28u, ppc_single_bits(f31));
            wr32(r3 + 0x2cu, ppc_single_bits(f31));
            wr32(r3 + 0x34u, 0xffffffffu);
            wr32(r3 + 0x38u, ppc_single_bits(f31));
            wr32(r3 + 0x3cu, ppc_single_bits(f31));
            wr32(r3 + 0x40u, ppc_single_bits(f31));
            wr32(r3 + 0x44u, 0xffffffffu);
            wr32(r3 + 0x48u, 0u);
            wr32(r3 + 0x4cu, 0xffffffffu);
            wr32(r3 + 0x64u, param_r3);
            wr32(r3 + 0x68u, r26);
            wr32(r3 + 0x6cu, 0u);
            wr32(r3 + 0x70u, 0u);
            wr32(r3 + 0x74u, ppc_single_bits(f31));
            wr32(r3 + 0x78u, ppc_single_bits(f31));
            wr32(r3 + 0x7cu, ppc_single_bits(f31));
            wr32(r3 + 0x80u, 0u);
            wr32(r3 + 0x84u, 0u);
            wr32(r3 + 0x88u, 0u);
            wr8(r3 + 0x8cu, 0u);
            wrf32d(r3 + 0x9cu, f31);
            wrf32d(r3 + 0x98u, f31);
            wrf32d(r3 + 0x94u, f31);
            if (r4 < r6) {
                r8 = r3 + 0xa0u;
                r9 = r6 - r8;
                r7 = r3 + 0x19cu;
                r10 = r9 + 0xbu;
                r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r10) >> 1);
                r11 = r0 + ((r0 >> 0x1fu) & 1u);
                r12 = r11 + 1u;
                if ((s32)r12 > 8) {
                    c0gt = r8 > r6;
                    r5 = 0u;
                    r6 = 0u;
                    if (!c0gt) {
                        r8 = 1u;
                        if ((r9 & 0x80000000u) == 0u && (r10 & 0x80000000u) != 0u) {
                            r8 = 0u;
                        }
                        if (r8 != 0u) {
                            r6 = 1u;
                        }
                    }
                    if (r6 != 0u) {
                        r8 = r11 & 0x80000000u;
                        r6 = 1u;
                        if (r8 == 0u && r8 != (r12 & 0x80000000u)) {
                            r6 = 0u;
                        }
                        if (r6 != 0u) {
                            r5 = 1u;
                        }
                    }
                    if (r5 != 0u) {
                        ctr = ppc_divwu(r7 + 0x5fu - r4, 0x60u);
                        if (r4 < r7) {
                            do {
                                wrf32d(r4 + 8u, f31);
                                wrf32d(r4 + 4u, f31);
                                wrf32d(r4, f31);
                                wrf32d(r4 + 0x14u, f31);
                                wrf32d(r4 + 0x10u, f31);
                                wrf32d(r4 + 0xcu, f31);
                                wrf32d(r4 + 0x20u, f31);
                                wrf32d(r4 + 0x1cu, f31);
                                wrf32d(r4 + 0x18u, f31);
                                wrf32d(r4 + 0x2cu, f31);
                                wrf32d(r4 + 0x28u, f31);
                                wrf32d(r4 + 0x24u, f31);
                                wrf32d(r4 + 0x38u, f31);
                                wrf32d(r4 + 0x34u, f31);
                                wrf32d(r4 + 0x30u, f31);
                                wrf32d(r4 + 0x44u, f31);
                                wrf32d(r4 + 0x40u, f31);
                                wrf32d(r4 + 0x3cu, f31);
                                wrf32d(r4 + 0x50u, f31);
                                wrf32d(r4 + 0x4cu, f31);
                                wrf32d(r4 + 0x48u, f31);
                                wrf32d(r4 + 0x5cu, f31);
                                wrf32d(r4 + 0x58u, f31);
                                wrf32d(r4 + 0x54u, f31);
                                r4 = r4 + 0x60u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r5 = r3 + 0x1fcu;
                ctr = ppc_divwu(r5 + 0xbu - r4, 0xcu);
                if (r4 < r5) {
                    do {
                        wrf32d(r4 + 8u, f31);
                        wrf32d(r4 + 4u, f31);
                        wrf32d(r4, f31);
                        r4 = r4 + 0xcu;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            wr32(r3 + 8u, 0xffffffffu);
            wr32(r3 + 0x58u, 0u);
            wr32(r3 + 0x14u, 0u);
            wr8(r3 + 2u, 0u);
            wr32(r3 + 0xcu, 0xffffffffu);
            wr32(r3 + 0x5cu, 0u);
            wr32(r3 + 0x18u, 0u);
            wr8(r3 + 3u, 0u);
            wr32(r3 + 0x10u, 0xffffffffu);
            wr32(r3 + 0x60u, 0u);
            wr32(r3 + 0x1cu, 0u);
            wr8(r3 + 4u, 0u);
        }
        wr32(r27 + 0x60u, r3);
        a.r[0] = param_r3 + 0x104u;
        a.r[1] = r26;
        r3 = tc_call(0x802156a0u, &a);
        wr8(rd32(r27 + 0x60u), (u8)r3);
        a.r[0] = rd32(r27 + 0x60u);
        a.r[1] = 0xffffffffu;
        a.r[2] = 0u;
        (void)tc_call(0x8021acc0u, &a);
        a.r[0] = rd32(r27 + 0x60u);
        a.r[1] = 0xffffffffu;
        a.r[2] = 1u;
        (void)tc_call(0x8021acc0u, &a);
        a.r[0] = rd32(r27 + 0x60u);
        a.r[1] = 0xffffffffu;
        a.r[2] = 2u;
        (void)tc_call(0x8021acc0u, &a);
        r27 = r27 + 4u;
        r26 = r26 + 1u;
    }
    return;
}
