#include "tc_rt.h"

void fn_80080058(s32 param_1)
{
    u32 r4 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    r4 = rd32((u32)param_1 + 0x148u);
    if ((u32)((s32)((r4 << 6u) & 0xc0000000u) >> 31) == 0u) {
        return;
    }
    if ((u32)((s32)r4 >> 31) != 0u) {
        return;
    }
    f2 = (f64)rdf32(0x80572864u);
    f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xd0u) + (f64)rdf32((u32)param_1 + 0x250u));
    if (!(f2 < f0)) {
        f2 = f0;
    }
    r4 = rd32((u32)param_1 + 0x148u);
    wrf32d((u32)param_1 + 0xd0u, f2);
    if ((u32)((s32)((r4 << 7u) & 0xc0000000u) >> 31) != 0u) {
        return;
    }
    wr32((u32)param_1 + 0x148u, r4 & 0xfdffffffu);
    wr32((u32)param_1 + 0xccu, 0u);
    return;
}
