#include "tc_rt.h"

void fn_802c0c10(s32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x8034863cu);
    wrf32d((u32)param_1 + 8u, f0);
    wrf32d((u32)param_1 + 0xcu, f0);
    return;
}
