#include "tc_rt.h"

u32 fn_800f1ee0(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80083d34u, &a);
    f0 = (f64)rdf32(0x80573b50u);
    wr32(param_1, 0x8035bad8u);
    wr32(param_1 + 0xb0u, 0u);
    wrf32d(param_1 + 0xb4u, f0);
    wrf32d(param_1 + 0xb8u, f0);
    wr32(param_1 + 0xacu, 4u);
    return param_1;
}
