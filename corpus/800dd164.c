#include "tc_rt.h"

void fn_800dd164(u32 param_r3, u32 param_r4, u32 param_r5, u32 param_r6)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(param_r6);
    a.f[1] = (f64)rdf32(param_r6 + 4u);
    a.f[2] = (f64)rdf32(param_r6 + 8u);
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    (void)tc_call(0x800dd04cu, &a);
    return;
}
