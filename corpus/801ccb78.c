#include "tc_rt.h"

void fn_801ccb78(s32 param_1)
{
    wr32((u32)param_1 + 0xd24u, rd32((u32)param_1 + 0xd24u) + 1u);
    return;
}
