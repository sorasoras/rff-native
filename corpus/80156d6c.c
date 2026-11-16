#include "tc_rt.h"

s32 fn_80156d6c(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 r3 = 0;
    r3 = (((u32)param_1 - (u32)param_3) * 0x3cu) - (u32)param_4 + (u32)param_2;
    if ((s32)r3 < 0) {
        r3 = r3 + 0x5a0u;
        return (s32)r3;
    }
    return (s32)r3;
}
