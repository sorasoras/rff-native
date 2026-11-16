#include "tc_rt.h"

void fn_80251a34(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, s32 param_7)
{
    wrf32d((u32)param_7 + 0x10u, param_1);
    wrf32d((u32)param_7 + 0x14u, param_2);
    wrf32d((u32)param_7 + 0x18u, param_3);
    wrf32d((u32)param_7 + 0x1cu, param_4);
    wrf32d((u32)param_7 + 0x20u, param_5);
    wrf32d((u32)param_7 + 0x24u, param_6);
    return;
}
