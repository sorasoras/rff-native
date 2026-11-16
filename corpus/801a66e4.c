#include "tc_rt.h"

u32 fn_801a66e4(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d5c2cu, &a);
    f0 = (f64)rdf32(0x805759a8u);
    wrf32d(param_1 + 0xd8u, f0);
    wr32(param_1, 0x80371400u);
    wrf32d(param_1 + 0xd4u, f0);
    wrf32d(param_1 + 0xd0u, f0);
    wr32(param_1 + 0xb8u, 0u);
    wr32(param_1 + 0xdcu, 0u);
    return param_1;
}
