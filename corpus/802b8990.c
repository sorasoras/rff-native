#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802b8990(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32((u32)param_1 + 0x4a4u);
    f0 = (f64)rdf32((u32)param_1 + 0x4a8u);
    f1 = (f64)(f32)(f1 * f1);
    f0 = (f64)(f32)(f0 * f0);
    f30 = (f64)(f32)(f1 + f0);
    a.f[0] = f30;
    f1 = tc_callf(0x80262ec0u, &a);
    f31 = (f64)(f32)f1;
    f29 = -(f64)rdf32((u32)param_1 + 0x4acu);
    a.f[0] = (f64)(f32)(f30 + (f64)(f32)(f29 * f29));
    f1 = tc_callf(0x80262ec0u, &a);
    f5 = (f64)(f32)f1;
    if ((f64)rdf32(0x80577390u) != f5) {
        f1 = (f64)rdf32(0x805773b0u);
        if ((f5 > f1) || (f5 == f1)) {
            return;
        }
        f2 = (f64)(f32)px_fdiv(f31, f5);
        f29 = (f64)(f32)px_fdiv(f29, f5);
        if (f5 > (f64)rdf32(0x805773a4u)) {
            f5 = (f64)(f32)(f1 - f5);
        }
        f3 = (f64)rdf32((u32)param_1 + 0x54u);
        f1 = (f64)rdf32((u32)param_1 + 0x58u);
        f2 = (f64)(f32)(f2 - f3);
        f5 = (f64)(f32)(f5 * (f64)(f32)(f5 * (f64)rdf32(0x80570e9cu)));
        f2 = (f64)(f32)(f5 * f2);
        f31 = (f64)(f32)(f3 + f2);
        f30 = (f64)(f32)(f1 + (f64)(f32)(f5 * (f64)(f32)(f29 - f1)));
        a.f[0] = (f64)(f32)((f64)(f32)(f31 * f31) + (f64)(f32)(f30 * f30));
        f1 = tc_callf(0x80262ec0u, &a);
        f2 = (f64)(f32)f1;
        if ((f64)rdf32(0x80577390u) != f2) {
            wrf32d((u32)param_1 + 0x54u, (f64)(f32)px_fdiv(f31, f2));
            wrf32d((u32)param_1 + 0x58u, (f64)(f32)px_fdiv(f30, f2));
        }
    }
    return;
}
