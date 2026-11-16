#include "tc_rt.h"

u32 fn_80155528(u32 param_1)
{
    u32 r0 = 0;
    r0 = (u32)rd8(param_1);
    if (r0 == 1u || r0 == 3u) {
        return 1u;
    }
    return 0u;
}
