#include "tc_rt.h"

void fn_801f4770(s32 param_1)
{
    wr32((u32)param_1 + 0x40u, rd32(rd32((u32)param_1 + 0x40u)));
    return;
}
