#include "tc_rt.h"

u32 fn_800cfe68(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f0 = (f64)rdf32(0x8057307cu);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    wrf32d(0x817fdfd4u, f0);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfd4u;
    r3 = tc_call(0x800cfaa0u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r6 = rd32(0x817fdfd8u);
        r0 = rd32(0x817fdfdcu);
        wr32(0x817fdfc8u, rd32(0x817fdfd4u));
        wr32(0x817fdfccu, r6);
        wr32(0x817fdfd0u, r0);
        a.r[0] = 0x817fdfc8u;
        a.r[1] = param_2;
        a.r[2] = 0x817fdfc8u;
        (void)tc_call(0x802343a4u, &a);
        f0 = (f64)rdf32(0x8057307cu);
        wrf32d(0x817fdfb8u, f0);
        wrf32d(0x817fdfb4u, f0);
        wrf32d(0x817fdfb0u, f0);
        a.r[0] = 0x817fdfc8u;
        a.r[1] = 0x817fdfb0u;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdfb0u);
        a.f[1] = (f64)rdf32(0x817fdfb8u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x80573070u) < f1) {
            a.f[0] = (f64)rdf32(0x817fdfb0u);
            a.f[1] = (f64)rdf32(0x817fdfb8u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f31 = (f64)(f32)(f1 - (f64)rdf32(0x80573074u));
        } else {
            a.f[0] = (f64)rdf32(0x817fdfb0u);
            a.f[1] = (f64)rdf32(0x817fdfb8u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x80573078u);
            if ((f0 > f1) || (f0 == f1)) {
                a.f[0] = (f64)rdf32(0x817fdfb0u);
                a.f[1] = (f64)rdf32(0x817fdfb8u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f31 = (f64)(f32)((f64)rdf32(0x80573074u) + f1);
            } else {
                a.f[0] = (f64)rdf32(0x817fdfb0u);
                a.f[1] = (f64)rdf32(0x817fdfb8u);
                f1 = tc_callf(0x80262c68u, &a);
                f31 = (f64)(f32)f1;
            }
        }
        f0 = (f64)rdf32(0x8057307cu);
        wrf32d(0x817fdfc4u, f0);
        wrf32d(0x817fdfc0u, f0);
        wrf32d(0x817fdfbcu, f0);
        a.r[0] = param_3;
        a.r[1] = 0x817fdfbcu;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdfbcu);
        a.f[1] = (f64)rdf32(0x817fdfc4u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x80573070u) < f1) {
            a.f[0] = (f64)rdf32(0x817fdfbcu);
            a.f[1] = (f64)rdf32(0x817fdfc4u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f3 = (f64)(f32)(f1 - (f64)rdf32(0x80573074u));
        } else {
            a.f[0] = (f64)rdf32(0x817fdfbcu);
            a.f[1] = (f64)rdf32(0x817fdfc4u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x80573078u);
            if ((f0 > f1) || (f0 == f1)) {
                a.f[0] = (f64)rdf32(0x817fdfbcu);
                a.f[1] = (f64)rdf32(0x817fdfc4u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f3 = (f64)(f32)((f64)rdf32(0x80573074u) + f1);
            } else {
                a.f[0] = (f64)rdf32(0x817fdfbcu);
                a.f[1] = (f64)rdf32(0x817fdfc4u);
                f1 = tc_callf(0x80262c68u, &a);
                f3 = (f64)(f32)f1;
            }
        }
        if ((f64)rdf32(0x80573070u) < f31) {
            f0 = (f64)(f32)(f31 - (f64)rdf32(0x80573074u));
        } else {
            f0 = (f64)rdf32(0x80573078u);
            if ((f0 > f31) || (f0 == f31)) {
                f0 = (f64)(f32)((f64)rdf32(0x80573074u) + f31);
            } else {
                f0 = f31;
            }
        }
        f1 = (f64)(f32)(f0 - f3);
        if (f1 > (f64)rdf32(0x80573070u)) {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573074u));
        } else {
            if (f1 < (f64)rdf32(0x80573078u)) {
                f1 = (f64)(f32)(f1 + (f64)rdf32(0x80573074u));
            }
        }
        f0 = (f64)rdf32(0x80573070u);
        if (f0 < f1) {
            if (f0 < f31) {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x80573074u));
            } else {
                f0 = (f64)rdf32(0x80573078u);
                if ((f0 > f31) || (f0 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x80573074u) + f31);
                }
            }
            f1 = (f64)(f32)(f31 - f3);
            if (f1 > (f64)rdf32(0x80573070u)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573074u));
            } else {
                if (f1 < (f64)rdf32(0x80573078u)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x80573074u));
                }
            }
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573074u));
        } else {
            if (f0 < f31) {
                f0 = (f64)(f32)(f31 - (f64)rdf32(0x80573074u));
            } else {
                f0 = (f64)rdf32(0x80573078u);
                if ((f0 > f31) || (f0 == f31)) {
                    f0 = (f64)(f32)((f64)rdf32(0x80573074u) + f31);
                } else {
                    f0 = f31;
                }
            }
            f2 = (f64)(f32)(f0 - f3);
            if (f2 > (f64)rdf32(0x80573070u)) {
                f2 = (f64)(f32)(f2 - (f64)rdf32(0x80573074u));
            } else {
                if (f2 < (f64)rdf32(0x80573078u)) {
                    f2 = (f64)(f32)(f2 + (f64)rdf32(0x80573074u));
                }
            }
            f1 = (f64)rdf32(0x80573078u);
            if ((f1 > f2) || (f1 == f2)) {
                if ((f64)rdf32(0x80573070u) < f31) {
                    f31 = (f64)(f32)(f31 - (f64)rdf32(0x80573074u));
                } else {
                    if ((f1 > f31) || (f1 == f31)) {
                        f31 = (f64)(f32)((f64)rdf32(0x80573074u) + f31);
                    }
                }
                f1 = (f64)(f32)(f31 - f3);
                if (f1 > (f64)rdf32(0x80573070u)) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573074u));
                } else {
                    if (f1 < (f64)rdf32(0x80573078u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x80573074u));
                    }
                }
                f1 = (f64)(f32)((f64)rdf32(0x80573074u) + f1);
            } else {
                if ((f64)rdf32(0x80573070u) < f31) {
                    f31 = (f64)(f32)(f31 - (f64)rdf32(0x80573074u));
                } else {
                    if ((f1 > f31) || (f1 == f31)) {
                        f31 = (f64)(f32)((f64)rdf32(0x80573074u) + f31);
                    }
                }
                f1 = (f64)(f32)(f31 - f3);
                if (f1 > (f64)rdf32(0x80573070u)) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573074u));
                } else {
                    if (f1 < (f64)rdf32(0x80573078u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x80573074u));
                    }
                }
            }
        }
        f1 = ppc_fabs(f1);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x80573080u) < f1) {
            r3 = 0u;
        } else {
            if ((f64)rdf32(0x80573070u) == (f64)rdf32((u32)param_1 + 0x20u)) {
                r3 = 1u;
            } else {
                r6 = rd32(param_2 + 4u);
                r0 = rd32(param_2 + 8u);
                wr32(0x817fdf98u, rd32(param_2));
                wr32(0x817fdf9cu, r6);
                wr32(0x817fdfa0u, r0);
                a.r[0] = 0x817fdf98u;
                a.r[1] = 0x817fdfd4u;
                a.r[2] = 0x817fdf98u;
                (void)tc_call(0x802343a4u, &a);
                f0 = (f64)rdf32(0x8057307cu);
                wrf32d(0x817fdfacu, f0);
                wrf32d(0x817fdfa8u, f0);
                wrf32d(0x817fdfa4u, f0);
                a.r[0] = 0x817fdf98u;
                a.r[1] = 0x817fdfa4u;
                (void)tc_call(0x802343e4u, &a);
                a.f[0] = (f64)rdf32(0x817fdfa4u);
                a.f[1] = (f64)rdf32(0x817fdfacu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                if ((f64)rdf32(0x80573070u) < f1) {
                    a.f[0] = (f64)rdf32(0x817fdfa4u);
                    a.f[1] = (f64)rdf32(0x817fdfacu);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573074u));
                } else {
                    a.f[0] = (f64)rdf32(0x817fdfa4u);
                    a.f[1] = (f64)rdf32(0x817fdfacu);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f0 = (f64)rdf32(0x80573078u);
                    if ((f0 > f1) || (f0 == f1)) {
                        a.f[0] = (f64)rdf32(0x817fdfa4u);
                        a.f[1] = (f64)rdf32(0x817fdfacu);
                        f1 = tc_callf(0x80262c68u, &a);
                        f1 = (f64)(f32)f1;
                        f1 = (f64)(f32)((f64)rdf32(0x80573074u) + f1);
                    } else {
                        a.f[0] = (f64)rdf32(0x817fdfa4u);
                        a.f[1] = (f64)rdf32(0x817fdfacu);
                        f1 = tc_callf(0x80262c68u, &a);
                        f1 = (f64)(f32)f1;
                    }
                }
                f2 = (f64)rdf32((u32)param_1 + 0x1cu);
                if ((f64)rdf32(0x80573070u) < f2) {
                    f2 = (f64)(f32)(f2 - (f64)rdf32(0x80573074u));
                } else {
                    f0 = (f64)rdf32(0x80573078u);
                    if ((f0 > f2) || (f0 == f2)) {
                        f2 = (f64)(f32)((f64)rdf32(0x80573074u) + f2);
                    }
                }
                f1 = (f64)(f32)(f2 - f1);
                if (f1 > (f64)rdf32(0x80573070u)) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573074u));
                } else {
                    if (f1 < (f64)rdf32(0x80573078u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x80573074u));
                    }
                }
                f1 = ppc_fabs(f1);
                f0 = (f64)rdf32((u32)param_1 + 0x20u);
                f1 = (f64)(f32)f1;
                r3 = (ppc_cntlzw(((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
            }
        }
    }
    return r3;
}
