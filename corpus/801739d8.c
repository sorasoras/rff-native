#include "tc_rt.h"

u32 fn_801739d8(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800c9dccu, &a);
    f0 = (f64)rdf32(0x80574e78u);
    wr32(param_1, 0x8036e248u);
    wr32(param_1 + 0x144u, 0u);
    wrf32d(param_1 + 0x148u, f0);
    wrf32d(param_1 + 0x14cu, f0);
    return param_1;
}
