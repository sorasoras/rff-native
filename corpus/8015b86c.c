#include "tc_rt.h"

u32 fn_8015b86c(s32 param_1)
{
    u32 r3 = 0;
    if ((u32)((s32)((rd32((u32)param_1 + 0x6e0u) << 2u) & 0xc0000000u) >> 31) != 0u) {
        return 1u;
    }
    r3 = (u32)param_1 + 0x6e8u;
    if ((u32)((s32)((rd32(r3 + 0x34u) << 2u) & 0xc0000000u) >> 31) != 0u) {
        return 1u;
    }
    if ((u32)((s32)((rd32(r3 + 0x70u) << 2u) & 0xc0000000u) >> 31) != 0u) {
        return 1u;
    }
    if ((u32)((s32)((rd32(r3 + 0xacu) << 2u) & 0xc0000000u) >> 31) != 0u) {
        return 1u;
    }
    return 0u;
}
