#include "tc_rt.h"

void fn_801f48e4(s32 param_1)
{
    wr32((u32)param_1 + 0x40u, rd32((u32)param_1 + 0x24u));
    return;
}
