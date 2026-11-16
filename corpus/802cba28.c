#include "tc_rt.h"

u32 fn_802cba28(u32 param_1, s32 param_2)
{
    if ((u32)param_2 != 0xffu) {
        return 1u;
    }
    if (param_1 != 0u && (((rd32(param_1) + 0x10000u) != 0xffffu || (rd32(param_1 + 4u) + 0x10000u) != 0xffffu) || ((rd32(param_1 + 8u) + 0x10000u) != 0xffffu || (rd32(param_1 + 0xcu) + 0x10000u) != 0xffffu))) {
        return 1u;
    }
    return 0u;
}
