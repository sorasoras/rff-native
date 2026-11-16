#include "tc_rt.h"

u32 fn_802ace8c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r4 = 0, r6 = 0;
    r4 = param_3 ^ param_2;
    r6 = 0u;
    if ((r4 & 1u) != 0u) {
        r6 = 0x10u;
        if ((param_3 & 1u) != 0u) {
            r6 = 0x810u;
        }
    }
    if ((r4 & 2u) != 0u) {
        r6 = r6 | 8u;
        if ((param_3 & 2u) != 0u) {
            r6 = r6 | 0x400u;
        }
    }
    if ((r4 & 4u) != 0u) {
        r6 = r6 | 0x100u;
    }
    if ((r4 & 8u) != 0u) {
        r6 = r6 | 0x20u;
        if ((param_3 & 8u) != 0u) {
            r6 = r6 | 0x1000u;
        }
    }
    return rd32((u32)param_1 + 0x88u) & r6;
}
