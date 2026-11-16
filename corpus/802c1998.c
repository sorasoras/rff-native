#include "tc_rt.h"

u32 fn_802c1998(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    r3 = (u32)param_1 + ((u32)param_2 * 0x68u);
    if (rd32(r3 + 0x50u) != 0u && (u32)param_3 == rd32(r3 + 0x58u)) {
        return 1u;
    }
    return 0u;
}
