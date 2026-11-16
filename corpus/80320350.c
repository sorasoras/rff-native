#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80320350(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    f1 = tc_callf(0x80320f2cu, &a);
    f29 = f1;
    if (!(f1 < (f64)rdf32(0x805779d0u))) {
        a.r[0] = param_1;
        a.r[1] = 1u;
        f1 = tc_callf(0x80320f2cu, &a);
        f30 = f1;
        if (!(f1 < (f64)rdf32(0x805779d0u))) {
            a.r[0] = param_1;
            a.r[1] = 2u;
            f1 = tc_callf(0x80320f2cu, &a);
            f31 = f1;
            if (!(f1 < (f64)rdf32(0x805779d0u))) {
                f0 = (f64)rdf32(0x805779c0u);
                f1 = (f64)(f32)px_fdiv(-(f64)rdf32(param_1 + 0x20u), f29);
                if (f1 > f0) {
                    f1 = f0;
                }
                f0 = (f64)rdf32(0x805779c8u);
                if (f1 < f0) {
                    f1 = f0;
                }
                a.f[0] = f1;
                f1 = tc_callf(0x80262c64u, &a);
                f2 = (f64)(f32)f1;
                f1 = (f64)(f32)((f64)rdf32(0x805779b8u) * f2);
                wrf32d(param_2 + 4u, f2);
                a.f[0] = f1;
                f1 = tc_callf(0x802effe0u, &a);
                f0 = (f64)rdf32(0x805779d0u);
                if ((f1 > f0) || (f1 == f0)) {
                    a.f[0] = (f64)(f32)px_fdiv((f64)rdf32(param_1 + 0x24u), f30);
                    a.f[1] = (f64)(f32)px_fdiv((f64)rdf32(param_1 + 0x28u), f31);
                    f1 = tc_callf(0x80262c68u, &a);
                    f0 = (f64)(f32)f1;
                    f2 = (f64)rdf32(param_1);
                    f1 = (f64)rdf32(param_1 + 0x10u);
                    wrf32d(param_2, f0);
                    a.f[0] = f1;
                    a.f[1] = f2;
                    f1 = tc_callf(0x80262c68u, &a);
                    wrf32d(param_2 + 8u, (f64)(f32)f1);
                    return;
                }
                a.f[0] = (f64)rdf32(param_1 + 4u);
                a.f[1] = (f64)rdf32(param_1 + 0x14u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                wrf32d(param_2 + 8u, (f64)rdf32(0x805779bcu));
                wrf32d(param_2, f1);
                return;
            }
        }
    }
    f0 = (f64)rdf32(0x805779bcu);
    wrf32d(param_2, f0);
    wrf32d(param_2 + 4u, f0);
    wrf32d(param_2 + 8u, f0);
    return;
}
