#include "tc_rt.h"

u32 fn_8018ae74(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    r4 = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x3fcu);
    r3 = rd32(r4 + 0x80u);
    if ((u32)((s32)r3 >> 31) != 0u) {
        wr32(r4 + 0x80u, r3 | 0x40000000u);
        return 1u;
    }
    return 0u;
}
