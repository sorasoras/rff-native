#include "tc_rt.h"

void fn_8008047c(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0x1d8u);
    wr32((u32)param_1 + 0x1d4u, param_2);
    if (r0 > param_2) {
        wr32((u32)param_1 + 0x1d8u, param_2);
        return;
    }
    return;
}
