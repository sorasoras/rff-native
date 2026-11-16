#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8030cff8(f64 param_1, f64 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    (void)param_3;
    f0 = ppc_fabs(param_1);
    f4 = (f64)(f32)(param_2 - (f64)rdf32(0x805777b8u));
    f2 = ppc_fabs(f4);
    if ((f0 < f2) || (f0 == f2)) {
        f0 = (f64)rdf32(0x805777bcu);
        if ((f4 < f0) || (f4 == f0)) {
            f0 = (f64)rdf32(0x805777c0u);
            f2 = (f64)(f32)((f64)rdf32(0x805777c4u) * f4);
            wrf32d(param_4, param_1);
            f0 = (f64)(f32)(f0 + f2);
            wrf32d(param_5, f0);
            wrf32d(param_5, (f64)(f32)((f64)rdf32(param_5) + (f64)rdf32(0x805777b8u)));
            return;
        }
        f0 = (f64)(f32)((f64)rdf32(0x805777c0u) + (f64)(f32)((f64)rdf32(0x805777ccu) * f4));
        wrf32d(param_4, (f64)(f32)((f64)rdf32(0x805777c8u) * param_1));
        wrf32d(param_5, f0);
    } else {
        f2 = (f64)rdf32(0x805777bcu);
        if ((param_1 > f2) || (param_1 == f2)) {
            if ((f4 < f2) || (f4 == f2)) {
                f5 = -f4;
                f4 = (f64)(f32)((f64)rdf32(0x805777d8u) * f4);
                f3 = (f64)(f32)((f64)(f32)((f64)rdf32(0x805777d0u) + (f64)(f32)((f64)rdf32(0x805777d4u) * (f64)(f32)px_fdiv(f5, param_1))) * f0);
                f0 = (f64)(f32)((f64)rdf32(0x805777c0u) + (f64)(f32)(f4 + (f64)(f32)((f64)rdf32(0x805777c4u) * param_1)));
                wrf32d(param_4, f3);
                wrf32d(param_5, f0);
                wrf32d(param_5, (f64)(f32)((f64)rdf32(param_5) + (f64)rdf32(0x805777b8u)));
                return;
            }
            f1 = (f64)(f32)((f64)rdf32(0x805777c0u) + (f64)(f32)((f64)rdf32(0x805777ccu) * param_1));
            f0 = (f64)(f32)((f64)(f32)((f64)rdf32(0x805777d0u) + (f64)(f32)((f64)rdf32(0x805777dcu) * (f64)(f32)px_fdiv(-f4, param_1))) * f0);
            wrf32d(param_4, f0);
            wrf32d(param_5, f1);
        } else {
            if ((f4 < f2) || (f4 == f2)) {
                f5 = -f4;
                f4 = (f64)(f32)((f64)rdf32(0x805777d8u) * f4);
                f3 = (f64)(f32)((f64)(f32)((f64)(f32)((f64)rdf32(0x805777d4u) * (f64)(f32)px_fdiv(f5, param_1)) - (f64)rdf32(0x805777d0u)) * f0);
                f0 = (f64)(f32)((f64)rdf32(0x805777c0u) + (f64)(f32)(f4 - (f64)(f32)((f64)rdf32(0x805777ccu) * param_1)));
                wrf32d(param_4, f3);
                wrf32d(param_5, f0);
            } else {
                f1 = (f64)(f32)((f64)rdf32(0x805777c0u) + (f64)(f32)((f64)rdf32(0x805777ccu) * -param_1));
                f0 = (f64)(f32)((f64)(f32)((f64)(f32)((f64)rdf32(0x805777dcu) * (f64)(f32)px_fdiv(-f4, param_1)) - (f64)rdf32(0x805777d0u)) * f0);
                wrf32d(param_4, f0);
                wrf32d(param_5, f1);
            }
        }
    }
    wrf32d(param_5, (f64)(f32)((f64)rdf32(param_5) + (f64)rdf32(0x805777b8u)));
    return;
}
