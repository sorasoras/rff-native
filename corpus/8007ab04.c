#include "tc_rt.h"

void fn_8007ab04(f64 param_1, f64 param_2, f64 param_3, f64 param_4, s32 param_5)
{
    wrf32d((u32)param_5 + 4u, param_1);
    wrf32d((u32)param_5 + 8u, param_2);
    wrf32d((u32)param_5 + 0x14u, param_3);
    wrf32d((u32)param_5 + 0x10u, param_4);
    wr32((u32)param_5 + 0x20u, 0u);
    wr32((u32)param_5 + 0x24u, 0u);
    wr8((u32)param_5 + 0x2cu, 0xffu);
    return;
}
