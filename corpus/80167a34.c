#include "tc_rt.h"

u32 fn_80167a34(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    wr32(param_1, 0x8036ab30u);
    wr32(param_1 + 0x1694u, 0x26u);
    wr32(param_1 + 0x1698u, 2u);
    wr32(param_1 + 0x1690u, 0x8036ad6cu);
    wr32(param_1 + 0x16acu, 0x27u);
    wr32(param_1 + 0x16b0u, 3u);
    wr32(param_1 + 0x16a8u, 0x8036ad28u);
    wr32(param_1 + 0x16c4u, 0x28u);
    wr32(param_1 + 0x16c0u, 0x8036adb0u);
    wr32(param_1 + 0x16ccu, 0x29u);
    wr32(param_1 + 0x16c8u, 0x8036ade0u);
    a.r[0] = param_1 + 0x16d0u;
    a.r[1] = param_1;
    (void)tc_call(0x801673b4u, &a);
    wrf32d(param_1 + 0x16f0u, (f64)rdf32(0x80574bfcu));
    return param_1;
}
