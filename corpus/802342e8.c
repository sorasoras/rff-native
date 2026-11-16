#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802342e8(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, u32 param_7)
{
    f64 f5 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f8 = (f64)rdf32(0x80576b78u);
    f10 = (f64)rdf32(0x80576b70u);
    f9 = (f64)rdf32(0x80576b74u);
    f12 = (f64)(f32)px_fdiv(f10, (f64)(f32)(param_4 - param_3));
    f5 = (f64)rdf32(0x80576b7cu);
    wrf32d(param_7 + 4u, f8);
    wrf32d(param_7 + 8u, f8);
    wrf32d(param_7 + 0x10u, f8);
    wrf32d(param_7 + 0x18u, f8);
    f11 = (f64)(f32)px_fdiv(f10, (f64)(f32)(param_1 - param_2));
    wrf32d(param_7 + 0x20u, f8);
    wrf32d(param_7 + 0x24u, f8);
    wrf32d(param_7 + 0x30u, f8);
    wrf32d(param_7 + 0x34u, f8);
    wrf32d(param_7 + 0x38u, f8);
    f7 = (f64)(f32)px_fdiv(f10, (f64)(f32)(param_6 - param_5));
    wrf32d(param_7 + 0x3cu, f10);
    wrf32d(param_7, (f64)(f32)(f9 * f12));
    wrf32d(param_7 + 0x2cu, (f64)(f32)(-param_6 * f7));
    wrf32d(param_7 + 0x14u, (f64)(f32)(f9 * f11));
    wrf32d(param_7 + 0xcu, (f64)(f32)(f12 * -(f64)(f32)(param_4 + param_3)));
    wrf32d(param_7 + 0x1cu, (f64)(f32)(f11 * -(f64)(f32)(param_1 + param_2)));
    wrf32d(param_7 + 0x28u, (f64)(f32)(f5 * f7));
    return;
}
