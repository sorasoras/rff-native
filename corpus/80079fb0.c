#include "tc_rt.h"

void fn_80079fb0(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    f3 = (f64)rdf32(0x80572810u);
    f1 = (f64)rdf32(0x80572818u);
    f2 = (f64)rdf32(0x80572814u);
    f0 = (f64)rdf32(0x8057281cu);
    wrf32d((u32)param_1 + 8u, f3);
    wrf32d((u32)param_1 + 4u, f3);
    wrf32d((u32)param_1 + 0xcu, f2);
    wrf32d((u32)param_1 + 0x10u, f1);
    wrf32d((u32)param_1 + 0x14u, f1);
    wr32((u32)param_1 + 0x18u, 0xffffffffu);
    wr32((u32)param_1 + 0x1cu, 0u);
    wr32((u32)param_1 + 0x20u, 7u);
    wr32((u32)param_1 + 0x24u, 1u);
    wr8((u32)param_1 + 0x2cu, 0xffu);
    wr32((u32)param_1 + 0x30u, 0u);
    wr32((u32)param_1 + 0x28u, 0u);
    wr32((u32)param_1 + 0x38u, 0u);
    wr32((u32)param_1 + 0x34u, 0u);
    wrf32d((u32)param_1 + 0x40u, f3);
    wrf32d((u32)param_1 + 0x3cu, f3);
    wrf32d((u32)param_1 + 0x48u, f1);
    wrf32d((u32)param_1 + 0x44u, f1);
    wr8((u32)param_1 + 0x4cu, 0xffu);
    wr8((u32)param_1 + 0x4du, 0xffu);
    wr8((u32)param_1 + 0x4eu, 0xffu);
    wr8((u32)param_1 + 0x4fu, 0xffu);
    wr8((u32)param_1 + 0x50u, 0xffu);
    wr8((u32)param_1 + 0x51u, 0xffu);
    wr8((u32)param_1 + 0x52u, 0xffu);
    wr8((u32)param_1 + 0x53u, 0xffu);
    wr8((u32)param_1 + 0x54u, 0xffu);
    wr8((u32)param_1 + 0x55u, 0xffu);
    wr8((u32)param_1 + 0x56u, 0xffu);
    wr8((u32)param_1 + 0x57u, 0xffu);
    wr8((u32)param_1 + 0x58u, 0xffu);
    wr8((u32)param_1 + 0x59u, 0xffu);
    wr8((u32)param_1 + 0x5au, 0xffu);
    wr8((u32)param_1 + 0x5bu, 0xffu);
    wr32((u32)param_1 + 0x5cu, 0u);
    wr32((u32)param_1 + 0x60u, 1u);
    wrf32d((u32)param_1 + 0x64u, f3);
    wr32((u32)param_1 + 0x68u, 0u);
    wrf32d((u32)param_1 + 0x6cu, f3);
    wrf32d((u32)param_1 + 0x70u, f0);
    return;
}
