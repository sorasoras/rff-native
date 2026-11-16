#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_801cfe5c(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    r0 = 0xbu;
    f0 = (f64)rdf32(0x80575eacu);
    f2 = (f64)(f32)(f0 * (f64)rdf32((u32)param_1 + 0xdf0u));
    f1 = (f64)rdf32(0x80575ee8u);
    f0 = (f64)(f32)(f0 * (f64)rdf32((u32)param_1 + 0xde4u));
    f3 = (f64)rdf32((u32)param_1 + 0x2dcu);
    f2 = (f64)(f32)px_fdiv(f2, f1);
    f0 = (f64)(f32)px_fdiv(f0, f1);
    f4 = (f64)(f32)(f2 + f0);
    f0 = (f64)(f32)ppc_fabs(f3);
    if (((f0 < f4) || (f0 == f4)) && ((f0 > f2) || (f0 == f2))) {
        f1 = (f64)rdf32((u32)param_1 + 0x2e0u);
        f0 = (f64)rdf32((u32)param_1 + 0xdf8u);
        if ((f1 < f0) || (f1 == f0)) {
            if (f3 < (f64)rdf32(0x80575ea8u)) {
                r0 = 5u;
            } else {
                r0 = 4u;
            }
        }
    }
    return r0;
}
