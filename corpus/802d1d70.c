#include "tc_rt.h"

void fn_802d1d70(s32 param_1, u32 param_2, u32 param_3)
{
    wr8((u32)param_1 + (param_2 & 0xfffffffcu) + (param_2 & 3u) + 0xd4u, (u8)param_3);
    return;
}
