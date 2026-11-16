#include "tc_rt.h"

s32 fn_8026ed48(u32 param_1, s32 param_2)
{
    u32 c0eq = 0, r4 = 0, r5 = 0;
    r4 = (u32)param_2;
    r5 = param_1;
    while ((u32)rd8(r5) != 0u) {
        c0eq = r4 == 0u;
        r4 = r4 - 1u;
        if (c0eq) break;
        r5 = r5 + 1u;
    }
    return (s32)(r5 - param_1);
}
