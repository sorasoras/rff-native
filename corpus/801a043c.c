#include "tc_rt.h"

u32 fn_801a043c(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r4 = 0;
    (void)param_1;
    r4 = rd32((u32)param_2 + 0x30u);
    if ((r4 & 0x8000u) != 0u) {
        if ((r4 & 0x100000u) != 0u) {
            return 0x6au;
        }
        if ((r4 & 0x200000u) != 0u) {
            return 0x6bu;
        }
        if ((r4 & 0x400000u) != 0u) {
            return 0x6cu;
        }
        if ((r4 & 0x800000u) == 0u) {
            return 6u;
        }
        return 0x6du;
    }
    if ((r4 & 0x2000u) != 0u) {
        if ((u32)param_3 == 0u) {
            return 8u;
        }
        return 9u;
    }
    if ((r4 & 0xc00u) == 0u) {
        return 6u;
    }
    if ((u32)param_3 == 0u) {
        return 6u;
    }
    return 7u;
}
