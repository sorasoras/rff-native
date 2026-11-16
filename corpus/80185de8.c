#include "tc_rt.h"

u32 fn_80185de8(u32 param_1, s32 param_2)
{
    u32 r0 = 0;
    (void)param_1;
    r0 = 0u;
    if (param_2 >= 647 && param_2 <= 669) {
        r0 = 1u;
    }
    if ((r0 != 0u || ((u32)param_2 - 0x295u) <= 2u) || (u32)param_2 == 0x2e8u) {
        return 1u;
    }
    return 0u;
}
