#include "tc_rt.h"

void fn_800ab784(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80572bc0u);
    f0 = (f64)rdf32(0x80572bc4u);
    wrf32d(param_1 + 0x7cu, f1);
    wrf32d(param_1 + 0x78u, f1);
    wrf32d(param_1 + 0x74u, f1);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x34u, 1u);
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1 + 0x30u, 0u);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x28u, 0u);
    wr32(param_1 + 0x2cu, 0u);
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0xffffffffu);
    wr32(param_1 + 0x38u, 0u);
    wr32(param_1 + 0x3cu, 6u);
    wr32(param_1 + 0x44u, 0u);
    wr32(param_1 + 0x48u, 0u);
    wr32(param_1 + 0xcu, 3u);
    wr32(param_1 + 0x4cu, 1u);
    wr32(param_1 + 0x40u, 0u);
    wr32(param_1 + 0x50u, 0xffffffffu);
    wrf32d(param_1 + 0x54u, f0);
    wr32(param_1 + 0x58u, 0u);
    wr32(param_1 + 0x5cu, 0u);
    wr32(param_1 + 0x60u, 1u);
    wr32(param_1 + 0x6cu, 0u);
    wr32(param_1 + 0x70u, 0u);
    wr32(param_1 + 0x80u, 0u);
    return;
}
