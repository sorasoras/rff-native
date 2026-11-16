#include "tc_rt.h"

u32 fn_801c15a0(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8006f1b4u, &a);
    f0 = (f64)rdf32(0x80575cd8u);
    wr32(param_1, 0x803731b8u);
    wr32(param_1 + 0xe4u, 0u);
    wrf32d(param_1 + 0xe8u, f0);
    wr32(param_1 + 0xfcu, 0xffffffffu);
    return param_1;
}
