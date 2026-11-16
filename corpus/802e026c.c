#include "tc_rt.h"

void fn_802e026c(s32 param_1, u32 param_2)
{
    wr8(rd32((u32)param_1 + 0x14u) + 1u, (u8)param_2);
    return;
}
