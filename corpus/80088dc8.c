#include "tc_rt.h"

u32 fn_80088dc8(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    r7 = (u32)param_1;
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    r5 = 0u;
    ctr = 0x28u;
    do {
        if (rd32(r7 + 0x2a74u) == 2u && (u32)param_2 == rd32(r7 + 0x2a78u)) {
            f0 = (f64)rdf32(0x80572908u);
            wrf32d(0x817fdfb0u, f0);
            r31 = (u32)param_1 + (r5 * 0x2cu);
            wrf32d(0x817fdfacu, f0);
            wrf32d(0x817fdfa8u, f0);
            a.r[0] = r31 + 0x2a94u;
            a.r[1] = 0x817fdfa8u;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x817fdfa8u);
            a.f[1] = (f64)rdf32(0x817fdfb0u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            if ((f64)rdf32(0x80572910u) < f1) {
                a.f[0] = (f64)rdf32(0x817fdfa8u);
                a.f[1] = (f64)rdf32(0x817fdfb0u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f31 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
            } else {
                a.f[0] = (f64)rdf32(0x817fdfa8u);
                a.f[1] = (f64)rdf32(0x817fdfb0u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x8057291cu);
                if ((f0 > f1) || (f0 == f1)) {
                    a.f[0] = (f64)rdf32(0x817fdfa8u);
                    a.f[1] = (f64)rdf32(0x817fdfb0u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f31 = (f64)(f32)((f64)rdf32(0x80572918u) + f1);
                } else {
                    a.f[0] = (f64)rdf32(0x817fdfa8u);
                    a.f[1] = (f64)rdf32(0x817fdfb0u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f31 = (f64)(f32)f1;
                }
            }
            f0 = (f64)rdf32(0x80572908u);
            wrf32d(0x817fdfbcu, f0);
            wrf32d(0x817fdfb8u, f0);
            wrf32d(0x817fdfb4u, f0);
            a.r[0] = 0x804890d4u;
            a.r[1] = 0x817fdfb4u;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x817fdfb4u);
            a.f[1] = (f64)rdf32(0x817fdfbcu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            if ((f64)rdf32(0x80572910u) < f1) {
                a.f[0] = (f64)rdf32(0x817fdfb4u);
                a.f[1] = (f64)rdf32(0x817fdfbcu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f3 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
            } else {
                a.f[0] = (f64)rdf32(0x817fdfb4u);
                a.f[1] = (f64)rdf32(0x817fdfbcu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x8057291cu);
                if ((f0 > f1) || (f0 == f1)) {
                    a.f[0] = (f64)rdf32(0x817fdfb4u);
                    a.f[1] = (f64)rdf32(0x817fdfbcu);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f3 = (f64)(f32)((f64)rdf32(0x80572918u) + f1);
                } else {
                    a.f[0] = (f64)rdf32(0x817fdfb4u);
                    a.f[1] = (f64)rdf32(0x817fdfbcu);
                    f1 = tc_callf(0x80262c68u, &a);
                    f3 = (f64)(f32)f1;
                }
            }
            if ((f64)rdf32(0x80572910u) < f31) {
                f0 = (f64)(f32)(f31 - (f64)rdf32(0x80572918u));
            } else {
                f0 = (f64)rdf32(0x8057291cu);
                if ((f0 > f31) || (f0 == f31)) {
                    f0 = (f64)(f32)((f64)rdf32(0x80572918u) + f31);
                } else {
                    f0 = f31;
                }
            }
            f1 = (f64)(f32)(f0 - f3);
            if (f1 > (f64)rdf32(0x80572910u)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
            } else {
                if (f1 < (f64)rdf32(0x8057291cu)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572918u));
                }
            }
            f0 = (f64)rdf32(0x80572910u);
            if (f0 < f1) {
                if (f0 < f31) {
                    f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572918u));
                } else {
                    f0 = (f64)rdf32(0x8057291cu);
                    if ((f0 > f31) || (f0 == f31)) {
                        f31 = (f64)(f32)((f64)rdf32(0x80572918u) + f31);
                    }
                }
                f1 = (f64)(f32)(f31 - f3);
                if (f1 > (f64)rdf32(0x80572910u)) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
                } else {
                    if (f1 < (f64)rdf32(0x8057291cu)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572918u));
                    }
                }
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
            } else {
                if (f0 < f31) {
                    f0 = (f64)(f32)(f31 - (f64)rdf32(0x80572918u));
                } else {
                    f0 = (f64)rdf32(0x8057291cu);
                    if ((f0 > f31) || (f0 == f31)) {
                        f0 = (f64)(f32)((f64)rdf32(0x80572918u) + f31);
                    } else {
                        f0 = f31;
                    }
                }
                f2 = (f64)(f32)(f0 - f3);
                if (f2 > (f64)rdf32(0x80572910u)) {
                    f2 = (f64)(f32)(f2 - (f64)rdf32(0x80572918u));
                } else {
                    if (f2 < (f64)rdf32(0x8057291cu)) {
                        f2 = (f64)(f32)(f2 + (f64)rdf32(0x80572918u));
                    }
                }
                f1 = (f64)rdf32(0x8057291cu);
                if ((f1 > f2) || (f1 == f2)) {
                    if ((f64)rdf32(0x80572910u) < f31) {
                        f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572918u));
                    } else {
                        if ((f1 > f31) || (f1 == f31)) {
                            f31 = (f64)(f32)((f64)rdf32(0x80572918u) + f31);
                        }
                    }
                    f1 = (f64)(f32)(f31 - f3);
                    if (f1 > (f64)rdf32(0x80572910u)) {
                        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
                    } else {
                        if (f1 < (f64)rdf32(0x8057291cu)) {
                            f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572918u));
                        }
                    }
                    f1 = (f64)(f32)((f64)rdf32(0x80572918u) + f1);
                } else {
                    if ((f64)rdf32(0x80572910u) < f31) {
                        f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572918u));
                    } else {
                        if ((f1 > f31) || (f1 == f31)) {
                            f31 = (f64)(f32)((f64)rdf32(0x80572918u) + f31);
                        }
                    }
                    f1 = (f64)(f32)(f31 - f3);
                    if (f1 > (f64)rdf32(0x80572910u)) {
                        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
                    } else {
                        if (f1 < (f64)rdf32(0x8057291cu)) {
                            f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572918u));
                        }
                    }
                }
            }
            wrf32d(param_4, f1);
            r3 = 1u;
            f4 = (f64)rdf32(0x80572934u);
            r5 = rd32(r31 + 0x2a88u);
            r7 = rd32(r31 + 0x2a80u);
            r6 = rd32(r31 + 0x2a84u);
            r4 = rd32(r31 + 0x2a8cu);
            r0 = rd32(r31 + 0x2a90u);
            wr32(0x817fdfccu, rd32(r31 + 0x2a7cu));
            wr32(0x817fdfc0u, r5);
            f5 = (f64)rdf32(0x817fdfccu);
            wr32(0x817fdfd0u, r7);
            f2 = (f64)rdf32(0x817fdfc0u);
            wr32(0x817fdfd4u, r6);
            f1 = (f64)rdf32(0x817fdfd0u);
            f5 = (f64)(f32)(f5 + f2);
            wr32(0x817fdfc4u, r4);
            f3 = (f64)rdf32(0x817fdfd4u);
            wr32(0x817fdfc8u, r0);
            f0 = (f64)(f32)(f4 * (f64)(f32)(f1 + (f64)rdf32(0x817fdfc4u)));
            f1 = (f64)(f32)(f4 * (f64)(f32)(f3 + (f64)rdf32(0x817fdfc8u)));
            wrf32d(param_3, (f64)(f32)(f4 * f5));
            wrf32d(param_3 + 8u, f1);
            wrf32d(param_3 + 4u, f0);
            return r3;
        }
        r7 = r7 + 0x2cu;
        r5 = r5 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = 0u;
    return r3;
}
