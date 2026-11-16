#include "tc_rt.h"

void fn_801f4730(s32 param_1)
{
    wr32((u32)param_1 + 0x40u, rd32(rd32((u32)param_1 + 0x40u) + 4u));
    return;
}
