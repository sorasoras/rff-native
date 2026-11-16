#include "tc_rt.h"

u32 fn_8014f344(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x805747acu);
    r0 = rd32((u32)param_1 + 0x74u) & 0xfbffffffu;
    wr32((u32)param_1 + 0x148u, 0u);
    wr32((u32)param_1 + 0x74u, r0);
    wrf32d((u32)param_1 + 0x154u, f0);
    return 0u;
}
