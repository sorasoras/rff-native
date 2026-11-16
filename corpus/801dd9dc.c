#include "tc_rt.h"

void fn_801dd9dc(f64 param_1, s32 param_2)
{
    wrf32d((u32)param_2 + 0x14u, (f64)(f32)((f64)rdf32((u32)param_2 + 0x10u) + param_1));
    return;
}
