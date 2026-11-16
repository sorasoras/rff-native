#include "tc_rt.h"

void fn_8007f030(s32 param_1)
{
    wr32((u32)param_1 + 0x1f8u, 1u);
    return;
}
