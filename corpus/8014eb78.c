#include "tc_rt.h"

u32 fn_8014eb78(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    f0 = (f64)rdf32(0x805747a0u);
    wr32(param_1 + 0x124u, 0u);
    wr32(param_1, 0x803660c0u);
    wr32(param_1 + 0x120u, 0u);
    wrf32d(param_1 + 0x128u, f0);
    wr32(param_1 + 0x12cu, 0u);
    return param_1;
}
