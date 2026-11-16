#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802341fc(f64 param_1, f64 param_2, f64 param_3, f64 param_4, u32 param_5)
{
    f64 f1 = 0.0, f3 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)(f32)((f64)rdf32(0x80576b84u) * (f64)(f32)((f64)rdf32(0x80576b80u) * param_1));
    f1 = tc_callf(0x80262be8u, &a);
    f3 = (f64)rdf32(0x80576b78u);
    f5 = (f64)rdf32(0x80576b70u);
    f6 = (f64)(f32)px_fdiv(f5, (f64)(f32)f1);
    wrf32d(param_5 + 0x38u, (f64)rdf32(0x80576b7cu));
    wrf32d(param_5 + 4u, f3);
    wrf32d(param_5 + 8u, f3);
    wrf32d(param_5 + 0xcu, f3);
    wrf32d(param_5 + 0x10u, f3);
    f5 = (f64)(f32)px_fdiv(f5, (f64)(f32)(param_4 - param_3));
    wrf32d(param_5 + 0x18u, f3);
    wrf32d(param_5 + 0x14u, f6);
    wrf32d(param_5 + 0x1cu, f3);
    wrf32d(param_5 + 0x20u, f3);
    wrf32d(param_5 + 0x24u, f3);
    wrf32d(param_5 + 0x30u, f3);
    wrf32d(param_5 + 0x34u, f3);
    wrf32d(param_5 + 0x3cu, f3);
    wrf32d(param_5, (f64)(f32)px_fdiv(f6, param_2));
    wrf32d(param_5 + 0x2cu, (f64)(f32)(f5 * -(f64)(f32)(param_4 * param_3)));
    wrf32d(param_5 + 0x28u, (f64)(f32)(-param_3 * f5));
    return;
}
