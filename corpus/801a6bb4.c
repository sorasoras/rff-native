#include "tc_rt.h"

u32 fn_801a6bb4(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    f4 = (f64)rdf32(0x805759c8u);
    f0 = (f64)rdf32(0x805759d8u);
    wrf32d(param_1 + 0x16d0u, f4);
    f1 = (f64)rdf32(0x805759d4u);
    wrf32d(param_1 + 0x16ccu, f4);
    f2 = (f64)rdf32(0x805759d0u);
    wrf32d(param_1 + 0x16c8u, f4);
    f3 = (f64)rdf32(0x805759ccu);
    wr32(param_1, 0x80371460u);
    wr32(param_1 + 0x1694u, 0x25u);
    wr32(param_1 + 0x1690u, 0x80371688u);
    wr32(param_1 + 0x169cu, 0x24u);
    wr32(param_1 + 0x1698u, 0x80371654u);
    wrf32d(param_1 + 0x16bcu, f4);
    wrf32d(param_1 + 0x16b8u, f4);
    wrf32d(param_1 + 0x16b4u, f4);
    wrf32d(param_1 + 0x16e0u, f4);
    wrf32d(param_1 + 0x16dcu, f4);
    wrf32d(param_1 + 0x16d8u, f4);
    wrf32d(param_1 + 0x16c8u, f3);
    wrf32d(param_1 + 0x16ccu, f2);
    wrf32d(param_1 + 0x16d0u, f1);
    wrf32d(param_1 + 0x16d4u, f0);
    return param_1;
}
