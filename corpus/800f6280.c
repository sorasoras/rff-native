#include "tc_rt.h"

void fn_800f6280(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    wr32((u32)param_1 + 0x12cu, param_3);
    wr32((u32)param_1 + 0x130u, param_4);
    wr32((u32)param_1 + 0x128u, (u32)param_2 * 0x64u);
    return;
}
