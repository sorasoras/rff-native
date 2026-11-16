#include "tc_rt.h"

void fn_80158eb0(f64 param_1, f64 param_2, f64 param_3, s32 param_4)
{
    wrf32d((u32)param_4 + 0x1fcu, param_1);
    wrf32d((u32)param_4 + 0x200u, param_2);
    wrf32d((u32)param_4 + 0x204u, param_3);
    return;
}
