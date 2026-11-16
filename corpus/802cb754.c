#include "tc_rt.h"

u32 fn_802cb754(s32 param_1)
{
    u32 r4 = 0;
    r4 = 0u;
    if ((u32)rd16((u32)param_1 + 4u) == 0xfeffu && (u32)rd16((u32)param_1 + 6u) == 8u) {
        r4 = 1u;
    }
    return r4;
}
