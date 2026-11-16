#include "tc_rt.h"

u32 fn_801a272c(s32 param_1)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0x1bcu);
    if (r0 == 0x6bu) {
        return 2u;
    }
    if (r0 == 0x6eu) {
        return 3u;
    }
    return 1u;
}
