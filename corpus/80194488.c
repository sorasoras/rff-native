#include "tc_rt.h"

void fn_80194488(s32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x805753e8u);
    wr32((u32)param_1 + 0x2cu, 0u);
    wr32((u32)param_1 + 0x5cu, 0u);
    wr32((u32)param_1 + 0x8cu, 0u);
    wrf32d((u32)param_1 + 0xa0u, f0);
    wrf32d((u32)param_1 + 0xa4u, f0);
    return;
}
