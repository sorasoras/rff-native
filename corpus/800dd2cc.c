#include "tc_rt.h"

void fn_800dd2cc(f64 param_1, f64 param_2, s32 param_3)
{
    if (param_1 < (f64)rdf32((u32)param_3 + 0x2cu)) {
        wrf32d((u32)param_3 + 0x2cu, param_1);
    }
    if (param_2 > (f64)rdf32((u32)param_3 + 0x30u)) {
        wrf32d((u32)param_3 + 0x30u, param_2);
        return;
    }
    return;
}
