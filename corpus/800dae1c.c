#include "tc_rt.h"

void fn_800dae1c(s32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80573a10u);
    wrf32d((u32)param_1 + 0x14u, f0);
    wrf32d((u32)param_1 + 0x10u, f0);
    wrf32d((u32)param_1 + 0xcu, f0);
    wrf32d((u32)param_1 + 0x20u, f0);
    wrf32d((u32)param_1 + 0x1cu, f0);
    wrf32d((u32)param_1 + 0x18u, f0);
    return;
}
