#include "tc_rt.h"

u32 fn_801dca1c(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x805761f0u);
    wr32(param_1, 0u);
    wrf32d(param_1 + 0x10u, f0);
    wrf32d(param_1 + 0xcu, f0);
    wrf32d(param_1 + 8u, f0);
    a.r[0] = param_1;
    (void)tc_call(0x801dca64u, &a);
    return param_1;
}
