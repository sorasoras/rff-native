#include "tc_rt.h"

u32 fn_8009abbc(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    r3 = ((((u32)param_2 - 1u) << 0xdu) & 0xffffe000u) + (u32)param_1;
    if ((u32)param_3 != 0u) {
        r3 = r3 | 0x20000u;
        return r3;
    }
    return r3;
}
