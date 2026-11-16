#include "tc_rt.h"

u32 fn_80294610(s32 param_1)
{
    if ((u32)param_1 == 0u) {
        wr32(0x8053de20u, 0u);
    } else {
        if (rd32(0x8053de20u) != 0u) {
            return 2u;
        }
        wr32(0x8053de20u, (u32)param_1);
    }
    return 0u;
}
