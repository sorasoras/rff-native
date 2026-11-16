#include "tc_rt.h"

u32 fn_801cb4e0(u32 param_1, s32 param_2)
{
    (void)param_1;
    if (((u32)param_2 - 0x19u) <= 1u) {
        return 0xdcfu;
    }
    if (param_2 >= 46) {
        if (param_2 > 52) {
            return 0xffffffffu;
        }
        return 0xdd0u;
    }
    return 0xffffffffu;
}
