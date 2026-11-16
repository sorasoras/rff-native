#include "tc_rt.h"

u32 fn_8017ad98(u32 param_1, s32 param_2)
{
    u32 c0eq = 0, r0 = 0, r5 = 0, r6 = 0;
    r0 = (u32)rd8(param_1 + 2u);
    r5 = r0 - (u32)param_2;
    r6 = (u32)param_2 - r0;
    r5 = r5 & ~(u32)((s32)r5 >> 31);
    c0eq = (r5 & 0xffu) == 0u;
    wr8(param_1 + 2u, (u8)r5);
    r5 = r6 & ~(u32)((s32)r6 >> 31);
    if (c0eq) {
        wr8(param_1 + 3u, 0u);
        wr16(param_1, 0x2e8u);
    }
    return r5;
}
