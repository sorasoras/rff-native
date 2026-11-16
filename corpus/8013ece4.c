#include "tc_rt.h"

u32 fn_8013ece4(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    r3 = (u32)param_1 + (((u32)param_2 << 5u) & 0xffffffe0u);
    if (rd32(r3 + 0x70u) != 0u) {
        r3 = rd32(r3 + 0x6cu);
        return r3;
    }
    return 0u;
}
