#include "tc_rt.h"

void fn_801005ec(s32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80573cd0u);
    wrf32d((u32)param_1 + 0x20u, f0);
    wr32((u32)param_1 + 0x34u, 0x80360760u);
    wrf32d((u32)param_1 + 0x24u, f0);
    wrf32d((u32)param_1 + 0x28u, f0);
    wrf32d((u32)param_1 + 0x2cu, f0);
    wr32((u32)param_1 + 0x38u, 0u);
    wr32((u32)param_1 + 0x3cu, 0u);
    wr32((u32)param_1 + 0x30u, 0u);
    return;
}
