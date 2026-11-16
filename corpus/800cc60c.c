#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_800cc60c(s32 param_1)
{
    return (f64)(f32)px_fdiv((f64)rdf32((u32)param_1 + 0x30u), (f64)rdf32(0x80572f80u));
}
