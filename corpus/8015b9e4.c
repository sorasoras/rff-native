#include "tc_rt.h"

void fn_8015b9e4(s32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80574960u);
    wr32((u32)param_1 + 0x7acu, 0u);
    wrf32d((u32)param_1 + 0x7b4u, f0);
    wr32((u32)param_1 + 0x7b0u, 0u);
    return;
}
