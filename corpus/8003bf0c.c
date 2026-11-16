#include "tc_rt.h"

void fn_8003bf0c(s32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80571f68u);
    wr32((u32)param_1 + 0xcu, 0u);
    wrf32d((u32)param_1 + 4u, f0);
    wrf32d((u32)param_1 + 8u, f0);
    wrf32d((u32)param_1 + 0x14u, f0);
    wrf32d((u32)param_1 + 0x18u, f0);
    wr32((u32)param_1 + 0x1cu, 0u);
    wrf32d((u32)param_1 + 0x24u, f0);
    wrf32d((u32)param_1 + 0x28u, f0);
    wr32((u32)param_1 + 0x2cu, 0u);
    wrf32d((u32)param_1 + 0x34u, f0);
    wrf32d((u32)param_1 + 0x38u, f0);
    wr32((u32)param_1 + 0x3cu, 0u);
    return;
}
