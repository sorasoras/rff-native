#include "tc_rt.h"

u32 fn_8015f2b0(s32 param_1, s32 param_2)
{
    u32 r0 = 0;
    r0 = 0x19u;
    if ((u32)param_2 != 0x2e8u) {
        r0 = (u32)rd8((u32)param_1 + ((u32)param_2 * 0x34u) + 0x2864u);
    }
    return r0;
}
