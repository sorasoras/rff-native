#include "tc_rt.h"

u32 fn_8006bc2c(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r4 = 0;
    r4 = (u32)param_1 + ((u32)param_2 * 0x1a0u);
    r0 = rd32(r4 + 0x5c0u);
    if (r0 == 0x2e8u) {
        return 0u;
    }
    wr16(param_3, (u16)r0);
    if (rd32(r4 + 0x5c0u) != 0x2e8u) {
        r0 = (u32)rd8((u32)param_1 + 0x5c5u);
    } else {
        r0 = 0u;
    }
    wr8(param_3 + 2u, (u8)r0);
    if (rd32(r4 + 0x5c0u) != 0x2e8u) {
        r0 = (u32)rd8((u32)param_1 + 0x5c4u);
    } else {
        r0 = 0u;
    }
    wr8(param_3 + 3u, (u8)r0);
    return 1u;
}
