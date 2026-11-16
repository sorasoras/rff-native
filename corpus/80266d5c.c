#include "tc_rt.h"

u32 fn_80266d5c(s32 param_1)
{
    u32 r0 = 0;
    r0 = 0u;
    if (param_1 >= 0 && param_1 < 3) {
        r0 = ((u32)param_1 * 0x890u) - 0x7faff2c0u;
    }
    return r0;
}
