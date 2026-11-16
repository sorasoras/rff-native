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

void fn_801a47f8(u32 param_1, s32 param_2)
{
    u32 c0gt = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        if ((u32)param_2 == 1u) {
            if (rd32(param_1 + 0xdc0u) == 0u) {
                a.r[0] = param_1;
                a.r[1] = 4u;
                f1 = tc_callf(0x801a2fdcu, &a);
                r4 = tc_lastr4();
                f0 = (f64)rdf32(rd32(param_1 + 0x70u) + 0x54u);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                r31 = (u32)px_f2b(f0);
                if ((s32)r31 >= 15 && rd32(param_1 + 0xd04u) == 0u) {
                    a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32(param_1 + 0xd74u)), (f64)rdf32(0x805758bcu));
                    a.r[0] = param_1;
                    (void)tc_call(0x801a23d8u, &a);
                    wr32(param_1 + 0xd04u, 1u);
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    a.r[2] = 1u;
                    (void)tc_call(0x8007fa58u, &a);
                    a.r[0] = param_1;
                    a.r[1] = 1u;
                    a.r[2] = 1u;
                    (void)tc_call(0x8007fa58u, &a);
                    a.r[0] = param_1;
                    a.r[1] = 2u;
                    a.r[2] = 1u;
                    f1 = tc_callf(0x8007fa58u, &a);
                    r4 = tc_lastr4();
                }
                if (rd32(param_1 + 0xd04u) == 1u) {
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                    r4 = tc_lastr4();
                    f2 = (f64)rdf32(param_1 + 0x2d8u);
                    if (!((f64)rdf32(0x805758b8u) < f2)) {
                        f0 = (f64)rdf32(0x805758c4u);
                        if ((f0 > f2) || (f0 == f2)) {
                            f2 = (f64)(f32)((f64)rdf32(0x805758c0u) + f2);
                        }
                    } else {
                        f2 = (f64)(f32)(f2 - (f64)rdf32(0x805758c0u));
                    }
                    f1 = (f64)(f32)(f2 - f1);
                    if (!(f1 > (f64)rdf32(0x805758b8u))) {
                        if (f1 < (f64)rdf32(0x805758c4u)) {
                            f1 = (f64)(f32)(f1 + (f64)rdf32(0x805758c0u));
                        }
                    } else {
                        f1 = (f64)(f32)(f1 - (f64)rdf32(0x805758c0u));
                    }
                    if (!((f64)rdf32(0x805758b8u) < f1)) {
                        a.r[0] = param_1;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                        r4 = tc_lastr4();
                        f2 = (f64)rdf32(param_1 + 0x2d8u);
                        if (!((f64)rdf32(0x805758b8u) < f2)) {
                            f0 = (f64)rdf32(0x805758c4u);
                            if ((f0 > f2) || (f0 == f2)) {
                                f2 = (f64)(f32)((f64)rdf32(0x805758c0u) + f2);
                            }
                        } else {
                            f2 = (f64)(f32)(f2 - (f64)rdf32(0x805758c0u));
                        }
                        f1 = (f64)(f32)(f2 - f1);
                        if (!(f1 > (f64)rdf32(0x805758b8u))) {
                            if (f1 < (f64)rdf32(0x805758c4u)) {
                                f1 = (f64)(f32)(f1 + (f64)rdf32(0x805758c0u));
                            }
                        } else {
                            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805758c0u));
                        }
                        f0 = (f64)rdf32(0x805758c4u);
                        if (!((f0 > f1) || (f0 == f1))) {
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.f[0] = f1;
                            a.f[1] = f2;
                            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                            f2 = (f64)rdf32(param_1 + 0x2d8u);
                            if (!((f64)rdf32(0x805758b8u) < f2)) {
                                f0 = (f64)rdf32(0x805758c4u);
                                if ((f0 > f2) || (f0 == f2)) {
                                    f2 = (f64)(f32)((f64)rdf32(0x805758c0u) + f2);
                                }
                            } else {
                                f2 = (f64)(f32)(f2 - (f64)rdf32(0x805758c0u));
                            }
                            f1 = (f64)(f32)(f2 - f1);
                            if (!(f1 > (f64)rdf32(0x805758b8u))) {
                                if (f1 < (f64)rdf32(0x805758c4u)) {
                                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x805758c0u));
                                }
                            } else {
                                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805758c0u));
                            }
                        } else {
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.f[0] = f1;
                            a.f[1] = f2;
                            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                            f2 = (f64)rdf32(param_1 + 0x2d8u);
                            if (!((f64)rdf32(0x805758b8u) < f2)) {
                                f0 = (f64)rdf32(0x805758c4u);
                                if ((f0 > f2) || (f0 == f2)) {
                                    f2 = (f64)(f32)((f64)rdf32(0x805758c0u) + f2);
                                }
                            } else {
                                f2 = (f64)(f32)(f2 - (f64)rdf32(0x805758c0u));
                            }
                            f1 = (f64)(f32)(f2 - f1);
                            if (!(f1 > (f64)rdf32(0x805758b8u))) {
                                if (f1 < (f64)rdf32(0x805758c4u)) {
                                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x805758c0u));
                                }
                            } else {
                                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805758c0u));
                            }
                            f1 = (f64)(f32)((f64)rdf32(0x805758c0u) + f1);
                        }
                    } else {
                        a.r[0] = param_1;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                        f2 = (f64)rdf32(param_1 + 0x2d8u);
                        if (!((f64)rdf32(0x805758b8u) < f2)) {
                            f0 = (f64)rdf32(0x805758c4u);
                            if ((f0 > f2) || (f0 == f2)) {
                                f2 = (f64)(f32)((f64)rdf32(0x805758c0u) + f2);
                            }
                        } else {
                            f2 = (f64)(f32)(f2 - (f64)rdf32(0x805758c0u));
                        }
                        f1 = (f64)(f32)(f2 - f1);
                        if (!(f1 > (f64)rdf32(0x805758b8u))) {
                            if (f1 < (f64)rdf32(0x805758c4u)) {
                                f1 = (f64)(f32)(f1 + (f64)rdf32(0x805758c0u));
                            }
                        } else {
                            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805758c0u));
                        }
                        f1 = (f64)(f32)(f1 - (f64)rdf32(0x805758c0u));
                    }
                    f1 = ppc_fabs(f1);
                    f0 = (f64)rdf32(0x8057590cu);
                    f1 = (f64)(f32)f1;
                    c0gt = f0 > f1;
                    if ((((((f0 < f1) << 0x1fu) | (c0gt << 0x1eu) | ((c0gt || (f0 == f1)) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1du) & 1u) != 0u || (s32)r31 > 30) {
                        wrf32d(param_1 + 0x188u, (f64)rdf32(0x80575868u));
                    } else {
                        a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32(param_1 + 0xd74u)), (f64)rdf32(0x805758bcu));
                        a.r[0] = param_1;
                        (void)tc_call(0x801a23d8u, &a);
                    }
                }
                if ((s32)rd32(param_1 + 0xd00u) >= 1) {
                    f0 = (f64)rdf32(0x80575868u);
                    wr32(param_1 + 0x2b0u, 1u);
                    wrf32d(param_1 + 0x188u, f0);
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x801a2ab8u, &a);
                }
            } else {
                a.r[0] = param_1;
                r3 = tc_call(0x8007ef78u, &a);
                if (r3 != 0u || (s32)rd32(param_1 + 0xd00u) > 1) {
                    wr32(param_1 + 0x2b0u, 1u);
                }
            }
        }
    } else {
        r4 = 0xcu;
        r31 = (ppc_cntlzw(rd32(param_1 + 0xdc0u)) >> 5u) & 0x7ffffffu;
        if (r31 != 0u) {
            r4 = 0x11u;
        }
        if (rd32(param_1 + 0x2bcu) != 2u) {
            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32(param_1 + 0xd24u)), (f64)rdf32(0x805758bcu));
            a.f[1] = (f64)rdf32(0x80575934u);
            a.r[0] = param_1;
            a.r[1] = r4;
            (void)tc_call(0x800a9604u, &a);
        } else if (r31 == 0u) {
            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32(param_1 + 0xd28u)), (f64)rdf32(0x805758bcu));
            a.f[1] = (f64)rdf32(0x80575934u);
            a.r[0] = param_1;
            a.r[1] = r4;
            (void)tc_call(0x800a9564u, &a);
        } else {
            a.f[0] = (f64)rdf32(0x80575934u);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 1u;
            (void)tc_call(0x800a94c0u, &a);
        }
        if (r31 != 0u) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xf98u;
            (void)tc_call(0x8010a74cu, &a);
        }
    }
    return;
}
