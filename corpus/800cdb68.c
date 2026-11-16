#include "tc_rt.h"

u32 fn_800cdb68(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8006f1b4u, &a);
    f1 = (f64)rdf32(0x80573028u);
    f0 = (f64)rdf32(0x8057302cu);
    wr32(param_1, 0x803557d0u);
    wrf32d(param_1 + 0xe4u, f1);
    wrf32d(param_1 + 0xecu, f1);
    wrf32d(param_1 + 0xe8u, f0);
    wr32(param_1 + 0xf0u, 0u);
    return param_1;
}
