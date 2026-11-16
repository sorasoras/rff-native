#include "tc_rt.h"

void fn_802f7168(f64 param_1, s32 param_2)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x805775a8u);
    if (param_1 > f0) {
        wrf32d((u32)param_2 + 0xa4u, f0);
        return;
    }
    f0 = (f64)rdf32(0x805775acu);
    if (param_1 < f0) {
        wrf32d((u32)param_2 + 0xa4u, f0);
        return;
    }
    f0 = param_1;
    wrf32d((u32)param_2 + 0xa4u, f0);
    return;
}
