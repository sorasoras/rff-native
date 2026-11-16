#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_801115d0(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x4cu);
    if (rd32(r3 + 0x14u) == 0u) {
        r3 = tc_call(0x800a7854u, &a);
        if (r3 != 0u) {
            r30 = rd32(param_r3);
            r29 = 0u;
            f31 = (f64)rdf32(0x80574124u);
            f30 = (f64)rdf32(0x80574144u);
            do {
                r3 = rd32(r30 + 0x40u);
                if (r3 == 0u) {
                    r0 = 0xffffffffu;
                } else {
                    r0 = rd32(r30);
                }
                if (r0 == 0u) {
                    if (r3 != 0u) {
                        r3 = rd32(r30 + 0x4cu);
                        if (r3 == 0u) {
                            r31 = rd32(r30 + 0x48u);
                            wrf32d(0x817fdf50u, f31);
                            wrf32d(0x817fdf4cu, f31);
                            wrf32d(0x817fdf48u, f31);
                            wrf32d(0x817fdf5cu, f31);
                            wrf32d(0x817fdf58u, f31);
                            wrf32d(0x817fdf54u, f31);
                            wrf32d(0x817fdf68u, f31);
                            wrf32d(0x817fdf64u, f31);
                            wrf32d(0x817fdf60u, f31);
                            a.r[0] = 0x817fdf48u;
                            (void)tc_call(0x8010fc28u, &a);
                            a.r[0] = 0x817fdf54u;
                            (void)tc_call(0x8010fc8cu, &a);
                            r6 = rd32(0x817fdf4cu);
                            r0 = rd32(0x817fdf50u);
                            wr32(0x817fdf84u, rd32(0x817fdf48u));
                            wr32(0x817fdf88u, r6);
                            wr32(0x817fdf8cu, r0);
                            a.r[0] = 0x817fdf84u;
                            a.r[1] = 0x817fdf54u;
                            a.r[2] = 0x817fdf84u;
                            (void)tc_call(0x802343a4u, &a);
                            f2 = (f64)rdf32(0x817fdf84u);
                            r0 = 0u;
                            f1 = (f64)rdf32(0x817fdf88u);
                            f0 = (f64)rdf32(0x817fdf8cu);
                            wrf32d(0x817fdf60u, f2);
                            wrf32d(0x817fdf64u, f1);
                            wrf32d(0x817fdf68u, f0);
                            if (f31 == f2 && f31 == f1 && f31 == f0) {
                                r0 = 1u;
                            }
                            if (r0 == 0u) {
                                a.r[0] = 0x817fdf60u;
                                f1 = tc_callf(0x80234440u, &a);
                                f29 = f1;
                                if (!(f1 < (f64)rdf32(0x805707e0u))) {
                                    r6 = rd32(0x817fdf4cu);
                                    r0 = rd32(0x817fdf50u);
                                    wr32(0x817fdf6cu, rd32(0x817fdf48u));
                                    wr32(0x817fdf70u, r6);
                                    wr32(0x817fdf74u, r0);
                                    a.r[0] = 0x817fdf6cu;
                                    a.r[1] = 0x817fdf54u;
                                    a.r[2] = 0x817fdf6cu;
                                    (void)tc_call(0x802343a4u, &a);
                                    r0 = 0u;
                                    if (f31 == (f64)rdf32(0x817fdf6cu) && f31 == (f64)rdf32(0x817fdf70u) && f31 == (f64)rdf32(0x817fdf74u)) {
                                        r0 = 1u;
                                    }
                                    if (r0 == 0u) {
                                        a.r[0] = 0x817fdf6cu;
                                        a.r[1] = 0x817fdf6cu;
                                        (void)tc_call(0x802343e4u, &a);
                                    }
                                    r27 = 0u;
                                    f3 = (f64)(f32)px_fdiv(f29, (f64)rdf32(0x805707e0u));
                                    f2 = (f64)rdf32(0x817fdf54u);
                                    f0 = (f64)rdf32(0x817fdf5cu);
                                    wrf32d(0x817fdf4cu, (f64)rdf32(0x817fdf58u));
                                    wrf32d(0x817fdf80u, f31);
                                    wrf32d(0x817fdf7cu, f31);
                                    f3 = (f64)(f32)(f30 + f3);
                                    wrf32d(0x817fdf78u, f31);
                                    wrf32d(0x817fdf48u, f2);
                                    wrf32d(0x817fdf50u, f0);
                                    wrf64(0x817fdfa8u, px_ctiw(f3, ppc_fctiwz(f3)));
                                    r26 = rd32(0x817fdfacu);
                                    r28 = r26 - 1u;
                                    for (;;) {
                                        if ((s32)r27 >= (s32)r26) {
                                            r3 = 0u;
                                            break;
                                        }
                                        r5 = rd32(0x817fdf70u);
                                        r0 = rd32(0x817fdf74u);
                                        f1 = (f64)rdf32(0x805707e0u);
                                        wr32(0x817fdf9cu, rd32(0x817fdf6cu));
                                        wr32(0x817fdfa0u, r5);
                                        wr32(0x817fdfa4u, r0);
                                        a.f[0] = f1;
                                        a.r[0] = 0x817fdf9cu;
                                        a.r[1] = 0x817fdf9cu;
                                        (void)tc_call(0x802343c8u, &a);
                                        r6 = rd32(0x817fdf4cu);
                                        r0 = rd32(0x817fdf50u);
                                        wr32(0x817fdf90u, rd32(0x817fdf48u));
                                        wr32(0x817fdf94u, r6);
                                        wr32(0x817fdf98u, r0);
                                        a.r[0] = 0x817fdf90u;
                                        a.r[1] = 0x817fdf9cu;
                                        a.r[2] = 0x817fdf90u;
                                        (void)tc_call(0x80234380u, &a);
                                        f2 = (f64)rdf32(0x817fdf90u);
                                        f1 = (f64)rdf32(0x817fdf94u);
                                        f0 = (f64)rdf32(0x817fdf98u);
                                        wrf32d(0x817fdf78u, f2);
                                        wrf32d(0x817fdf7cu, f1);
                                        wrf32d(0x817fdf80u, f0);
                                        if (r27 == r28) {
                                            a.r[0] = 0x817fdf78u;
                                            f1 = tc_callf(0x8010fc28u, &a);
                                            f2 = 0.0;
                                        }
                                        a.r[0] = r31;
                                        a.r[1] = 0x817fdf48u;
                                        a.r[2] = 0x817fdf78u;
                                        a.r[3] = 0u;
                                        a.r[4] = 0u;
                                        a.f[0] = f1;
                                        a.f[1] = f2;
                                        a.f[2] = 0.0;
                                        r3 = tc_call(rd32(rd32(r31 + 0x30u) + 0xcu), &a);
                                        if (r3 != 0u) {
                                            r3 = 1u;
                                            break;
                                        }
                                        r27 = r27 + 1u;
                                        f1 = (f64)rdf32(0x817fdf7cu);
                                        f0 = (f64)rdf32(0x817fdf80u);
                                        wrf32d(0x817fdf48u, (f64)rdf32(0x817fdf78u));
                                        wrf32d(0x817fdf4cu, f1);
                                        wrf32d(0x817fdf50u, f0);
                                    }
                                } else {
                                    a.r[0] = r31;
                                    a.r[1] = 0x817fdf54u;
                                    a.r[2] = 0x817fdf48u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    a.f[2] = 0.0;
                                    r3 = tc_call(rd32(rd32(r31 + 0x30u) + 0xcu), &a);
                                }
                            } else {
                                r3 = 0u;
                            }
                        } else if (rd32(r3 + 0x40u) != 0u) {
                            r4 = rd32(r3 + 0x4cu);
                            if (r4 == 0u) {
                                r3 = rd32(r3 + 0x48u);
                                a.r[0] = r3;
                                r3 = tc_call(0x80111d84u, &a);
                            } else if (rd32(r4 + 0x40u) != 0u) {
                                r3 = rd32(r4 + 0x4cu);
                                if (r3 == 0u) {
                                    a.r[0] = rd32(r4 + 0x48u);
                                    r3 = tc_call(0x80111d84u, &a);
                                } else if (rd32(r3 + 0x40u) != 0u) {
                                    r4 = rd32(r3 + 0x4cu);
                                    if (r4 == 0u) {
                                        r3 = rd32(r3 + 0x48u);
                                        a.r[0] = r3;
                                        r3 = tc_call(0x80111d84u, &a);
                                    } else if (rd32(r4 + 0x40u) != 0u) {
                                        r3 = rd32(r4 + 0x4cu);
                                        if (r3 == 0u) {
                                            a.r[0] = rd32(r4 + 0x48u);
                                            r3 = tc_call(0x80111d84u, &a);
                                        } else {
                                            a.r[0] = r3;
                                            r3 = tc_call(0x801119d8u, &a);
                                        }
                                    } else {
                                        r3 = 0u;
                                    }
                                } else {
                                    r3 = 0u;
                                }
                            } else {
                                r3 = 0u;
                            }
                        } else {
                            r3 = 0u;
                        }
                    } else {
                        r3 = 0u;
                    }
                    if (r3 != 0u) {
                        a.r[0] = 2u;
                        a.r[1] = 0x57u;
                        a.r[2] = r29;
                        (void)tc_call(0x800a71acu, &a);
                    }
                }
                r29 = r29 + 1u;
                r30 = r30 + 0x50u;
            } while ((s32)r29 < 96);
        }
    }
    return;
}
