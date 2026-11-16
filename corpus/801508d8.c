#include "tc_rt.h"

void fn_801508d8(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(param_2);
    f1 = (f64)rdf32(param_2 + 4u);
    f0 = (f64)rdf32(param_2 + 8u);
    wr32((u32)param_1 + 8u, 0u);
    wrf32d((u32)param_1 + 0xcu, f2);
    wrf32d((u32)param_1 + 0x10u, f1);
    wrf32d((u32)param_1 + 0x14u, f0);
    return;
}
