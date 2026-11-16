#include "tc_rt.h"

u32 fn_801555ac(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    r4 = (u32)rd8((u32)param_1 + 1u);
    if (r4 == 0u) {
        return 0u;
    }
    r5 = (u32)rd8((u32)param_1 + 2u);
    if (r5 == 0xfu && (u32)rd8((u32)param_1 + 3u) == 4u) {
        return 1u;
    }
    if ((r4 == 3u && r5 >= 0xeu) && r5 <= 0xfu) {
        return 1u;
    }
    return 0u;
}
