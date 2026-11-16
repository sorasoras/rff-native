#include "tc_rt.h"

void fn_802dc4d4(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + 0x68u, ((u32)param_2 << 0x10u) & 0xffff0000u);
    return;
}
