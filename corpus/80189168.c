#include "tc_rt.h"

u32 fn_80189168(u32 param_1, s32 param_2)
{
    u32 r6 = 0;
    r6 = 0u;
    if ((s32)((u32)param_2 + rd32(param_1 + 4u)) < (s32)rd32(param_1)) {
        r6 = 1u;
    }
    return r6;
}
