#include "tc_rt.h"

void fn_80251b20(f64 param_1, f64 param_2, f64 param_3, s32 param_4)
{
    wrf32d((u32)param_4 + 0x28u, param_1);
    wrf32d((u32)param_4 + 0x2cu, param_2);
    wrf32d((u32)param_4 + 0x30u, param_3);
    return;
}
