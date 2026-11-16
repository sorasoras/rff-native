#include "tc_rt.h"

u32 fn_801c08e0(s32 param_1, s32 param_2)
{
    if ((u32)param_2 == 8u) {
        return rd32((u32)param_1 + 0x4cu);
    }
    return rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x50u);
}
