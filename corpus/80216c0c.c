#include "tc_rt.h"

s32 fn_80216c0c(u32 param_1, s32 param_2)
{
    u32 r0 = 0;
    r0 = rd32(param_1);
    if ((u32)param_2 == r0) {
        return (s32)rd32(param_1 + 4u);
    }
    return (s32)r0;
}
