#include "tc_rt.h"

u32 fn_8007cd58(s32 param_1)
{
    u32 r3 = 0;
    if (((u32)rd16(rd32((u32)param_1 + 0x64u) + 4u) & 1u) != 0u) {
        return 0u;
    }
    if ((u32)rd8((u32)param_1 + 0x36u) == 2u) {
        r3 = rd32((u32)param_1 + 0xc0u);
        if (r3 != 0u) {
            r3 = (u32)rd16(r3 + 2u);
            if ((r3 & 2u) != 0u) {
                return 1u;
            }
            if ((r3 & 1u) != 0u) {
                return 0u;
            }
        }
    }
    return 1u;
}
