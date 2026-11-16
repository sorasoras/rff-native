#include "tc_rt.h"

void fn_800dd438(f64 param_1, s32 param_2)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_2 + 8u);
    if (param_1 > (f64)rdf32(r3)) {
        wrf32d(r3, param_1);
        return;
    }
    return;
}
