#include "tc_rt.h"

u32 fn_801c0998(s32 param_1, s32 param_2)
{
    if (param_2 < 0) {
        return rd32((u32)param_1 + 0xbcu);
    }
    if ((u32)param_2 == 8u) {
        return 8u;
    }
    return rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x9cu);
}
