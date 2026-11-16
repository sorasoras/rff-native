#include "tc_rt.h"

u32 fn_8015545c(s32 param_1)
{
    u32 r4 = 0;
    r4 = (u32)rd8((u32)param_1 + 1u);
    if (r4 == 0u) {
        return 0u;
    }
    if ((u32)rd8((u32)param_1 + 2u) == 0xfu) {
        return 0u;
    }
    if (((r4 + 0xffu) & 0xffu) <= 1u && (u32)rd8((u32)param_1 + 3u) == 4u) {
        return 1u;
    }
    return 0u;
}
