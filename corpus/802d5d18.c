#include "tc_rt.h"

u32 fn_802d5d18(u32 param_1)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r7 = rd32(param_1);
    r6 = (u32)rd8(r7);
    if ((r6 & 0x80u) == 0u) {
        wr32(param_1, rd32(param_1) + 1u);
    } else {
        if ((r6 & 0xe0u) == 0xc0u) {
            r4 = (u32)rd8(r7 + 1u) & 0x3fu;
            wr32(param_1, rd32(param_1) + 2u);
            r4 = (r4 & 0xfffff83fu) | ((r6 << 6u) & 0x7c0u);
            r6 = r4;
        } else {
            r5 = (r6 << 0xcu) & 0x1f000u;
            r6 = (u32)rd8(r7 + 1u);
            r7 = (u32)rd8(r7 + 2u);
            r5 = (r5 & 0xfffff03fu) | ((r6 << 6u) & 0xfc0u);
            r5 = (r5 & 0xffffffc0u) | (r7 & 0x3fu);
            wr32(param_1, rd32(param_1) + 3u);
            r6 = r5 & 0xffffu;
        }
    }
    return r6;
}
