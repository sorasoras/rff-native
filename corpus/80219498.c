#include "tc_rt.h"

void fn_80219498(u32 param_1, u32 param_2)
{
    wr32(param_2, (u32)rd8(param_1));
    wr32(param_2 + 4u, (u32)rd8(param_1 + 1u));
    wr32(param_2 + 8u, (u32)rd8(param_1 + 2u));
    wr32(param_2 + 0x14u, rd32(param_1 + 8u));
    wr32(param_2 + 0x20u, rd32(param_1 + 0x14u));
    wr32(param_2 + 0xcu, (u32)rd8(param_1 + 3u));
    wr32(param_2 + 0x18u, rd32(param_1 + 0xcu));
    wr32(param_2 + 0x24u, rd32(param_1 + 0x18u));
    wr32(param_2 + 0x10u, (u32)rd8(param_1 + 4u));
    wr32(param_2 + 0x1cu, rd32(param_1 + 0x10u));
    wr32(param_2 + 0x28u, rd32(param_1 + 0x1cu));
    wr32(param_2 + 0x2cu, rd32(param_1 + 0x20u));
    wrf32d(param_2 + 0x30u, (f64)rdf32(param_1 + 0x24u));
    wrf32d(param_2 + 0x34u, (f64)rdf32(param_1 + 0x28u));
    wrf32d(param_2 + 0x38u, (f64)rdf32(param_1 + 0x2cu));
    wr32(param_2 + 0x3cu, rd32(param_1 + 0x34u));
    wrf32d(param_2 + 0x40u, (f64)rdf32(param_1 + 0x38u));
    wrf32d(param_2 + 0x44u, (f64)rdf32(param_1 + 0x3cu));
    wrf32d(param_2 + 0x48u, (f64)rdf32(param_1 + 0x40u));
    wr32(param_2 + 0x4cu, rd32(param_1 + 0x44u));
    wr32(param_2 + 0x50u, rd32(param_1 + 0x48u));
    wr32(param_2 + 0x54u, rd32(param_1 + 0x4cu));
    wr32(param_2 + 0x58u, rd32(param_1 + 0x50u));
    wr32(param_2 + 0x5cu, rd32(param_1 + 0x54u));
    return;
}
