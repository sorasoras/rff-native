#include "tc_rt.h"

void fn_801c1fe8(s32 param_1, u32 param_2)
{
    wrf32d((u32)param_1 + 0x20u, (f64)rdf32(param_2));
    wrf32d((u32)param_1 + 0x24u, (f64)rdf32(param_2 + 4u));
    wrf32d((u32)param_1 + 0x28u, (f64)rdf32(param_2 + 8u));
    return;
}
