#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_800cc598(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32((u32)param_1 + 0x48u);
    f30 = (f64)rdf32((u32)param_1 + 0x30u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800cb968u, &a);
    a.r[0] = r3;
    f1 = tc_callf(0x80079d28u, &a);
    f1 = (f64)(f32)(f1 * f31);
    f1 = (f64)(f32)((f64)(f32)px_fdiv(f30, (f64)rdf32(0x80572f80u)) * f1);
    return f1;
}
