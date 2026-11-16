#include "tc_rt.h"

u32 fn_801f196c(s32 param_1)
{
    f64 f0 = 0.0;
    if (rd32((u32)param_1 + 0xb0u) != 4u) {
        f0 = (f64)rdf32(0x805765f0u);
        wr32((u32)param_1 + 0xb0u, 1u);
        wrf32d((u32)param_1 + 0xacu, f0);
        return 1u;
    }
    return 0u;
}
