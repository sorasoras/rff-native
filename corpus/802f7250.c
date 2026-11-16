#include "tc_rt.h"

void fn_802f7250(f64 param_1, s32 param_2, s32 param_3)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x805775a8u);
    if (param_1 > f0) {
        wrf32d((u32)param_2 + (((u32)param_3 << 2u) & 0xfffffffcu) + 0xd0u, f0);
        return;
    }
    f0 = (f64)rdf32(0x805775acu);
    if (param_1 < f0) {
        wrf32d((u32)param_2 + (((u32)param_3 << 2u) & 0xfffffffcu) + 0xd0u, f0);
        return;
    }
    f0 = param_1;
    wrf32d((u32)param_2 + (((u32)param_3 << 2u) & 0xfffffffcu) + 0xd0u, f0);
    return;
}
