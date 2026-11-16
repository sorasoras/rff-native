#include "tc_rt.h"

u32 fn_8004c630(s32 param_1)
{
    u32 r3 = 0;
    if (((u32)param_1 + 0x10000u) == 0xffffu) {
        r3 = 0u;
    } else {
        r3 = rd32(0x803c62ccu) + (((u32)param_1 << 3u) & 0xfffffff8u);
    }
    if (r3 != 0u) {
        r3 = rd32(r3);
        return r3;
    }
    return 0u;
}
