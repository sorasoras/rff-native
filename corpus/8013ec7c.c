#include "tc_rt.h"

s32 fn_8013ec7c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    r3 = (u32)param_1 + (((u32)param_2 << 5u) & 0xffffffe0u);
    if (rd32(r3 + 0x70u) == 0u) {
        return 0;
    }
    r3 = r3 + (((u32)param_3 << 2u) & 0xfffffffcu);
    r3 = rd32(r3 + 0x64u);
    if (r3 == 0u) {
        return 0;
    }
    return (s32)r3;
}
