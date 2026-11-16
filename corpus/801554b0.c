#include "tc_rt.h"

u32 fn_801554b0(s32 param_1)
{
    u32 r0 = 0;
    r0 = (u32)rd8((u32)param_1 + 1u);
    if (r0 == 0u) {
        return 0u;
    }
    if (r0 == 3u && (u32)rd8((u32)param_1 + 2u) <= 2u) {
        return 1u;
    }
    return 0u;
}
