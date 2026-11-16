#include "tc_rt.h"

f64 fn_801d4a1c(u32 param_1, u32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = param_1;
    a.r[2] = param_2;
    (void)tc_call(0x801d4994u, &a);
    a.f[0] = (f64)rdf32(0x817fdfe8u);
    a.f[1] = (f64)rdf32(0x817fdff0u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    return f1;
}
