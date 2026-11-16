#include "tc_rt.h"

s32 fn_8015a3e4(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0;
    (void)param_1;
    r3 = (u32)(s8)param_3;
    if (r3 == 0u) {
        return (s32)((u32)((s32)((0u - param_2) | param_2) >> 31) + 2u);
    }
    return (s32)r3;
}
