#include "tc_rt.h"

void fn_80115474(s32 param_1, u32 param_2)
{
    wrf32d(param_2, (f64)rdf32((u32)param_1 + 0x34u));
    wrf32d(param_2 + 4u, (f64)rdf32((u32)param_1 + 0x38u));
    wrf32d(param_2 + 8u, (f64)rdf32((u32)param_1 + 0x3cu));
    return;
}
