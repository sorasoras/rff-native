#include "tc_rt.h"

void fn_800d3178(f64 param_1, f64 param_2, s32 param_3)
{
    wrf32d((u32)param_3 + 0x14u, param_1);
    wrf32d((u32)param_3 + 0x18u, param_2);
    return;
}
