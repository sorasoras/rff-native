#include "tc_rt.h"

u32 fn_801d5f74(u32 param_1)
{
    u32 r3 = 0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x801d55f8u, &a);
    f31 = (f64)rdf32(r3);
    a.r[0] = param_1;
    r3 = tc_call(0x801d55f8u, &a);
    a.f[0] = (f64)rdf32(r3 + 8u);
    a.f[1] = f31;
    a.r[0] = param_1;
    (void)tc_call(0x801d5560u, &a);
    return 1u;
}
