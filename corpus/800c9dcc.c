#include "tc_rt.h"

u32 fn_800c9dcc(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800f3d44u, &a);
    f0 = (f64)rdf32(0x80572f50u);
    wr32(param_1 + 0x128u, 0u);
    wr32(param_1, 0x80355680u);
    wrf32d(param_1 + 0x12cu, f0);
    wr32(param_1 + 0x130u, 0u);
    wr32(param_1 + 0x134u, 0u);
    wr32(param_1 + 0x138u, 2u);
    wr32(param_1 + 0x140u, 0u);
    wr32(param_1 + 0x13cu, 0u);
    return param_1;
}
