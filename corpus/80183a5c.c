#include "tc_rt.h"

void fn_80183a5c(f64 param_1, f64 param_2, s32 param_3)
{
    wrf32d((u32)param_3 + 0x124u, param_1);
    wrf32d((u32)param_3 + 0x128u, param_2);
    return;
}
