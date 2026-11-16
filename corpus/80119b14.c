#include "tc_rt.h"

u32 fn_80119b14(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0x18u;
    (void)tc_call(0x8016172cu, &a);
    a.r[0] = param_1 + 0xe8u;
    (void)tc_call(0x80161490u, &a);
    a.r[0] = param_1 + 0x250u;
    (void)tc_call(0x80161490u, &a);
    a.r[0] = param_1 + 0x3bcu;
    (void)tc_call(0x80163efcu, &a);
    f1 = (f64)rdf32(0x805741c8u);
    f0 = (f64)rdf32(0x805741ccu);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1, 0u);
    wr32(param_1 + 0x3ecu, 0u);
    wr32(param_1 + 0x3e8u, 0u);
    wr32(param_1 + 0x3f8u, 0xffffffffu);
    wr32(param_1 + 0x3fcu, 0xffffffffu);
    wr32(param_1 + 0x404u, 0u);
    wr32(param_1 + 0x3dcu, 1u);
    wrf32d(param_1 + 0x3e0u, f1);
    wrf32d(param_1 + 0x3e4u, f0);
    return param_1;
}
