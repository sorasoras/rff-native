#include "tc_rt.h"

s32 fn_801e063c(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    r3 = rd32((u32)param_1 + 0xd18u);
    r5 = 0u;
    ctr = 0x10u;
    for (;;) {
        if (rd32(r3 + 0x2cu) != 0u) {
            r4 = rd32(r3 + 0x28u);
            r0 = (((0u - r4) | r4) >> 0x1fu) & 1u;
        } else {
            r0 = 0u;
        }
        if (r0 == 0u) break;
        r0 = rd32(r3 + 0x5cu);
        r3 = r3 + 0x30u;
        if (r0 != 0u) {
            r4 = rd32(r3 + 0x28u);
            r0 = (((0u - r4) | r4) >> 0x1fu) & 1u;
        } else {
            r0 = 0u;
        }
        if (r0 == 0u) {
            return (s32)r3;
        }
        r0 = rd32(r3 + 0x5cu);
        r3 = r3 + 0x30u;
        if (r0 != 0u) {
            r4 = rd32(r3 + 0x28u);
            r0 = (((0u - r4) | r4) >> 0x1fu) & 1u;
        } else {
            r0 = 0u;
        }
        if (r0 == 0u) {
            return (s32)r3;
        }
        r0 = rd32(r3 + 0x5cu);
        r3 = r3 + 0x30u;
        if (r0 != 0u) {
            r4 = rd32(r3 + 0x28u);
            r0 = (((0u - r4) | r4) >> 0x1fu) & 1u;
        } else {
            r0 = 0u;
        }
        if (r0 == 0u) {
            return (s32)r3;
        }
        r5 = r5 + 3u;
        r3 = r3 + 0x30u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            return 0;
        }
    }
    return (s32)r3;
}
