#include "tc_rt.h"

void fn_802e00cc(s32 param_1, u32 param_2, u32 param_3)
{
    wr32((u32)param_1 + 0x10u, param_2);
    wr32((u32)param_1 + 0x14u, param_3);
    return;
}
