#include "tc_rt.h"

u32 fn_8015ff24(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801efc58u, &a);
    f2 = (f64)rdf32(0x80574a78u);
    f1 = (f64)rdf32(0x80574a7cu);
    f0 = (f64)rdf32(0x80574a80u);
    wr32(param_1, 0x80369314u);
    wrf32d(param_1 + 0x174u, f2);
    wrf32d(param_1 + 0x170u, f2);
    wrf32d(param_1 + 0x16cu, f2);
    wrf32d(param_1 + 0x178u, f2);
    wrf32d(param_1 + 0x180u, f2);
    wrf32d(param_1 + 0x184u, f2);
    wrf32d(param_1 + 0x188u, f2);
    wrf32d(param_1 + 0x18cu, f2);
    wrf32d(param_1 + 0x1a4u, f2);
    wrf32d(param_1 + 0x1a0u, f2);
    wrf32d(param_1 + 0x19cu, f2);
    wrf32d(param_1 + 0x1a8u, f1);
    wrf32d(param_1 + 0x1b8u, f2);
    wrf32d(param_1 + 0x1c8u, f2);
    wrf32d(param_1 + 0x1acu, f2);
    wrf32d(param_1 + 0x1bcu, f1);
    wrf32d(param_1 + 0x1ccu, f2);
    wrf32d(param_1 + 0x1b0u, f2);
    wrf32d(param_1 + 0x1c0u, f2);
    wrf32d(param_1 + 0x1d0u, f1);
    wrf32d(param_1 + 0x1b4u, f2);
    wrf32d(param_1 + 0x1c4u, f2);
    wrf32d(param_1 + 0x1d4u, f2);
    wrf32d(param_1 + 0x190u, f2);
    wrf32d(param_1 + 0x194u, f2);
    wrf32d(param_1 + 0x198u, f2);
    wr32(param_1 + 0x1d8u, 8u);
    wr32(param_1 + 0x148u, 0u);
    wr32(param_1 + 0x164u, 0u);
    wr32(param_1 + 0x150u, 0u);
    wr32(param_1 + 0x14cu, 0u);
    wr32(param_1 + 0x140u, 0xfffffu);
    wr32(param_1 + 0x1dcu, 0x1082u);
    wr32(param_1 + 0x1e0u, 0x1au);
    wrf32d(param_1 + 0x1f0u, f0);
    wrf32d(param_1 + 0x1ecu, f2);
    return param_1;
}
