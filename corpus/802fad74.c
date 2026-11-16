#include "tc_rt.h"

void fn_802fad74(s32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80577660u);
    wr32((u32)param_1 + 0x10u, 0u);
    wrf32d((u32)param_1 + 0x14u, f0);
    return;
}
