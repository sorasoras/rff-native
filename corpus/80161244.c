#include "tc_rt.h"

void fn_80161244(s32 param_1)
{
    if (rd32((u32)param_1 + 0x1d8u) == 0u) {
        wr32((u32)param_1 + 0x1d8u, 3u);
        return;
    }
    return;
}
