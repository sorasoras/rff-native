#include "tc_rt.h"

u32 fn_80146460(s32 param_1)
{
    u32 r4 = 0;
    r4 = 0u;
    if ((rd32((u32)param_1 + 0xa44u) != 0u && (u32)rd8((u32)param_1 + 0xa42u) == 8u) && (rd32(0x80571188u) & 0x100u) == 0u) {
        r4 = 1u;
    }
    return r4;
}
