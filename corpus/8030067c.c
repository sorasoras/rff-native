#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8030067c(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, u32 param_7, u32 param_8, u32 param_9)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f25 = 0.0, f26 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
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
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, 0.0);
    wrf32d(0x817fdfacu, 0.0);
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, 0.0);
    wrf32d(0x817fdf9cu, 0.0);
    wr32(0x817fdf8cu, 0u);
    wr32(0x817fdf88u, 0u);
    a.f[0] = param_2;
    a.f[1] = param_1;
    a.r[0] = param_7;
    a.r[1] = 0x817fdf7cu;
    a.r[2] = 0x817fdf78u;
    (void)tc_call(0x80300b38u, &a);
    f5 = -param_5;
    f0 = (f64)rdf32(0x817fdf7cu);
    f6 = -param_4;
    if (!(f0 < f5)) {
        f4 = (f64)rdf32(0x8057772cu);
        if (!(f0 < f4)) {
            if (!(f0 < f6)) {
                if (!(f0 < param_4)) {
                    f3 = (f64)rdf32(0x80577738u);
                    if (!(f0 < f3)) {
                        if (!(f0 < param_5)) {
                            f3 = (f64)rdf32(0x80577728u);
                            if (param_5 != f3) {
                                f4 = (f64)(f32)(param_5 - f3);
                                f31 = (f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(f0 * (f64)rdf32(0x805776fcu)), f4) + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(param_5 * (f64)rdf32(0x80577700u)) - f3), f4));
                            } else {
                                f31 = (f64)rdf32(0x80577734u);
                            }
                            f25 = (f64)rdf32(0x805776fcu);
                        } else {
                            f31 = (f64)rdf32(0x805776fcu);
                            if (f3 != param_5) {
                                f4 = (f64)(f32)(f3 - param_5);
                                f25 = (f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(f0 * (f64)rdf32(0x80577730u)), f4) + (f64)(f32)px_fdiv((f64)(f32)(f3 - (f64)(f32)(param_5 * (f64)rdf32(0x80577700u))), f4));
                            } else {
                                f25 = (f64)rdf32(0x80577734u);
                            }
                        }
                    } else {
                        f31 = (f64)rdf32(0x805776fcu);
                        if (param_4 != f3) {
                            f3 = (f64)(f32)(param_4 - f3);
                            f25 = (f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(f0 * (f64)rdf32(0x80577730u)), f3) + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(param_4 * (f64)rdf32(0x80577700u)) - f4), f3));
                        } else {
                            f25 = (f64)rdf32(0x80577724u);
                        }
                    }
                } else {
                    if (f6 != param_4) {
                        f4 = (f64)(f32)(f6 - param_4);
                        f31 = (f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(f0 * (f64)rdf32(0x8057773cu)), f4) + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(f6 * (f64)rdf32(0x805776fcu)) - (f64)(f32)(param_4 * (f64)rdf32(0x80577730u))), f4));
                    } else {
                        f31 = (f64)rdf32(0x80577700u);
                    }
                    f25 = (f64)rdf32(0x80577730u);
                }
            } else {
                f31 = (f64)rdf32(0x80577730u);
                if (f4 != f6) {
                    f4 = (f64)(f32)(f4 - f6);
                    f25 = (f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(f0 * (f64)rdf32(0x805776fcu)), f4) + (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80577738u) - (f64)(f32)(f6 * (f64)rdf32(0x80577700u))), f4));
                } else {
                    f25 = (f64)rdf32(0x80577724u);
                }
            }
        } else {
            f31 = (f64)rdf32(0x80577730u);
            if (f5 != f4) {
                f3 = (f64)(f32)(f5 - f4);
                f25 = (f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(f0 * (f64)rdf32(0x805776fcu)), f3) + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(f5 * (f64)rdf32(0x80577700u)) - f4), f3));
            } else {
                f25 = (f64)rdf32(0x80577734u);
            }
        }
    } else {
        f2 = (f64)rdf32(0x80577720u);
        if (f2 != f5) {
            f4 = (f64)(f32)(f2 - f5);
            f31 = (f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(f0 * (f64)rdf32(0x805776fcu)), f4) + (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80577728u) - (f64)(f32)(f5 * (f64)rdf32(0x80577700u))), f4));
        } else {
            f31 = (f64)rdf32(0x80577724u);
        }
        f25 = (f64)rdf32(0x805776fcu);
    }
    a.f[0] = param_5;
    f1 = tc_callf(0x80262704u, &a);
    f26 = (f64)(f32)f1;
    a.f[0] = param_4;
    f1 = tc_callf(0x80262704u, &a);
    f26 = (f64)(f32)((f64)(f32)((f64)(f32)f1 + f26) * (f64)rdf32(0x80577734u));
    a.f[0] = param_5;
    f1 = tc_callf(0x80262704u, &a);
    f2 = (f64)(f32)f1;
    f31 = (f64)(f32)(f31 * param_3);
    f1 = (f64)rdf32(0x805776fcu);
    f25 = (f64)(f32)(f25 * param_3);
    f2 = -f2;
    f2 = (f64)(f32)(f26 + f2);
    wrf32d(param_8, (f64)(f32)(f31 * (f64)rdf32(0x817fdf78u)));
    f3 = (f64)(f32)px_fdiv(f26, f2);
    f2 = (f64)rdf32(0x817fdf78u);
    f0 = (f64)(f32)(f1 - f2);
    f2 = (f64)(f32)(f25 * f2);
    f0 = (f64)(f32)(f3 * f0);
    f0 = (f64)(f32)(f2 + f0);
    f0 = (f64)(f32)(f1 + f0);
    f0 = (f64)(f32)(param_6 + f0);
    wrf32d(param_9, f0);
    return;
}
