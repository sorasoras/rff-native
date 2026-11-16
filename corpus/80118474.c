#include "tc_rt.h"

u32 fn_80118474(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800c9dccu, &a);
    f0 = (f64)rdf32(0x80574190u);
    wr32(param_1 + 0x128u, 0u);
    wr32(param_1, 0x803622b0u);
    wrf32d(param_1 + 0x12cu, f0);
    wr32(param_1 + 0x130u, 0u);
    wr32(param_1 + 0x134u, 0u);
    wr32(param_1 + 0x138u, 2u);
    return param_1;
}
