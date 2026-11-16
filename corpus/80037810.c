#include "tc_rt.h"

u32 fn_80037810(s32 param_1)
{
    u32 r3 = 0;
    if ((u32)param_1 == 0u) {
        return 0u;
    }
    r3 = rd32((u32)param_1 + 0xcu);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
