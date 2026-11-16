#include "tc_rt.h"

void fn_802fdbf4(s32 param_1, u32 param_2, u32 param_3)
{
    wr32((u32)param_1 + 0x114u, param_2);
    wr32((u32)param_1 + 0x118u, param_3);
    return;
}
