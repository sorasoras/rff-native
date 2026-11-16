#include "tc_rt.h"

u32 fn_8004e7b8(s32 param_1)
{
    u32 r3 = 0;
    if ((u32)rd8((u32)param_1 + 0x10u) == 0u) {
        return 0u;
    }
    r3 = (u32)rd8((u32)param_1 + 5u) + ((u32)rd8((u32)param_1 + 6u) + (u32)rd8((u32)param_1 + 4u));
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
