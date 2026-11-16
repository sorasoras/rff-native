#include "tc_rt.h"

void fn_8030fa30(s32 param_1, u32 param_2)
{
    wr8((u32)param_1 + 0xf8u, (u8)param_2);
    return;
}
