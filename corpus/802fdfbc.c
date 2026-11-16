#include "tc_rt.h"

u32 fn_802fdfbc(s32 param_1, s32 param_2)
{
    if (param_2 < 16) {
        return (u32)param_1 + (((u32)param_2 << 1u) & 0xfffffffeu) + 0x15cu;
    }
    if (param_2 < 32) {
        return ((((u32)param_2 - 0x10u) << 1u) & 0xfffffffeu) - 0x7fab7938u;
    }
    return 0u;
}
