#include "tc_rt.h"

void fn_800555dc(f64 param_1, f64 param_2, f64 param_3, s32 param_4)
{
    wrf32d((u32)param_4 + 0x84u, param_1);
    wrf32d((u32)param_4 + 0x88u, param_2);
    wrf32d((u32)param_4 + 0x8cu, param_3);
    return;
}
