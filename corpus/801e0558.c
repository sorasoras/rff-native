#include "tc_rt.h"

s32 fn_801e0558(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    r5 = rd32((u32)param_1 + 0xd18u);
    r3 = 0u;
    r6 = 0u;
    ctr = 0x10u;
    do {
        if (rd32(r5 + 0x2cu) == 0u) {
            r0 = 0u;
        } else {
            r4 = rd32(r5 + 0x28u);
            r0 = (((0u - r4) | r4) >> 0x1fu) & 1u;
        }
        if (r0 != 0u) {
            r3 = r3 + 1u;
        }
        if (rd32(r5 + 0x5cu) == 0u) {
            r0 = 0u;
        } else {
            r4 = rd32(r5 + 0x58u);
            r0 = (((0u - r4) | r4) >> 0x1fu) & 1u;
        }
        if (r0 != 0u) {
            r3 = r3 + 1u;
        }
        if (rd32(r5 + 0x8cu) == 0u) {
            r0 = 0u;
        } else {
            r4 = rd32(r5 + 0x88u);
            r0 = (((0u - r4) | r4) >> 0x1fu) & 1u;
        }
        if (r0 != 0u) {
            r3 = r3 + 1u;
        }
        if (rd32(r5 + 0xbcu) == 0u) {
            r0 = 0u;
        } else {
            r4 = rd32(r5 + 0xb8u);
            r0 = (((0u - r4) | r4) >> 0x1fu) & 1u;
        }
        if (r0 != 0u) {
            r3 = r3 + 1u;
        }
        r6 = r6 + 3u;
        r5 = r5 + 0xc0u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return (s32)r3;
}
