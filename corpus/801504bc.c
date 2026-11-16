#include "tc_rt.h"

u32 fn_801504bc(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    f0 = (f64)rdf32(0x805747e8u);
    wr32(param_1, 0x80366d18u);
    wr32(param_1 + 0x1690u, 0u);
    wr32(param_1 + 0x1698u, 0x26u);
    wr32(param_1 + 0x1694u, 0x80366f70u);
    wr32(param_1 + 0x16a0u, 0x27u);
    wr32(param_1 + 0x169cu, 0x80366f40u);
    wr32(param_1 + 0x16a8u, 0x28u);
    wr32(param_1 + 0x16a4u, 0x80366f10u);
    wrf32d(param_1 + 0x16b8u, f0);
    wrf32d(param_1 + 0x16b4u, f0);
    wrf32d(param_1 + 0x16b0u, f0);
    return param_1;
}
