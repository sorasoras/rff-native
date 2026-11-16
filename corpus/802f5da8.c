#include "tc_rt.h"

void fn_802f5da8(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0;
    f0 = (f64)rdf32(0x805775acu);
    f1 = (f64)rdf32(0x805775a8u);
    wr32(param_1, 0x8039d090u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, 0u);
    wrf32d(param_1 + 0x30u, f1);
    wrf32d(param_1 + 0x34u, f1);
    wrf32d(param_1 + 0x38u, f0);
    wrf32d(param_1 + 0x3cu, f0);
    wrf32d(param_1 + 0x40u, f0);
    wrf32d(param_1 + 0x44u, f0);
    wrf32d(param_1 + 0x4cu, f1);
    wrf32d(param_1 + 0x50u, f1);
    wrf32d(param_1 + 0x54u, f0);
    wrf32d(param_1 + 0x58u, f0);
    wrf32d(param_1 + 0x5cu, f0);
    wr32(param_1 + 0x60u, 0u);
    wr32(param_1 + 0x64u, 0u);
    wrf32d(param_1 + 0x68u, f0);
    wrf32d(param_1 + 0x6cu, f0);
    wr32(param_1 + 0x70u, 0u);
    wr32(param_1 + 0x74u, 0u);
    wr32(param_1 + 0x90u, 0xffffffffu);
    wrf32d(param_1 + 0x94u, f0);
    wrf32d(param_1 + 0x98u, f0);
    wr32(param_1 + 0x9cu, 0u);
    wr32(param_1 + 0xa0u, 0u);
    wr32(param_1 + 0xe0u, 0u);
    wr32(param_1 + 0xe4u, 0u);
    wr32(param_1 + 0xe8u, 0u);
    wr32(param_1 + 0xecu, 0u);
    wr32(param_1 + 0xf0u, 0u);
    wr32(param_1 + 0xf4u, 0u);
    wr32(param_1 + 0xf8u, 0u);
    wr32(param_1 + 0xfcu, 0u);
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x28u, 0u);
    wr32(param_1 + 0x2cu, 0u);
    wr8(param_1 + 0x8du, 1u);
    wr8(param_1 + 0x8cu, (u8)param_2);
    wr32(param_1 + 0x48u, param_3);
    return;
}
