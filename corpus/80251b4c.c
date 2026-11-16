#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80251b4c(f64 param_1, f64 param_2, f64 param_3, s32 param_4)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = -param_1;
    f30 = -param_2;
    f29 = (f64)(f32)((f64)rdf32(0x80576cc4u) + -param_3);
    f1 = (f64)(f32)((f64)(f32)(f29 * f29) + (f64)(f32)((f64)(f32)(f31 * f31) + (f64)(f32)(f30 * f30)));
    if ((f64)rdf32(0x80576cc0u) != f1) {
        a.f[0] = f1;
        f1 = tc_callf(0x80262ec0u, &a);
        f1 = (f64)(f32)f1;
        f1 = (f64)(f32)px_fdiv((f64)rdf32(0x80576cc4u), f1);
    }
    f0 = (f64)rdf32(0x80576cccu);
    f4 = (f64)(f32)(f30 * f1);
    f3 = (f64)(f32)(f29 * f1);
    f2 = (f64)(f32)(f0 * param_1);
    wrf32d((u32)param_4 + 0x34u, (f64)(f32)(f31 * f1));
    f1 = (f64)(f32)(f0 * param_2);
    f0 = (f64)(f32)(f0 * param_3);
    wrf32d((u32)param_4 + 0x38u, f4);
    wrf32d((u32)param_4 + 0x3cu, f3);
    wrf32d((u32)param_4 + 0x28u, f2);
    wrf32d((u32)param_4 + 0x2cu, f1);
    wrf32d((u32)param_4 + 0x30u, f0);
    return;
}
