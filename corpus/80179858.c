#include "tc_rt.h"

u32 fn_80179858(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8017356cu, &a);
    f0 = (f64)rdf32(0x80574ff0u);
    wr32(param_1, 0x8036f040u);
    wrf32d(param_1 + 0x134u, f0);
    wrf32d(param_1 + 0x130u, f0);
    wrf32d(param_1 + 0x12cu, f0);
    wr32(param_1 + 0x128u, 1u);
    return param_1;
}
