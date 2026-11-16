#include "tc_rt.h"

void fn_800d6248(s32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80573194u);
    wr32(rd32((u32)param_1 + 0xa4u) + 0xcu, 0u);
    wrf32d((u32)param_1 + 0x24u, f0);
    wrf32d((u32)param_1 + 0x20u, f0);
    wrf32d((u32)param_1 + 0x1cu, f0);
    wr32((u32)param_1 + 0xa8u, 0u);
    return;
}
