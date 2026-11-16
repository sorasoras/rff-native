#include "tc_rt.h"

void fn_8007f8c0(s32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80572860u);
    wrf32d((u32)param_1 + 0x188u, f0);
    wrf32d((u32)param_1 + 0x18cu, f0);
    return;
}
