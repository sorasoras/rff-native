#include "tc_rt.h"

void fn_80126cd8(s32 param_1)
{
    wr32(rd32((u32)param_1 + 0x1cu) + 0x434u, 1u);
    return;
}
