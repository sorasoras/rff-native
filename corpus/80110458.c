#include "tc_rt.h"

u32 fn_80110458(u32 param_1, u32 param_2)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    if (param_1 > 6u) {
        r3 = 0u;
    } else {
        r4 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fc9e2d8u);
        sw_ = r4;
        switch (sw_) {
        case 0x80110490u:
            r3 = tc_call(0x80097e5cu, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x78u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x78u;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                }
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x78u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
            }
            if (r3 != 0u) {
                f1 = (f64)rdf32(0x80574144u);
                wr32(r3 + 0x30u, 0x80361df8u);
                f0 = (f64)rdf32(0x80574124u);
                r6 = r3 + 0x4cu;
                wrf32d(r3, f1);
                r5 = r3 + 0x70u;
                wrf32d(r3 + 0x10u, f0);
                wrf32d(r3 + 0x20u, f0);
                wrf32d(r3 + 4u, f0);
                wrf32d(r3 + 0x14u, f1);
                wrf32d(r3 + 0x24u, f0);
                wrf32d(r3 + 8u, f0);
                wrf32d(r3 + 0x18u, f0);
                wrf32d(r3 + 0x28u, f1);
                wrf32d(r3 + 0xcu, f0);
                wrf32d(r3 + 0x1cu, f0);
                wrf32d(r3 + 0x2cu, f0);
                wr32(r3 + 0x30u, 0x80361dd4u);
                wrf32d(r3 + 0x3cu, f0);
                wrf32d(r3 + 0x38u, f0);
                wrf32d(r3 + 0x34u, f0);
                wrf32d(r3 + 0x48u, f0);
                wrf32d(r3 + 0x44u, f0);
                wrf32d(r3 + 0x40u, f0);
                if (r6 < r5) {
                    r8 = r3 + 0x4cu;
                    r9 = r5 - r8;
                    r7 = r3 + 0x10u;
                    r10 = r9 + 0xbu;
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r10) >> 1);
                    r11 = r0 + ((r0 >> 0x1fu) & 1u);
                    r12 = r11 + 1u;
                    if ((s32)r12 > 8) {
                        c0gt = r8 > r5;
                        r4 = 0u;
                        r5 = 0u;
                        if (!c0gt) {
                            r8 = 1u;
                            if ((r9 & 0x80000000u) == 0u && (r10 & 0x80000000u) != 0u) {
                                r8 = 0u;
                            }
                            if (r8 != 0u) {
                                r5 = 1u;
                            }
                        }
                        if (r5 != 0u) {
                            r8 = r11 & 0x80000000u;
                            r5 = 1u;
                            if (r8 == 0u && r8 != (r12 & 0x80000000u)) {
                                r5 = 0u;
                            }
                            if (r5 != 0u) {
                                r4 = 1u;
                            }
                        }
                        if (r4 != 0u) {
                            f0 = (f64)rdf32(0x80574124u);
                            ctr = ppc_divwu(r7 + 0x5fu - r6, 0x60u);
                            if (r6 < r7) {
                                do {
                                    wrf32d(r6 + 8u, f0);
                                    wrf32d(r6 + 4u, f0);
                                    wrf32d(r6, f0);
                                    wrf32d(r6 + 0x14u, f0);
                                    wrf32d(r6 + 0x10u, f0);
                                    wrf32d(r6 + 0xcu, f0);
                                    wrf32d(r6 + 0x20u, f0);
                                    wrf32d(r6 + 0x1cu, f0);
                                    wrf32d(r6 + 0x18u, f0);
                                    wrf32d(r6 + 0x2cu, f0);
                                    wrf32d(r6 + 0x28u, f0);
                                    wrf32d(r6 + 0x24u, f0);
                                    wrf32d(r6 + 0x38u, f0);
                                    wrf32d(r6 + 0x34u, f0);
                                    wrf32d(r6 + 0x30u, f0);
                                    wrf32d(r6 + 0x44u, f0);
                                    wrf32d(r6 + 0x40u, f0);
                                    wrf32d(r6 + 0x3cu, f0);
                                    wrf32d(r6 + 0x50u, f0);
                                    wrf32d(r6 + 0x4cu, f0);
                                    wrf32d(r6 + 0x48u, f0);
                                    wrf32d(r6 + 0x5cu, f0);
                                    wrf32d(r6 + 0x58u, f0);
                                    wrf32d(r6 + 0x54u, f0);
                                    r6 = r6 + 0x60u;
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        }
                    }
                    r5 = r3 + 0x70u;
                    f0 = (f64)rdf32(0x80574124u);
                    ctr = ppc_divwu(r5 + 0xbu - r6, 0xcu);
                    if (r6 < r5) {
                        do {
                            wrf32d(r6 + 8u, f0);
                            wrf32d(r6 + 4u, f0);
                            wrf32d(r6, f0);
                            r6 = r6 + 0xcu;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                f0 = (f64)rdf32(0x80574148u);
                wr32(r3 + 0x70u, 0u);
                wrf32d(r3 + 0x74u, f0);
            }
            r30 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = param_2;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x30u) + 0x14u), &a);
            break;
        case 0x80110700u:
            r3 = tc_call(0x80097e5cu, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x78u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x78u;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                }
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x78u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
            }
            if (r3 != 0u) {
                f1 = (f64)rdf32(0x80574144u);
                wr32(r3 + 0x30u, 0x80361df8u);
                f0 = (f64)rdf32(0x80574124u);
                r6 = r3 + 0x4cu;
                wrf32d(r3, f1);
                r5 = r3 + 0x70u;
                wrf32d(r3 + 0x10u, f0);
                wrf32d(r3 + 0x20u, f0);
                wrf32d(r3 + 4u, f0);
                wrf32d(r3 + 0x14u, f1);
                wrf32d(r3 + 0x24u, f0);
                wrf32d(r3 + 8u, f0);
                wrf32d(r3 + 0x18u, f0);
                wrf32d(r3 + 0x28u, f1);
                wrf32d(r3 + 0xcu, f0);
                wrf32d(r3 + 0x1cu, f0);
                wrf32d(r3 + 0x2cu, f0);
                wr32(r3 + 0x30u, 0x80361dd4u);
                wrf32d(r3 + 0x3cu, f0);
                wrf32d(r3 + 0x38u, f0);
                wrf32d(r3 + 0x34u, f0);
                wrf32d(r3 + 0x48u, f0);
                wrf32d(r3 + 0x44u, f0);
                wrf32d(r3 + 0x40u, f0);
                if (r6 < r5) {
                    r8 = r3 + 0x4cu;
                    r9 = r5 - r8;
                    r7 = r3 + 0x10u;
                    r10 = r9 + 0xbu;
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r10) >> 1);
                    r11 = r0 + ((r0 >> 0x1fu) & 1u);
                    r12 = r11 + 1u;
                    if ((s32)r12 > 8) {
                        c0gt = r8 > r5;
                        r4 = 0u;
                        r5 = 0u;
                        if (!c0gt) {
                            r8 = 1u;
                            if ((r9 & 0x80000000u) == 0u && (r10 & 0x80000000u) != 0u) {
                                r8 = 0u;
                            }
                            if (r8 != 0u) {
                                r5 = 1u;
                            }
                        }
                        if (r5 != 0u) {
                            r8 = r11 & 0x80000000u;
                            r5 = 1u;
                            if (r8 == 0u && r8 != (r12 & 0x80000000u)) {
                                r5 = 0u;
                            }
                            if (r5 != 0u) {
                                r4 = 1u;
                            }
                        }
                        if (r4 != 0u) {
                            f0 = (f64)rdf32(0x80574124u);
                            ctr = ppc_divwu(r7 + 0x5fu - r6, 0x60u);
                            if (r6 < r7) {
                                do {
                                    wrf32d(r6 + 8u, f0);
                                    wrf32d(r6 + 4u, f0);
                                    wrf32d(r6, f0);
                                    wrf32d(r6 + 0x14u, f0);
                                    wrf32d(r6 + 0x10u, f0);
                                    wrf32d(r6 + 0xcu, f0);
                                    wrf32d(r6 + 0x20u, f0);
                                    wrf32d(r6 + 0x1cu, f0);
                                    wrf32d(r6 + 0x18u, f0);
                                    wrf32d(r6 + 0x2cu, f0);
                                    wrf32d(r6 + 0x28u, f0);
                                    wrf32d(r6 + 0x24u, f0);
                                    wrf32d(r6 + 0x38u, f0);
                                    wrf32d(r6 + 0x34u, f0);
                                    wrf32d(r6 + 0x30u, f0);
                                    wrf32d(r6 + 0x44u, f0);
                                    wrf32d(r6 + 0x40u, f0);
                                    wrf32d(r6 + 0x3cu, f0);
                                    wrf32d(r6 + 0x50u, f0);
                                    wrf32d(r6 + 0x4cu, f0);
                                    wrf32d(r6 + 0x48u, f0);
                                    wrf32d(r6 + 0x5cu, f0);
                                    wrf32d(r6 + 0x58u, f0);
                                    wrf32d(r6 + 0x54u, f0);
                                    r6 = r6 + 0x60u;
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        }
                    }
                    r5 = r3 + 0x70u;
                    f0 = (f64)rdf32(0x80574124u);
                    ctr = ppc_divwu(r5 + 0xbu - r6, 0xcu);
                    if (r6 < r5) {
                        do {
                            wrf32d(r6 + 8u, f0);
                            wrf32d(r6 + 4u, f0);
                            wrf32d(r6, f0);
                            r6 = r6 + 0xcu;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                f0 = (f64)rdf32(0x80574148u);
                wr32(r3 + 0x70u, 0u);
                wrf32d(r3 + 0x74u, f0);
            }
            r30 = r3;
            a.r[0] = r3;
            a.r[1] = 1u;
            a.r[2] = param_2;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x30u) + 0x14u), &a);
            break;
        case 0x80110970u:
            r3 = tc_call(0x80097e5cu, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x48u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x48u;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                }
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x48u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
            }
            if (r3 != 0u) {
                f1 = (f64)rdf32(0x80574144u);
                wr32(r3 + 0x30u, 0x80361df8u);
                f0 = (f64)rdf32(0x80574124u);
                wrf32d(r3, f1);
                wrf32d(r3 + 0x10u, f0);
                wrf32d(r3 + 0x20u, f0);
                wrf32d(r3 + 4u, f0);
                wrf32d(r3 + 0x14u, f1);
                wrf32d(r3 + 0x24u, f0);
                wrf32d(r3 + 8u, f0);
                wrf32d(r3 + 0x18u, f0);
                wrf32d(r3 + 0x28u, f1);
                wrf32d(r3 + 0xcu, f0);
                wrf32d(r3 + 0x1cu, f0);
                wrf32d(r3 + 0x2cu, f0);
                wr32(r3 + 0x30u, 0x80361d8cu);
                wrf32d(r3 + 0x3cu, f0);
                wrf32d(r3 + 0x38u, f0);
                wrf32d(r3 + 0x34u, f0);
            }
            r30 = r3;
            a.r[0] = r3;
            a.r[1] = 2u;
            a.r[2] = param_2;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x30u) + 0x14u), &a);
            break;
        case 0x80110a54u:
            r3 = tc_call(0x80097e5cu, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x48u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x48u;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                }
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x48u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
            }
            if (r3 != 0u) {
                f1 = (f64)rdf32(0x80574144u);
                wr32(r3 + 0x30u, 0x80361df8u);
                f0 = (f64)rdf32(0x80574124u);
                wrf32d(r3, f1);
                wrf32d(r3 + 0x10u, f0);
                wrf32d(r3 + 0x20u, f0);
                wrf32d(r3 + 4u, f0);
                wrf32d(r3 + 0x14u, f1);
                wrf32d(r3 + 0x24u, f0);
                wrf32d(r3 + 8u, f0);
                wrf32d(r3 + 0x18u, f0);
                wrf32d(r3 + 0x28u, f1);
                wrf32d(r3 + 0xcu, f0);
                wrf32d(r3 + 0x1cu, f0);
                wrf32d(r3 + 0x2cu, f0);
                wr32(r3 + 0x30u, 0x80361d8cu);
                wrf32d(r3 + 0x3cu, f0);
                wrf32d(r3 + 0x38u, f0);
                wrf32d(r3 + 0x34u, f0);
            }
            r30 = r3;
            a.r[0] = r3;
            a.r[1] = 3u;
            a.r[2] = param_2;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x30u) + 0x14u), &a);
            break;
        case 0x80110b38u:
            r3 = tc_call(0x80097e5cu, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x78u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x78u;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                }
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x78u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
            }
            if (r3 != 0u) {
                f1 = (f64)rdf32(0x80574144u);
                wr32(r3 + 0x30u, 0x80361df8u);
                f0 = (f64)rdf32(0x80574124u);
                r6 = r3 + 0x4cu;
                wrf32d(r3, f1);
                r5 = r3 + 0x70u;
                wrf32d(r3 + 0x10u, f0);
                wrf32d(r3 + 0x20u, f0);
                wrf32d(r3 + 4u, f0);
                wrf32d(r3 + 0x14u, f1);
                wrf32d(r3 + 0x24u, f0);
                wrf32d(r3 + 8u, f0);
                wrf32d(r3 + 0x18u, f0);
                wrf32d(r3 + 0x28u, f1);
                wrf32d(r3 + 0xcu, f0);
                wrf32d(r3 + 0x1cu, f0);
                wrf32d(r3 + 0x2cu, f0);
                wr32(r3 + 0x30u, 0x80361dd4u);
                wrf32d(r3 + 0x3cu, f0);
                wrf32d(r3 + 0x38u, f0);
                wrf32d(r3 + 0x34u, f0);
                wrf32d(r3 + 0x48u, f0);
                wrf32d(r3 + 0x44u, f0);
                wrf32d(r3 + 0x40u, f0);
                if (r6 < r5) {
                    r8 = r3 + 0x4cu;
                    r9 = r5 - r8;
                    r7 = r3 + 0x10u;
                    r10 = r9 + 0xbu;
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r10) >> 1);
                    r11 = r0 + ((r0 >> 0x1fu) & 1u);
                    r12 = r11 + 1u;
                    if ((s32)r12 > 8) {
                        c0gt = r8 > r5;
                        r4 = 0u;
                        r5 = 0u;
                        if (!c0gt) {
                            r8 = 1u;
                            if ((r9 & 0x80000000u) == 0u && (r10 & 0x80000000u) != 0u) {
                                r8 = 0u;
                            }
                            if (r8 != 0u) {
                                r5 = 1u;
                            }
                        }
                        if (r5 != 0u) {
                            r8 = r11 & 0x80000000u;
                            r5 = 1u;
                            if (r8 == 0u && r8 != (r12 & 0x80000000u)) {
                                r5 = 0u;
                            }
                            if (r5 != 0u) {
                                r4 = 1u;
                            }
                        }
                        if (r4 != 0u) {
                            f0 = (f64)rdf32(0x80574124u);
                            ctr = ppc_divwu(r7 + 0x5fu - r6, 0x60u);
                            if (r6 < r7) {
                                do {
                                    wrf32d(r6 + 8u, f0);
                                    wrf32d(r6 + 4u, f0);
                                    wrf32d(r6, f0);
                                    wrf32d(r6 + 0x14u, f0);
                                    wrf32d(r6 + 0x10u, f0);
                                    wrf32d(r6 + 0xcu, f0);
                                    wrf32d(r6 + 0x20u, f0);
                                    wrf32d(r6 + 0x1cu, f0);
                                    wrf32d(r6 + 0x18u, f0);
                                    wrf32d(r6 + 0x2cu, f0);
                                    wrf32d(r6 + 0x28u, f0);
                                    wrf32d(r6 + 0x24u, f0);
                                    wrf32d(r6 + 0x38u, f0);
                                    wrf32d(r6 + 0x34u, f0);
                                    wrf32d(r6 + 0x30u, f0);
                                    wrf32d(r6 + 0x44u, f0);
                                    wrf32d(r6 + 0x40u, f0);
                                    wrf32d(r6 + 0x3cu, f0);
                                    wrf32d(r6 + 0x50u, f0);
                                    wrf32d(r6 + 0x4cu, f0);
                                    wrf32d(r6 + 0x48u, f0);
                                    wrf32d(r6 + 0x5cu, f0);
                                    wrf32d(r6 + 0x58u, f0);
                                    wrf32d(r6 + 0x54u, f0);
                                    r6 = r6 + 0x60u;
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        }
                    }
                    r5 = r3 + 0x70u;
                    f0 = (f64)rdf32(0x80574124u);
                    ctr = ppc_divwu(r5 + 0xbu - r6, 0xcu);
                    if (r6 < r5) {
                        do {
                            wrf32d(r6 + 8u, f0);
                            wrf32d(r6 + 4u, f0);
                            wrf32d(r6, f0);
                            r6 = r6 + 0xcu;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                wr32(r3 + 0x70u, 0u);
                wrf32d(r3 + 0x74u, (f64)rdf32(0x80574148u));
                wr32(r3 + 0x30u, 0x80361db0u);
            }
            r30 = r3;
            a.r[0] = r3;
            a.r[1] = 4u;
            a.r[2] = param_2;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x30u) + 0x14u), &a);
            break;
        case 0x80110db4u:
            r3 = tc_call(0x80097e5cu, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x5cu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x5cu;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                }
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x5cu;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
            }
            if (r3 != 0u) {
                f1 = (f64)rdf32(0x80574144u);
                wr32(r3 + 0x30u, 0x80361df8u);
                f0 = (f64)rdf32(0x80574124u);
                wrf32d(r3, f1);
                wrf32d(r3 + 0x10u, f0);
                wrf32d(r3 + 0x20u, f0);
                wrf32d(r3 + 4u, f0);
                wrf32d(r3 + 0x14u, f1);
                wrf32d(r3 + 0x24u, f0);
                wrf32d(r3 + 8u, f0);
                wrf32d(r3 + 0x18u, f0);
                wrf32d(r3 + 0x28u, f1);
                wrf32d(r3 + 0xcu, f0);
                wrf32d(r3 + 0x1cu, f0);
                wrf32d(r3 + 0x2cu, f0);
                wrf32d(r3 + 0x3cu, f0);
                wrf32d(r3 + 0x38u, f0);
                wrf32d(r3 + 0x34u, f0);
                wr32(r3 + 0x30u, 0x80361d68u);
                wrf32d(r3 + 0x54u, f0);
                wrf32d(r3 + 0x50u, f0);
                wrf32d(r3 + 0x4cu, f0);
            }
            r30 = r3;
            a.r[0] = r3;
            a.r[1] = 5u;
            a.r[2] = param_2;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x30u) + 0x14u), &a);
            break;
        case 0x80110ea4u:
            r3 = tc_call(0x80097e5cu, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x7cu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x7cu;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                }
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x7cu;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
            }
            if (r3 != 0u) {
                f1 = (f64)rdf32(0x80574144u);
                wr32(r3 + 0x30u, 0x80361df8u);
                f0 = (f64)rdf32(0x80574124u);
                r6 = r3 + 0x4cu;
                wrf32d(r3, f1);
                r5 = r3 + 0x70u;
                wrf32d(r3 + 0x10u, f0);
                wrf32d(r3 + 0x20u, f0);
                wrf32d(r3 + 4u, f0);
                wrf32d(r3 + 0x14u, f1);
                wrf32d(r3 + 0x24u, f0);
                wrf32d(r3 + 8u, f0);
                wrf32d(r3 + 0x18u, f0);
                wrf32d(r3 + 0x28u, f1);
                wrf32d(r3 + 0xcu, f0);
                wrf32d(r3 + 0x1cu, f0);
                wrf32d(r3 + 0x2cu, f0);
                wr32(r3 + 0x30u, 0x80361dd4u);
                wrf32d(r3 + 0x3cu, f0);
                wrf32d(r3 + 0x38u, f0);
                wrf32d(r3 + 0x34u, f0);
                wrf32d(r3 + 0x48u, f0);
                wrf32d(r3 + 0x44u, f0);
                wrf32d(r3 + 0x40u, f0);
                if (r6 < r5) {
                    r8 = r3 + 0x4cu;
                    r9 = r5 - r8;
                    r7 = r3 + 0x10u;
                    r10 = r9 + 0xbu;
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r10) >> 1);
                    r11 = r0 + ((r0 >> 0x1fu) & 1u);
                    r12 = r11 + 1u;
                    if ((s32)r12 > 8) {
                        c0gt = r8 > r5;
                        r4 = 0u;
                        r5 = 0u;
                        if (!c0gt) {
                            r8 = 1u;
                            if ((r9 & 0x80000000u) == 0u && (r10 & 0x80000000u) != 0u) {
                                r8 = 0u;
                            }
                            if (r8 != 0u) {
                                r5 = 1u;
                            }
                        }
                        if (r5 != 0u) {
                            r8 = r11 & 0x80000000u;
                            r5 = 1u;
                            if (r8 == 0u && r8 != (r12 & 0x80000000u)) {
                                r5 = 0u;
                            }
                            if (r5 != 0u) {
                                r4 = 1u;
                            }
                        }
                        if (r4 != 0u) {
                            f0 = (f64)rdf32(0x80574124u);
                            ctr = ppc_divwu(r7 + 0x5fu - r6, 0x60u);
                            if (r6 < r7) {
                                do {
                                    wrf32d(r6 + 8u, f0);
                                    wrf32d(r6 + 4u, f0);
                                    wrf32d(r6, f0);
                                    wrf32d(r6 + 0x14u, f0);
                                    wrf32d(r6 + 0x10u, f0);
                                    wrf32d(r6 + 0xcu, f0);
                                    wrf32d(r6 + 0x20u, f0);
                                    wrf32d(r6 + 0x1cu, f0);
                                    wrf32d(r6 + 0x18u, f0);
                                    wrf32d(r6 + 0x2cu, f0);
                                    wrf32d(r6 + 0x28u, f0);
                                    wrf32d(r6 + 0x24u, f0);
                                    wrf32d(r6 + 0x38u, f0);
                                    wrf32d(r6 + 0x34u, f0);
                                    wrf32d(r6 + 0x30u, f0);
                                    wrf32d(r6 + 0x44u, f0);
                                    wrf32d(r6 + 0x40u, f0);
                                    wrf32d(r6 + 0x3cu, f0);
                                    wrf32d(r6 + 0x50u, f0);
                                    wrf32d(r6 + 0x4cu, f0);
                                    wrf32d(r6 + 0x48u, f0);
                                    wrf32d(r6 + 0x5cu, f0);
                                    wrf32d(r6 + 0x58u, f0);
                                    wrf32d(r6 + 0x54u, f0);
                                    r6 = r6 + 0x60u;
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        }
                    }
                    r5 = r3 + 0x70u;
                    f0 = (f64)rdf32(0x80574124u);
                    ctr = ppc_divwu(r5 + 0xbu - r6, 0xcu);
                    if (r6 < r5) {
                        do {
                            wrf32d(r6 + 8u, f0);
                            wrf32d(r6 + 4u, f0);
                            wrf32d(r6, f0);
                            r6 = r6 + 0xcu;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                wr32(r3 + 0x70u, 0u);
                wrf32d(r3 + 0x74u, (f64)rdf32(0x80574148u));
                wr32(r3 + 0x30u, 0x80361d44u);
            }
            r30 = r3;
            a.r[0] = r3;
            a.r[1] = 6u;
            a.r[2] = param_2;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x30u) + 0x14u), &a);
            break;
        default:
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return r3;
        }
        r3 = r30;
    }
    return r3;
}
