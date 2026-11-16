#include "tc_rt.h"

u32 fn_802073f8(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80151428u, &a);
    f0 = (f64)rdf32(0x805766e8u);
    wr32(param_1, 0x80377a68u);
    wr32(param_1 + 0x16b8u, 0u);
    wrf32d(param_1 + 0x16c4u, f0);
    wrf32d(param_1 + 0x16c0u, f0);
    wrf32d(param_1 + 0x16bcu, f0);
    return param_1;
}
