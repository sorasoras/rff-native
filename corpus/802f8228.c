#include "tc_rt.h"

void fn_802f8228(f64 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    wrf32d((u32)param_2 + 0xa0u, param_1);
    wr32((u32)param_2 + 0xa8u, param_3);
    wr8((u32)param_2 + 0x38u, (u8)param_4);
    wr32((u32)param_2 + 0xa4u, 0u);
    return;
}
