#include "tc_rt.h"

u32 fn_80198764(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80083d34u, &a);
    f1 = (f64)rdf32(0x80575638u);
    f0 = (f64)rdf32(0x8057563cu);
    wr32(param_1, 0x80370bc0u);
    wrf32d(param_1 + 0xacu, f1);
    wrf32d(param_1 + 0xb0u, f0);
    wr32(param_1 + 0xb4u, 0x17u);
    return param_1;
}
