#include "tc_rt.h"

u32 fn_801c79dc(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    f0 = (f64)rdf32(0x80575db8u);
    wrf32d(param_1 + 0x164u, f0);
    wr32(param_1, 0x80373430u);
    wr32(param_1 + 0x134u, 0x803734e8u);
    wrf32d(param_1 + 0x160u, f0);
    wrf32d(param_1 + 0x15cu, f0);
    wr32(param_1 + 0x120u, 0u);
    wr32(param_1 + 0x12cu, 0u);
    wr32(param_1 + 0x158u, 0u);
    wr32(param_1 + 0x16cu, 0u);
    return param_1;
}
