#include "tc_rt.h"

u32 fn_80095ff0(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r5 = 0, r7 = 0;
    f64 f0 = 0.0;
    r7 = ((u32)param_3 << 2u) & 0xfffffffcu;
    f0 = (f64)rdf32(0x80572a38u);
    r5 = (u32)param_1 + ((u32)rd8((u32)param_1 + (((u32)rd8((u32)param_1 + 5u) << 4u) & 0xfffffff0u) + r7 + 0x4du) * 0xcu);
    wrf32d(param_2, (f64)rdf32(r5 + 0x8cu));
    wrf32d(param_2 + 4u, (f64)rdf32(r5 + 0x90u));
    wrf32d(param_2 + 8u, (f64)rdf32(r5 + 0x94u));
    wrf32d(param_2 + 0xcu, f0);
    wr8(param_2 + 0x14u, rd8((u32)param_1 + (((u32)rd8((u32)param_1 + 5u) << 4u) & 0xfffffff0u) + r7 + 0x4eu));
    wr8(param_2 + 0x15u, rd8((u32)param_1 + (((u32)rd8((u32)param_1 + 5u) << 4u) & 0xfffffff0u) + r7 + 0x4fu));
    r3 = rd32(0x805711b8u);
    if (r3 <= 0x5f5e100u) {
        wr32(param_2 + 0x10u, 0x5f5e0ffu);
    } else {
        wr32(param_2 + 0x10u, r3);
    }
    return 1u;
}
