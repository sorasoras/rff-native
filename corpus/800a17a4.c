#include "tc_rt.h"

u32 fn_800a17a4(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8006f1b4u, &a);
    f0 = (f64)rdf32(0x80572ab0u);
    wrf32d(param_1 + 0xecu, f0);
    wrf32d(param_1 + 0xe8u, f0);
    wrf32d(param_1 + 0xe4u, f0);
    wrf32d(param_1 + 0xf8u, f0);
    wrf32d(param_1 + 0xf4u, f0);
    wrf32d(param_1 + 0xf0u, f0);
    wr32(param_1, 0x80351a98u);
    wrf32d(param_1 + 0x104u, f0);
    wrf32d(param_1 + 0x100u, f0);
    wrf32d(param_1 + 0xfcu, f0);
    wrf32d(param_1 + 0x110u, f0);
    wrf32d(param_1 + 0x10cu, f0);
    wrf32d(param_1 + 0x108u, f0);
    wrf32d(param_1 + 0x128u, f0);
    wrf32d(param_1 + 0x124u, f0);
    wrf32d(param_1 + 0x120u, f0);
    wr32(param_1 + 0x130u, 0u);
    wr32(param_1 + 0x134u, 0u);
    return param_1;
}
