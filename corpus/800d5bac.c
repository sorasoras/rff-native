#include "tc_rt.h"

void fn_800d5bac(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0x730u, (((0u - param_2) | param_2) >> 0x1fu) & 1u);
    return;
}
