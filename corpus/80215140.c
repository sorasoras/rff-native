#include "tc_rt.h"

u32 fn_80215140(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    r4 = 1u;
    r0 = 1u;
    r3 = rd32(rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x60u) + 0x6cu);
    if (r3 != 2u && r3 != 1u) {
        r0 = 0u;
    }
    if (r0 == 0u && r3 != 3u) {
        r4 = 0u;
    }
    return r4;
}
