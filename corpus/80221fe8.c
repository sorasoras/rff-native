#include "tc_rt.h"

u32 fn_80221fe8(u32 param_1)
{
    u32 r0 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    f1 = (f64)rdf32(0x80576a50u);
    wr32(param_1, 0x80378f10u);
    r7 = param_1 + 0xcu;
    f0 = (f64)rdf32(0x80576a54u);
    r0 = param_1 + 0x74cu;
    do {
        wrf32d(r7 + 8u, f1);
        wrf32d(r7 + 4u, f1);
        wrf32d(r7, f1);
        wrf32d(r7 + 0x14u, f1);
        wrf32d(r7 + 0x10u, f1);
        wrf32d(r7 + 0xcu, f1);
        wrf32d(r7 + 0x30u, f0);
        wrf32d(r7 + 0x40u, f1);
        wrf32d(r7 + 0x50u, f1);
        wrf32d(r7 + 0x34u, f1);
        wrf32d(r7 + 0x44u, f0);
        wrf32d(r7 + 0x54u, f1);
        wrf32d(r7 + 0x38u, f1);
        wrf32d(r7 + 0x48u, f1);
        wrf32d(r7 + 0x58u, f0);
        wrf32d(r7 + 0x3cu, f1);
        wrf32d(r7 + 0x4cu, f1);
        wrf32d(r7 + 0x5cu, f1);
        wrf32d(r7 + 0x68u, f1);
        wrf32d(r7 + 0x64u, f1);
        wrf32d(r7 + 0x60u, f1);
        wr32(r7 + 0x6cu, 0u);
        wr32(r7 + 0x18u, 0u);
        wr32(r7 + 0x24u, 0u);
        wr32(r7 + 0x1cu, 0x40u);
        wr32(r7 + 0x20u, 2u);
        wr16(r7 + 0x70u, 0xffffu);
        wrf32d(r7 + 0x28u, f1);
        r7 = r7 + 0x74u;
    } while (r7 < r0);
    return param_1;
}
