#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800adb24(f64 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = param_2;
    (void)tc_call(0x800ad9d4u, &a);
    wrf32d(param_2, (f64)(f32)px_fdiv((f64)rdf32(param_3), param_1));
    wrf32d(param_2 + 4u, (f64)(f32)px_fdiv((f64)rdf32(param_3 + 4u), param_1));
    wrf32d(param_2 + 8u, (f64)(f32)px_fdiv((f64)rdf32(param_3 + 8u), param_1));
    wrf32d(param_2 + 0xcu, (f64)(f32)px_fdiv((f64)rdf32(param_3 + 0xcu), param_1));
    return;
}
