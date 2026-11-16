#include "tc_rt.h"

u32 fn_80165898(u32 param_1, s32 param_2)
{
    (void)param_1;
    if ((u32)param_2 == 0u) {
        return 7u;
    }
    if ((u32)param_2 == 1u) {
        return 0xau;
    }
    if ((u32)param_2 == 3u) {
        return 2u;
    }
    return (u32)((s32)~(((u32)param_2 - 2u) | (2u - (u32)param_2)) >> 31) & 6u;
}
