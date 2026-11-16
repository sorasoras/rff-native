#include "tc_rt.h"

u32 fn_8013f368(s32 param_1)
{
    u32 r5 = 0;
    r5 = 0u;
    if ((s32)rd32(rd32(0x804bead0u) + 8u) <= param_1 && param_1 < (s32)rd32(0x805712b4u)) {
        r5 = 1u;
    }
    return r5;
}
