#include "tc_rt.h"

s32 fn_800adf14(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    r3 = (u32)param_1;
    if (param_3 < param_1) {
        r3 = (u32)param_3;
    }
    if (param_2 > (s32)r3) {
        return param_2;
    }
    return (s32)r3;
}
