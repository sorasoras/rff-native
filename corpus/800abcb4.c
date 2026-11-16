#include "tc_rt.h"

void fn_800abcb4(s32 param_1)
{
    wr32((u32)param_1 + 0x44u, 0u);
    wr32((u32)param_1 + 0x40u, 1u);
    return;
}
