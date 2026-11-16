#include "tc_rt.h"

u32 fn_8006bd4c(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 0xa48u);
    c0eq = r5 == 0u;
    if (c0eq) {
        return 0u;
    }
    if (!c0eq) {
        r0 = rd32(r5 + 0x74u);
    } else {
        r0 = 0x2e8u;
    }
    wr16(param_2, (u16)r0);
    r5 = rd32((u32)param_1 + 0xa48u);
    if (r5 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)rd8(r5 + 0x79u);
    }
    wr8(param_2 + 2u, (u8)r0);
    r3 = rd32((u32)param_1 + 0xa48u);
    if (r3 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)rd8(r3 + 0x78u);
    }
    wr8(param_2 + 3u, (u8)r0);
    return 1u;
}
