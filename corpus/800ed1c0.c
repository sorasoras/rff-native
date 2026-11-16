#include "tc_rt.h"

u32 fn_800ed1c0(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    f0 = (f64)rdf32(0x80573aa0u);
    wr32(param_1, 0x8035ba80u);
    wrf32d(param_1 + 0x18u, f0);
    wrf32d(param_1 + 0x14u, f0);
    wrf32d(param_1 + 0x10u, f0);
    (void)tc_call(0x800f7080u, &a);
    a.r[0] = param_1 + 0x20u;
    (void)tc_call(0x800eef48u, &a);
    wr32(param_1 + 0xcu, 0u);
    return param_1;
}
