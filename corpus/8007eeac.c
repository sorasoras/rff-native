#include "tc_rt.h"

void fn_8007eeac(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    a.f[0] = (f64)(f32)((f64)rdf32(param_3) - (f64)rdf32(param_2));
    a.f[1] = (f64)(f32)((f64)rdf32(param_3 + 8u) - (f64)rdf32(param_2 + 8u));
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    a.f[0] = f1;
    (void)tc_call(0x8007edd4u, &a);
    return;
}
