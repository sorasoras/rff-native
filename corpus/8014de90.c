#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8014de90(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r29 = 0;
    u32 r30 = 0, t5 = 0, t9 = 0, t13 = 0, t17 = 0, t21 = 0;
    f64 f0 = 0.0, f1 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x800d9ffcu, &a);
    if ((u32)((s32)rd32((u32)param_1 + 0x74u) >> 31) != 0u) {
        r0 = rd32((u32)param_1 + 0x124u);
        if (r0 != 0u) {
            if (r0 == 1u) {
                r29 = rd32((u32)param_1 + 0x78u);
                a.r[0] = 0x8046ae40u;
                a.r[1] = rd32((u32)param_1 + 0xf8u);
                a.r[2] = 0u;
                r3 = tc_call(0x8013ec7cu, &a);
                a.f[0] = (f64)rdf32(0x80574768u);
                a.r[0] = r29;
                a.r[1] = r3;
                a.r[2] = 0u;
                (void)tc_call(0x80035740u, &a);
                r3 = rd32((u32)param_1 + 0x78u);
                a.r[0] = r3;
                a.r[1] = r3;
                (void)tc_call(0x800315c0u, &a);
                r3 = rd32((u32)param_1 + 0x78u);
                t5 = r3 + 8u;
                t9 = r3 + 0x10u;
                t13 = r3 + 0x18u;
                t17 = r3 + 0x20u;
                t21 = r3 + 0x28u;
                r30 = ppc_single_bits((f64)rdf32(r3 + 4u));
                r12 = ppc_single_bits((f64)rdf32(t5));
                r11 = ppc_single_bits((f64)rdf32(t5 + 4u));
                r10 = ppc_single_bits((f64)rdf32(t9));
                r9 = ppc_single_bits((f64)rdf32(t9 + 4u));
                r8 = ppc_single_bits((f64)rdf32(t13));
                r7 = ppc_single_bits((f64)rdf32(t13 + 4u));
                r6 = ppc_single_bits((f64)rdf32(t17));
                r5 = ppc_single_bits((f64)rdf32(t17 + 4u));
                r4 = ppc_single_bits((f64)rdf32(t21));
                r0 = ppc_single_bits((f64)rdf32(t21 + 4u));
                f0 = (f64)rdf32(0x80574760u);
                wr32((u32)param_1 + 0x168u, ppc_single_bits((f64)rdf32(r3)));
                wr32((u32)param_1 + 0x16cu, r30);
                wr32((u32)param_1 + 0x170u, r12);
                wr32((u32)param_1 + 0x174u, r11);
                wr32((u32)param_1 + 0x178u, r10);
                wr32((u32)param_1 + 0x17cu, r9);
                wr32((u32)param_1 + 0x180u, r8);
                wr32((u32)param_1 + 0x184u, r7);
                wr32((u32)param_1 + 0x188u, r6);
                wr32((u32)param_1 + 0x18cu, r5);
                wr32((u32)param_1 + 0x190u, r4);
                wr32((u32)param_1 + 0x194u, r0);
                wrf32d((u32)param_1 + 0x154u, f0);
                a.r[0] = (u32)param_1;
                f1 = tc_callf(0x8014e614u, &a);
                wr32((u32)param_1 + 0x124u, 2u);
            }
        } else {
            r4 = rd32((u32)param_1 + 0x134u);
            wr32((u32)param_1 + 0x248u, 1u);
            if (r4 != 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = r4;
                f1 = tc_callf(0x800da840u, &a);
                r3 = rd32((u32)param_1 + 0x11cu);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = (u32)param_1;
                    a.r[2] = 8u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    f1 = tc_callf(rd32(rd32(r3) + 0x7cu), &a);
                }
            }
            f0 = (f64)rdf32((u32)param_1 + 0x130u);
            wr32((u32)param_1 + 0x240u, 0u);
            wr32((u32)param_1 + 0x124u, 1u);
            wr32((u32)param_1 + 0x244u, 0u);
            wr32((u32)param_1 + 0x128u, 0u);
            wrf32d((u32)param_1 + 0x214u, f0);
        }
        r0 = rd32((u32)param_1 + 0x124u);
        if (r0 != 7u && r0 != 9u) {
            a.r[0] = rd32((u32)param_1 + 0x78u);
            a.r[1] = 0u;
            r3 = tc_call(0x80031cf8u, &a);
            f1 = tc_lastf();
            r4 = rd32((u32)param_1 + 0x11cu);
            if (r4 != 0u) {
                r5 = rd32(r4 + 0x78u);
            } else {
                r5 = 0u;
            }
            if (r5 != 0u && rd32((u32)param_1 + 0x248u) != 0u && r3 != 0u) {
                a.r[0] = r5;
                a.r[1] = rd32(r3 + 0x50u);
                f1 = tc_callf(0x800315c0u, &a);
            }
        }
        r0 = rd32((u32)param_1 + 0x124u);
        if (r0 != 6u) {
            if (r0 != 7u) {
                if (r0 != 5u) {
                    if (r0 != 8u) {
                        if (r0 != 9u) {
                            if (r0 != 2u && r0 == 0xau) {
                                if ((s32)rd32((u32)param_1 + 0x24cu) > 0) {
                                    r3 = rd32((u32)param_1 + 0x11cu);
                                    if (r3 != 0u) {
                                        a.r[0] = r3;
                                        a.r[1] = (u32)param_1;
                                        a.r[2] = 0x15u;
                                        a.r[3] = 0u;
                                        a.r[4] = 0u;
                                        a.r[5] = 0u;
                                        a.r[6] = 0u;
                                        a.r[7] = 0u;
                                        a.f[0] = f1;
                                        a.f[1] = 0.0;
                                        a.f[2] = 0.0;
                                        a.f[3] = 0.0;
                                        a.f[4] = 0.0;
                                        a.f[5] = 0.0;
                                        a.f[6] = 0.0;
                                        a.f[7] = 0.0;
                                        (void)tc_call(rd32(rd32(r3) + 0x7cu), &a);
                                    }
                                    wr32((u32)param_1 + 0x24cu, 0u);
                                }
                                if (rd32((u32)param_1 + 0x248u) != 0u) {
                                    wr32((u32)param_1 + 0x124u, 2u);
                                }
                            }
                        } else if (rd32((u32)param_1 + 0x240u) == 0u && rd32((u32)param_1 + 0x244u) == 0u) {
                            wr32((u32)param_1 + 0x124u, 0xau);
                        }
                    } else {
                        a.r[0] = rd32((u32)param_1 + 0x78u);
                        a.r[1] = (u32)param_1 + 0x150u;
                        r3 = tc_call(0x80147ee0u, &a);
                        if (r3 == 0u) {
                            wr32((u32)param_1 + 0x124u, 2u);
                        }
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x8014e614u, &a);
                    }
                } else {
                    f9 = (f64)rdf32((u32)param_1 + 0x14cu);
                    f7 = (f64)rdf32((u32)param_1 + 0x140u);
                    f10 = (f64)rdf32((u32)param_1 + 0x148u);
                    f11 = (f64)rdf32((u32)param_1 + 0x144u);
                    f0 = (f64)(f32)px_fdiv(f7, (f64)(f32)((f64)rdf32(0x8057476cu) * (f64)rdf32((u32)param_1 + 0x138u)));
                    f8 = (f64)rdf32((u32)param_1 + 0x154u);
                    wr32((u32)param_1 + 0x124u, 8u);
                    wr32((u32)param_1 + 0x128u, 1u);
                    f7 = (f64)(f32)(f8 + f7);
                    wrf32d((u32)param_1 + 0x150u, f0);
                    wrf32d((u32)param_1 + 0x158u, f7);
                    wrf32d((u32)param_1 + 0x15cu, f11);
                    wrf32d((u32)param_1 + 0x160u, f10);
                    wrf32d((u32)param_1 + 0x164u, f9);
                }
            } else {
                wr32((u32)param_1 + 0x128u, 1u);
                wr32((u32)param_1 + 0x244u, 1u);
            }
        } else {
            f7 = rdf64(0x80574770u);
            r3 = rd32((u32)param_1 + 0x78u);
            wr32((u32)param_1 + 0x244u, 1u);
            f0 = (f64)(f32)(px_b2f(0x4330000080000007ull) - f7);
            f7 = (f64)rdf32(r3 + 0x54u);
            if ((f7 > f0) || (f7 == f0)) {
                r3 = rd32((u32)param_1 + 0x11cu);
                wr32((u32)param_1 + 0x124u, 7u);
                if (r3 != 0u) {
                    r0 = rd32(r3 + 0x78u);
                } else {
                    r0 = 0u;
                }
                if (r0 != 0u) {
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x8014e420u, &a);
                    r4 = rd32((u32)param_1 + 0x254u);
                    if (r4 != 0xffffffffu) {
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = r4;
                        (void)tc_call(0x8010a74cu, &a);
                    }
                }
            }
        }
        if (rd32((u32)param_1 + 0x244u) != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x78u);
            a.r[1] = 0u;
            r3 = tc_call(0x800355acu, &a);
            if (r3 != 0u) {
                wr32((u32)param_1 + 0x124u, 9u);
                r29 = rd32((u32)param_1 + 0x78u);
                a.r[0] = 0x8046ae40u;
                a.r[1] = rd32((u32)param_1 + 0xf8u);
                a.r[2] = 0u;
                r3 = tc_call(0x8013ec7cu, &a);
                a.f[0] = (f64)rdf32(0x80574768u);
                a.r[0] = r29;
                a.r[1] = r3;
                a.r[2] = 0u;
                (void)tc_call(0x80035740u, &a);
                wr32((u32)param_1 + 0x244u, 0u);
            }
            r3 = rd32((u32)param_1 + 0x78u);
            a.r[0] = r3;
            a.r[1] = r3;
            (void)tc_call(0x800315c0u, &a);
        }
        if (rd32((u32)param_1 + 0x240u) != 0u) {
            r3 = rd32((u32)param_1 + 0x11cu);
            if (r3 != 0u) {
                r3 = rd32(r3 + 0x78u);
            } else {
                r3 = 0u;
            }
            if (r3 == 0u || rd32((u32)param_1 + 0x248u) == 0u) {
                wr32((u32)param_1 + 0x240u, 0u);
                wr32((u32)param_1 + 0x124u, 9u);
            } else {
                a.r[0] = r3;
                a.r[1] = (u32)param_1 + 0x220u;
                r3 = tc_call(0x80148258u, &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    r3 = rd32((u32)param_1 + 0x11cu);
                    wr32((u32)param_1 + 0x240u, 0u);
                    wr32((u32)param_1 + 0x124u, 9u);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = (u32)param_1;
                        a.r[2] = 7u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        (void)tc_call(rd32(rd32(r3) + 0x7cu), &a);
                    }
                }
            }
        }
    }
    return;
}
