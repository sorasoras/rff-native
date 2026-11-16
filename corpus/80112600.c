#include "tc_rt.h"

static void px_rec(u32 sp_, u32 param_r3)
{
    u32 c0eq = 0, ctr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r11 = 0, r26 = 0;
    u32 r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t0 = 0, t1 = 0, t2 = 0;
    f64 f0 = 0.0, f1 = 0.0, f29 = 0.0, f30 = 0.0;
    TcArgs a = {0};
    wr32(sp_ - 0x80u, sp_);
    r1 = sp_ - 0x80u;
    wr32(r1 + 0x84u, 0x817ff000u);
    wrf64(r1 + 0x70u, 0.0);
    t0 = r1 + 0x78u;
    wrf32d(t0, 0.0);
    wrf32d(t0 + 4u, 0.0);
    wrf64(r1 + 0x60u, 0.0);
    t1 = r1 + 0x68u;
    wrf32d(t1, 0.0);
    wrf32d(t1 + 4u, 0.0);
    wrf64(r1 + 0x50u, 0.0);
    t2 = r1 + 0x58u;
    wrf32d(t2, 0.0);
    wrf32d(t2 + 4u, 0.0);
    r11 = r1 + 0x50u;
    wr32(r11 - 0x18u, 0u);
    wr32(r11 - 0x14u, 0u);
    wr32(r11 - 0x10u, 0u);
    wr32(r11 - 0xcu, 0u);
    wr32(r11 - 8u, 0u);
    wr32(r11 - 4u, 0u);
    r7 = rd32(param_r3 + 0x40u);
    c0eq = r7 == 0u;
    if (!c0eq) {
        if (c0eq) {
            r0 = 0xffffffffu;
        } else {
            r0 = rd32(param_r3);
        }
        if (r0 != 4u) {
            r28 = rd32(param_r3 + 0x4cu);
            f29 = (f64)rdf32(0x805707e4u);
            if (r28 == 0u) {
                r26 = rd32(param_r3 + 0x48u);
                if (r26 != 0u) {
                    f0 = (f64)rdf32(0x80574124u);
                    wrf32d(r1 + 0x28u, f0);
                    wrf32d(r1 + 0x24u, f0);
                    wrf32d(r1 + 0x20u, f0);
                    a.r[0] = r1 + 0x20u;
                    f1 = tc_callf(0x8010fc28u, &a);
                    a.r[0] = r26;
                    a.r[1] = r1 + 0x20u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r26 + 0x30u) + 0x1cu), &a);
                }
            } else {
                c0eq = rd32(r28 + 0x40u) == 0u;
                if (!c0eq) {
                    if (c0eq) {
                        r0 = 0xffffffffu;
                    } else {
                        r0 = rd32(r28);
                    }
                    if (r0 != 4u) {
                        r3 = rd32(r28 + 0x4cu);
                        f30 = (f64)rdf32(0x805707e4u);
                        if (r3 == 0u) {
                            r26 = rd32(r28 + 0x48u);
                            if (r26 != 0u) {
                                f0 = (f64)rdf32(0x80574124u);
                                wrf32d(r1 + 0x10u, f0);
                                wrf32d(r1 + 0xcu, f0);
                                wrf32d(r1 + 8u, f0);
                                a.r[0] = r1 + 8u;
                                f1 = tc_callf(0x8010fc28u, &a);
                                a.r[0] = r26;
                                a.r[1] = r1 + 8u;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.f[0] = f1;
                                f1 = tc_callf(rd32(rd32(r26 + 0x30u) + 0x1cu), &a);
                                f30 = f1;
                            }
                        } else {
                            px_rec(r1, r3);
                            r26 = rd32(r28 + 0x48u);
                            if (r26 != 0u) {
                                f0 = (f64)rdf32(0x80574124u);
                                wrf32d(r1 + 0x1cu, f0);
                                wrf32d(r1 + 0x18u, f0);
                                wrf32d(r1 + 0x14u, f0);
                                a.r[0] = r1 + 0x14u;
                                f1 = tc_callf(0x8010fc28u, &a);
                                a.r[0] = r26;
                                a.r[1] = r1 + 0x14u;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.f[0] = f1;
                                f1 = tc_callf(rd32(rd32(r26 + 0x30u) + 0x1cu), &a);
                                f30 = f1;
                            }
                            if (!(f30 < 0.0)) {
                                f30 = 0.0;
                            }
                        }
                    } else {
                        a.r[0] = r28;
                        f1 = tc_callf(0x80112a88u, &a);
                        f30 = f1;
                    }
                } else {
                    f30 = f29;
                }
                r26 = rd32(param_r3 + 0x48u);
                if (r26 != 0u) {
                    f0 = (f64)rdf32(0x80574124u);
                    wrf32d(r1 + 0x34u, f0);
                    wrf32d(r1 + 0x30u, f0);
                    wrf32d(r1 + 0x2cu, f0);
                    a.r[0] = r1 + 0x2cu;
                    f1 = tc_callf(0x8010fc28u, &a);
                    a.r[0] = r26;
                    a.r[1] = r1 + 0x2cu;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r26 + 0x30u) + 0x1cu), &a);
                    f29 = f1;
                }
            }
        } else {
            if (r7 == 0u) {
                r0 = 0xffffffffu;
            } else {
                r0 = rd32(param_r3);
            }
            if (r0 == 4u) {
                r8 = rd32(0x805707e8u);
                r5 = 0u;
                r4 = r7 - r8;
                r6 = param_r3 + ((r8 << 2u) & 0xfffffffcu);
                ctr = r4;
                if ((s32)r4 > 0) {
                    while ((rd32(r6) - 0x7fff0000u) == 0xffffu) {
                        r5 = r5 + 1u;
                        r6 = r6 + 4u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) break;
                    }
                }
                r4 = r5 + r8;
                r29 = 0u;
                r28 = 0u;
                r5 = r4 + 5u;
                r30 = r7 - r5;
                r27 = param_r3 + ((r5 << 2u) & 0xfffffffcu);
                r26 = rd32(param_r3 + (((r4 + 1u) << 2u) & 0xfffffffcu)) & 8u;
                for (;;) {
                    if ((s32)r28 >= (s32)r30) {
                        if (r29 == 0u) break;
                        break;
                    }
                    r3 = rd32(r27);
                    if (r3 != 0xffffffffu) {
                        if (r3 == 0u) break;
                        r29 = 1u;
                        a.r[0] = r3;
                        r3 = tc_call(0x8014d8acu, &a);
                        if (r26 != 0u) {
                            r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
                        }
                        if (r3 != 0u) break;
                    }
                    r27 = r27 + 4u;
                    r28 = r28 + 1u;
                }
            }
            r7 = rd32(param_r3 + 0x40u);
            if (r7 == 0u) {
                r0 = 0xffffffffu;
            } else {
                r0 = rd32(param_r3);
            }
            if (r0 == 4u) {
                r8 = rd32(0x805707e8u);
                r5 = 0u;
                r0 = r7 - r8;
                r6 = (r8 << 2u) & 0xfffffffcu;
                r4 = param_r3 + r6;
                ctr = r0;
                if ((s32)r0 > 0) {
                    while ((rd32(r4) - 0x7fff0000u) == 0xffffu) {
                        r5 = r5 + 1u;
                        r4 = r4 + 4u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) break;
                    }
                }
                r0 = r8 + (r5 + 1u);
                if ((s32)r0 < (s32)r7) {
                    r0 = (r0 << 2u) & 0xfffffffcu;
                    r4 = rd32(param_r3 + r0);
                } else {
                    r4 = 0u;
                }
                r0 = r7 - r8;
                r5 = param_r3 + r6;
                r6 = 0u;
                ctr = r0;
                if ((s32)r0 > 0) {
                    while ((rd32(r5) - 0x7fff0000u) == 0xffffu) {
                        r6 = r6 + 1u;
                        r5 = r5 + 4u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) break;
                    }
                }
                r0 = r8 + (r6 + 2u);
                if ((s32)r0 < (s32)r7) {
                    r0 = (r0 << 2u) & 0xfffffffcu;
                    r3 = rd32(param_r3 + r0);
                } else {
                    r3 = 0u;
                }
                if ((r4 & 0x10u) == 0u) {
                    if ((r4 & 0x40u) == 0u) {
                        r0 = 1u;
                    } else {
                        a.r[0] = r3;
                        r3 = tc_call(0x800a6894u, &a);
                        r31 = r3;
                        if (r3 != 0u) {
                            a.r[0] = r3;
                            r3 = tc_call(0x800a68e0u, &a);
                            if (r3 == 0u) {
                                r0 = 1u;
                            } else {
                                a.r[0] = r31;
                                r3 = tc_call(0x8015e420u, &a);
                                r0 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
                            }
                        } else {
                            r0 = 1u;
                        }
                    }
                } else {
                    a.r[0] = r3;
                    r3 = tc_call(0x800a7a44u, &a);
                    if (r3 != 0u) {
                        if ((rd32(r3 + 0x90u) & 7u) != 0u) {
                            a.r[0] = r3;
                            r3 = tc_call(0x800ca270u, &a);
                            r0 = (ppc_cntlzw(r3 & 1u) >> 5u) & 0x7ffffffu;
                        } else {
                            r0 = 1u;
                        }
                    } else {
                        r0 = 0u;
                    }
                }
            } else {
                r0 = 1u;
            }
        }
    }
    return;
}

void fn_80112600(u32 param_r3)
{
    px_rec(0x817fe000u, param_r3);
}
