#include "tc_rt.h"

void fn_801b9aec(s32 param_1)
{
    wr32((u32)param_1 + 0x34u, rd32((u32)param_1 + 0x2cu));
    return;
}
