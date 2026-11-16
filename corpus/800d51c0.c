#include "tc_rt.h"

u32 fn_800d51c0(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800d5790u, &a);
    if (r3 == 0u) {
        r3 = rd32((u32)param_1 + 0x72cu);
        if ((u32)((s32)((r3 << 3u) & 0xc0000000u) >> 31) != 0u && (u32)((s32)((r3 << 4u) & 0xc0000000u) >> 31) != 0u) {
            r31 = 1u;
        }
    }
    return r31;
}
