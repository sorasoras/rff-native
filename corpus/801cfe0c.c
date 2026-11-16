#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_801cfe0c(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    r0 = 0xbu;
    f0 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80575eacu) * (f64)rdf32((u32)param_1 + 0xde0u)), (f64)rdf32(0x80575ee8u));
    f1 = (f64)(f32)ppc_fabs((f64)rdf32((u32)param_1 + 0x2dcu));
    if ((f1 < f0) || (f1 == f0)) {
        f1 = (f64)rdf32((u32)param_1 + 0x2e0u);
        f0 = (f64)rdf32((u32)param_1 + 0xdf4u);
        if ((f1 < f0) || (f1 == f0)) {
            r0 = 2u;
        }
    }
    return r0;
}
