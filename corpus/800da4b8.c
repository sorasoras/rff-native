#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800da4b8(f64 param_1, s32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)(f32)(param_1 * (f64)rdf32(0x805739fcu));
    f0 = (f64)rdf32((u32)param_2 + 0x10cu);
    wr32((u32)param_2 + 0x74u, rd32((u32)param_2 + 0x74u) | 0x18000000u);
    f0 = (f64)(f32)px_fdiv(f0, f1);
    wrf32d((u32)param_2 + 0x110u, f0);
    return;
}
