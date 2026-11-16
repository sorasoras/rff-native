#include "tc_rt.h"

u32 fn_801891cc(s32 param_1)
{
    u32 r5 = 0;
    r5 = 0u;
    if ((s32)rd32((u32)param_1 + 0x10u) >= (s32)rd32((u32)param_1 + 4u)) {
        r5 = 1u;
    }
    return r5;
}
