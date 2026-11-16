#include "tc_rt.h"

void fn_802bed24(s32 param_1)
{
    f64 f0 = 0.0;
    if (rd32((u32)param_1 + 0x18u) == 1u) {
        f0 = (f64)rdf32((u32)param_1 + 4u);
    } else {
        f0 = (f64)rdf32((u32)param_1 + 8u);
    }
    wrf32d((u32)param_1 + 0xcu, f0);
    return;
}
