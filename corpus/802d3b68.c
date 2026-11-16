#include "tc_rt.h"

void fn_802d3b68(s32 param_1, u32 param_2, u32 param_3)
{
    wr8((u32)param_1 + (param_2 & 0xfffffffcu) + (param_2 & 3u) + 0xe4u, (u8)param_3);
    return;
}
