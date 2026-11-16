#include "tc_rt.h"

void fn_80305a38(u32 param_1)
{
    u32 r7 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80577778u);
    f0 = (f64)rdf32(0x8057777cu);
    wr32(param_1 + 4u, 0u);
    r7 = param_1 + 4u;
    wr32(param_1 + 8u, 0u);
    r8 = param_1 + 0x10u;
    r9 = param_1 + 0x1cu;
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1, 0u);
    wr32(param_1 + 4u, r7);
    wr32(param_1 + 8u, r7);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, r8);
    wr32(param_1 + 0x14u, r8);
    wr32(param_1 + 0x18u, 0u);
    wr32(param_1 + 0x1cu, r9);
    wr32(param_1 + 0x20u, r9);
    wr32(param_1 + 0x24u, 1u);
    wr32(param_1 + 0x28u, 0x7fffffffu);
    wrf32d(param_1 + 0x2cu, f1);
    wrf32d(param_1 + 0x30u, f0);
    wr32(param_1 + 0x34u, 1u);
    wrf32d(param_1 + 0x38u, f1);
    wrf32d(param_1 + 0x4cu, f0);
    wrf32d(param_1 + 0x3cu, f1);
    wrf32d(param_1 + 0x40u, f1);
    wrf32d(param_1 + 0x44u, f1);
    wrf32d(param_1 + 0x48u, f1);
    wrf32d(param_1 + 0x50u, f0);
    wrf32d(param_1 + 0x54u, f0);
    wrf32d(param_1 + 0x58u, f0);
    return;
}
