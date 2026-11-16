#include "tc_rt.h"

u32 fn_800d9ce0(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80070a70u, &a);
    f1 = (f64)rdf32(0x805739e8u);
    f0 = (f64)rdf32(0x805739ecu);
    wr32(param_1, 0x80356910u);
    wrf32d(param_1 + 0x88u, f1);
    wrf32d(param_1 + 0x84u, f1);
    wrf32d(param_1 + 0x80u, f1);
    wrf32d(param_1 + 0x94u, f1);
    wrf32d(param_1 + 0x90u, f1);
    wrf32d(param_1 + 0x8cu, f1);
    wrf32d(param_1 + 0xb0u, f0);
    wrf32d(param_1 + 0xc0u, f1);
    wrf32d(param_1 + 0xd0u, f1);
    wrf32d(param_1 + 0xb4u, f1);
    wrf32d(param_1 + 0xc4u, f0);
    wrf32d(param_1 + 0xd4u, f1);
    wrf32d(param_1 + 0xb8u, f1);
    wrf32d(param_1 + 0xc8u, f1);
    wrf32d(param_1 + 0xd8u, f0);
    wrf32d(param_1 + 0xbcu, f1);
    wrf32d(param_1 + 0xccu, f1);
    wrf32d(param_1 + 0xdcu, f1);
    wrf32d(param_1 + 0xe8u, f1);
    wrf32d(param_1 + 0xe4u, f1);
    wrf32d(param_1 + 0xe0u, f1);
    wr32(param_1 + 0xecu, 0u);
    wr32(param_1 + 0x98u, 0u);
    wr32(param_1 + 0xa4u, 0u);
    wr32(param_1 + 0x9cu, 0x40u);
    wr32(param_1 + 0xa0u, 2u);
    wr16(param_1 + 0xf0u, 0xffffu);
    wrf32d(param_1 + 0xa8u, f1);
    wr32(param_1 + 0x78u, 0u);
    wr32(param_1 + 0x7cu, 0x40u);
    wr32(param_1 + 0xf4u, 0xffffffffu);
    wr32(param_1 + 0xf8u, 0x4au);
    wr32(param_1 + 0xfcu, 0u);
    wr32(param_1 + 0x74u, 0u);
    wrf32d(param_1 + 0x110u, f1);
    wrf32d(param_1 + 0x114u, f1);
    wr32(param_1 + 0x118u, 0u);
    wr32(param_1 + 0x11cu, 0u);
    return param_1;
}
