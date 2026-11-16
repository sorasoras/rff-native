#include "tc_rt.h"

s32 fn_8007f69c(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 0x1d8u);
    r0 = param_2;
    if (r5 > param_2) {
        r0 = r5;
    }
    r0 = r0 - param_2;
    wr32((u32)param_1 + 0x1d8u, r0);
    return (s32)r0;
}
