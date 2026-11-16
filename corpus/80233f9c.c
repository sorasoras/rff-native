#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80233f9c(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, u32 param_7)
{
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)(f32)((f64)rdf32(0x80576b68u) * (f64)(f32)((f64)rdf32(0x80576b58u) * param_1));
    f1 = tc_callf(0x80262be8u, &a);
    f3 = (f64)rdf32(0x80576b54u);
    f0 = (f64)rdf32(0x80576b64u);
    f4 = (f64)(f32)px_fdiv((f64)rdf32(0x80576b50u), (f64)(f32)f1);
    wrf32d(param_7 + 0x18u, -param_6);
    wrf32d(param_7 + 0x28u, f0);
    wrf32d(param_7 + 4u, f3);
    wrf32d(param_7 + 8u, -param_5);
    wrf32d(param_7 + 0xcu, f3);
    wrf32d(param_7 + 0x10u, f3);
    wrf32d(param_7 + 0x1cu, f3);
    wrf32d(param_7 + 0x20u, f3);
    wrf32d(param_7 + 0x24u, f3);
    wrf32d(param_7 + 0x2cu, f3);
    wrf32d(param_7, (f64)(f32)(param_3 * (f64)(f32)px_fdiv(f4, param_2)));
    wrf32d(param_7 + 0x14u, (f64)(f32)(f4 * param_4));
    return;
}
