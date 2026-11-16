#include "tc_rt.h"

void fn_800cc524(f64 param_1, f64 param_2, f64 param_3, f64 param_4, s32 param_5)
{
    wrf32d((u32)param_5 + 0xcu, param_1);
    wrf32d((u32)param_5 + 0x10u, param_2);
    wrf32d((u32)param_5 + 0x18u, param_1);
    wrf32d((u32)param_5 + 0x1cu, param_2);
    wrf32d((u32)param_5 + 0x34u, param_3);
    wrf32d((u32)param_5 + 0x38u, param_4);
    return;
}
