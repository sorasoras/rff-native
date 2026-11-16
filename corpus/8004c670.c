#include "tc_rt.h"

s32 fn_8004c670(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0;
    if (((u32)param_1 + 0x10000u) == 0xffffu) {
        r5 = 0u;
    } else {
        r5 = rd32(0x803c62ccu) + (((u32)param_1 << 3u) & 0xfffffff8u);
    }
    if (r5 == 0u) {
        return 0;
    }
    r3 = rd32(r5);
    r5 = rd32(r5 + 4u);
    r3 = r5 + (((u32)param_2 - ((u32)ppc_divw(param_2, (s32)r3) * r3)) * 0x48u);
    if (r3 == 0u || rd32(r3 + 0x40u) == 0u) {
        return 0;
    }
    return (s32)r3;
}
