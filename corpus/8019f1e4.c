#include "tc_rt.h"

u32 fn_8019f1e4(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    f1 = (f64)rdf32(0x805757ecu);
    f2 = (f64)rdf32(0x805757e8u);
    f0 = (f64)rdf32(0x805757f0u);
    wr32(param_1, 0x80370dc0u);
    wr32(param_1 + 0x120u, 4u);
    wrf32d(param_1 + 0x124u, f2);
    wrf32d(param_1 + 0x128u, f1);
    wrf32d(param_1 + 0x12cu, f1);
    wrf32d(param_1 + 0x130u, f0);
    wr32(param_1 + 0x138u, 0u);
    wr32(param_1 + 0x13cu, 0u);
    return param_1;
}
