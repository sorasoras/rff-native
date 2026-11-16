#include "tc_rt.h"

u32 fn_8014c024(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8006f1b4u, &a);
    f0 = (f64)rdf32(0x805746e0u);
    wr32(param_1, 0x80365608u);
    wrf32d(param_1 + 0xecu, f0);
    wrf32d(param_1 + 0xe8u, f0);
    wrf32d(param_1 + 0xe4u, f0);
    return param_1;
}
