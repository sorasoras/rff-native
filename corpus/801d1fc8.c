#include "tc_rt.h"

void fn_801d1fc8(s32 param_1)
{
    wr32((u32)param_1 + 0x370u, rd32((u32)param_1 + 0x370u) + 1u);
    return;
}
