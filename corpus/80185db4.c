#include "tc_rt.h"

u32 fn_80185db4(u32 param_1, s32 param_2)
{
    u32 r0 = 0;
    (void)param_1;
    r0 = 0u;
    if (param_2 >= 683 && param_2 <= 702) {
        r0 = 1u;
    }
    if (r0 != 0u || (u32)param_2 == 0x2e8u) {
        return 1u;
    }
    return 0u;
}
