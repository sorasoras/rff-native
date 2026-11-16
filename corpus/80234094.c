#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80234094(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, f64 param_7, f64 param_8, u32 param_9)
{
    f64 f4 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f9 = (f64)rdf32(0x80576b54u);
    f10 = (f64)rdf32(0x80576b50u);
    f4 = (f64)rdf32(0x80576b60u);
    f12 = (f64)(f32)px_fdiv(f10, (f64)(f32)(param_4 - param_3));
    wrf32d(param_9 + 4u, f9);
    wrf32d(param_9 + 8u, f9);
    wrf32d(param_9 + 0x10u, f9);
    wrf32d(param_9 + 0x18u, f9);
    wrf32d(param_9 + 0x20u, f9);
    f11 = (f64)(f32)px_fdiv(f10, (f64)(f32)(param_1 - param_2));
    wrf32d(param_9 + 0x24u, f9);
    wrf32d(param_9 + 0x28u, f9);
    wrf32d(param_9 + 0x2cu, f10);
    wrf32d(param_9, (f64)(f32)((f64)(f32)(f4 * f12) * param_5));
    wrf32d(param_9 + 0xcu, (f64)(f32)(param_7 + (f64)(f32)(param_5 * (f64)(f32)(f12 * -(f64)(f32)(param_4 + param_3)))));
    wrf32d(param_9 + 0x14u, (f64)(f32)((f64)(f32)(f4 * f11) * param_6));
    wrf32d(param_9 + 0x1cu, (f64)(f32)(param_8 + (f64)(f32)(param_6 * (f64)(f32)(f11 * -(f64)(f32)(param_1 + param_2)))));
    return;
}
