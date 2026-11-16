#include "tc_rt.h"

void fn_8020f178(s32 param_1, u32 param_2)
{
    if (rd32((u32)param_1 + 8u) == 0x1au) {
        wr32((u32)param_1 + 0x14u, param_2);
        return;
    }
    return;
}
