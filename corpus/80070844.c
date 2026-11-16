#include "tc_rt.h"

void fn_80070844(f64 param_1, f64 param_2, f64 param_3, s32 param_4)
{
    wrf32d((u32)param_4 + 4u, param_1);
    wrf32d((u32)param_4 + 8u, param_2);
    wrf32d((u32)param_4 + 0xcu, param_3);
    return;
}
