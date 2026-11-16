#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

u32 fn_8032b3a8(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x817fdfecu);
    f0 = (f64)px_w2f(ppc_single_bits((f64)(f32)((f64)rdf32((u32)param_1 + 0xb4u) - (f64)rdf32((u32)param_1 + 0xc0u))));
    wrf32d(param_2, (f64)px_w2f(ppc_single_bits((f64)(f32)((f64)rdf32((u32)param_1 + 0xacu) - (f64)rdf32((u32)param_1 + 0xb8u)))));
    wrf32d(param_2 + 4u, f1);
    wrf32d(param_2 + 8u, f0);
    return param_2;
}
