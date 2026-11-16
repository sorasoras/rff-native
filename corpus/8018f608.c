#include "tc_rt.h"

u32 fn_8018f608(s32 param_1, s32 param_2)
{
    if ((u32)param_2 == rd32((u32)param_1 + 0x8cu)) {
        return 1u;
    }
    if ((u32)param_2 == 3u) {
        return 2u;
    }
    return (u32)((s32)~(((u32)param_2 - 4u) | (4u - (u32)param_2)) >> 31) & 3u;
}
