#include "tc_rt.h"

void fn_802ff10c(s32 param_1, s32 param_2, s32 param_3)
{
    wr32((u32)param_1 + 0x50u, (u32)param_2);
    wr32((u32)param_1 + 0x54u, (u32)param_2 + (u32)param_3);
    return;
}
