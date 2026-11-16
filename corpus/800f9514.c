#include "tc_rt.h"

u32 fn_800f9514(u32 param_1, u32 param_2)
{
    u32 r6 = 0;
    r6 = 0u;
    if (param_1 == 0u || param_2 == 0u) {
        return 0u;
    }
    if ((u32)rd16(param_1) == (u32)rd16(param_2) && (u32)rd8(param_1 + 3u) == (u32)rd8(param_2 + 3u)) {
        r6 = 1u;
    }
    return r6;
}
