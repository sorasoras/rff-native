#include "tc_rt.h"

u32 fn_800f3d44(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80083d34u, &a);
    f1 = (f64)rdf32(0x80573b78u);
    f0 = (f64)rdf32(0x80573b7cu);
    wr32(param_1, 0x8035be58u);
    wrf32d(param_1 + 0xb4u, f1);
    wrf32d(param_1 + 0xb0u, f1);
    wrf32d(param_1 + 0xacu, f1);
    wrf32d(param_1 + 0xc0u, f1);
    wrf32d(param_1 + 0xbcu, f1);
    wrf32d(param_1 + 0xb8u, f1);
    wrf32d(param_1 + 0xdcu, f0);
    wrf32d(param_1 + 0xecu, f1);
    wrf32d(param_1 + 0xfcu, f1);
    wrf32d(param_1 + 0xe0u, f1);
    wrf32d(param_1 + 0xf0u, f0);
    wrf32d(param_1 + 0x100u, f1);
    wrf32d(param_1 + 0xe4u, f1);
    wrf32d(param_1 + 0xf4u, f1);
    wrf32d(param_1 + 0x104u, f0);
    wrf32d(param_1 + 0xe8u, f1);
    wrf32d(param_1 + 0xf8u, f1);
    wrf32d(param_1 + 0x108u, f1);
    wrf32d(param_1 + 0x114u, f1);
    wrf32d(param_1 + 0x110u, f1);
    wrf32d(param_1 + 0x10cu, f1);
    wr32(param_1 + 0x118u, 0u);
    wr32(param_1 + 0xc4u, 0u);
    wr32(param_1 + 0xd0u, 0u);
    wr32(param_1 + 0xc8u, 0x40u);
    wr32(param_1 + 0xccu, 2u);
    wr16(param_1 + 0x11cu, 0xffffu);
    wrf32d(param_1 + 0xd4u, f1);
    wr32(param_1 + 0x120u, 0u);
    wr32(param_1 + 0x124u, 0u);
    return param_1;
}
