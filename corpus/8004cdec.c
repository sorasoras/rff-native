#include "tc_rt.h"

void fn_8004cdec(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    f5 = (f64)rdf32(0x805721e0u);
    f4 = (f64)rdf32(0x805721e4u);
    f3 = (f64)rdf32(0x805721e8u);
    f2 = (f64)rdf32(0x805721ecu);
    f1 = (f64)rdf32(0x805721f0u);
    f0 = (f64)rdf32(0x805721f4u);
    wr32(param_1, 0u);
    wrf32d(param_1 + 4u, f5);
    wrf32d(param_1 + 8u, f5);
    wrf32d(param_1 + 0xcu, f4);
    wrf32d(param_1 + 0x10u, f5);
    wrf32d(param_1 + 0x14u, f5);
    wrf32d(param_1 + 0x18u, f5);
    wrf32d(param_1 + 0x1cu, f5);
    wrf32d(param_1 + 0x20u, f3);
    wrf32d(param_1 + 0x24u, f5);
    wr16(param_1 + 0xd8u, 0x2000u);
    wr16(param_1 + 0xdau, 0u);
    wrf32d(param_1 + 0xe0u, f2);
    wrf32d(param_1 + 0xe4u, f1);
    wrf32d(param_1 + 0xe8u, f5);
    wrf32d(param_1 + 0xecu, f3);
    wr32(param_1 + 0xf8u, 0u);
    wr16(param_1 + 0xf0u, 0u);
    wr16(param_1 + 0xf2u, 0u);
    wr16(param_1 + 0xf4u, 0x280u);
    wr16(param_1 + 0xf6u, 0x1e0u);
    wrf32d(param_1 + 0xfcu, f4);
    wrf32d(param_1 + 0xdcu, f0);
    a.r[0] = param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8004cfacu, &a);
    return;
}
