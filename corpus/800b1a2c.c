#include "tc_rt.h"

void fn_800b1a2c(s32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80572bf8u);
    wrf32d((u32)param_1 + 0x1618u, f0);
    wrf32d((u32)param_1 + 0x161cu, f0);
    wrf32d((u32)param_1 + 0x1620u, f0);
    wrf32d((u32)param_1 + 0x1624u, f0);
    return;
}
