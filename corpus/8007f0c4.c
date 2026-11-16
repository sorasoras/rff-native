#include "tc_rt.h"

u32 fn_8007f0c4(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x30u);
    if ((r3 & 0x8000u) != 0u) {
        if ((r3 & 0x100000u) != 0u) {
            return 0x73u;
        }
        if ((r3 & 0x200000u) != 0u) {
            return 0x6bu;
        }
        if ((r3 & 0x400000u) != 0u) {
            return 0x6cu;
        }
        if ((r3 & 0x800000u) == 0u) {
            return 0x6au;
        }
        return 0x6du;
    }
    if ((r3 & 0x400u) != 0u || (r3 & 0x800u) != 0u) {
        if ((u32)param_2 == 0u) {
            return 6u;
        }
        return 7u;
    }
    if ((r3 & 0x2000u) != 0u || (r3 & 0x1000u) != 0u) {
        if ((u32)param_2 == 0u) {
            return 8u;
        }
        return 9u;
    }
    return 6u;
}
