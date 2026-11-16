#include "tc_rt.h"

u32 fn_801a10fc(u32 param_1)
{
    u32 r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801e6f24u, &a);
    f0 = (f64)rdf32(0x80575868u);
    r31 = param_1 + 0xdfcu;
    wrf32d(param_1 + 0xd14u, f0);
    wr32(param_1, 0x8037122cu);
    wrf32d(param_1 + 0xd10u, f0);
    wrf32d(param_1 + 0xd0cu, f0);
    wr32(param_1 + 0xd18u, 0x803713f0u);
    wrf32d(param_1 + 0xddcu, f0);
    wrf32d(param_1 + 0xdd8u, f0);
    wrf32d(param_1 + 0xdd4u, f0);
    wrf32d(param_1 + 0xdf0u, f0);
    wrf32d(param_1 + 0xdecu, f0);
    wrf32d(param_1 + 0xde8u, f0);
    a.r[0] = r31;
    (void)tc_call(0x8006f1b4u, &a);
    f4 = (f64)rdf32(0x80575868u);
    f3 = (f64)rdf32(0x8057586cu);
    wrf32d(param_1 + 0xf4cu, f4);
    f0 = (f64)rdf32(0x80575878u);
    wrf32d(param_1 + 0xf48u, f4);
    f1 = (f64)rdf32(0x80575874u);
    wrf32d(param_1 + 0xf44u, f4);
    f2 = (f64)rdf32(0x80575870u);
    wr32(r31, 0x80350198u);
    wr32(param_1 + 0xee4u, 0u);
    wr32(param_1 + 0xdd0u, 0u);
    wrf32d(param_1 + 0xde0u, f4);
    wr32(param_1 + 0xee8u, 0u);
    wr32(param_1 + 0xef0u, 0u);
    wr32(param_1 + 0xef4u, 0u);
    wr32(param_1 + 0xef8u, 0u);
    wr32(param_1 + 0xefcu, 0u);
    wr32(param_1 + 0xf00u, 0u);
    wr32(param_1 + 0xf04u, 0u);
    wrf32d(param_1 + 0xf08u, f3);
    wrf32d(param_1 + 0xf0cu, f3);
    wrf32d(param_1 + 0xf44u, f2);
    wrf32d(param_1 + 0xf48u, f1);
    wrf32d(param_1 + 0xf4cu, f0);
    wr32(param_1 + 0xf38u, 0u);
    wr32(param_1 + 0xf3cu, 3u);
    wr32(param_1 + 0xf68u, 0u);
    return param_1;
}
