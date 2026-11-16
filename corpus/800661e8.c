#include "tc_rt.h"

void fn_800661e8(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(param_2 + 4u);
    f0 = (f64)rdf32(param_2 + 8u);
    wrf32d((u32)param_1 + 0x84u, (f64)rdf32(param_2));
    wrf32d((u32)param_1 + 0x88u, f1);
    wrf32d((u32)param_1 + 0x8cu, f0);
    return;
}
