#include "tc_rt.h"

s32 fn_80258d4c(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r6 = 0u;
    if (((((rd32((u32)param_1 + 4u) >> 0x16u) & 7u) + 0xffu) & 0xffu) > 1u || (u32)rd8((u32)param_1 + 0xau) != 0u) {
        wr32(0x805719c0u, 0x28u);
        return -1;
    }
    r5 = (rd32((u32)param_1 + 8u) >> 0x1du) & 7u;
    if (r5 == 0u) {
        return (s32)rd32((u32)param_1 + 0x18u);
    }
    r8 = rd32((u32)param_1 + 0x1cu);
    r4 = rd32((u32)param_1 + 0x24u) - r8;
    r7 = rd32((u32)param_1 + 0x34u) + r4;
    if (r5 >= 3u) {
        r6 = r5 - 2u;
        r7 = r7 - r6;
    }
    if (((rd32((u32)param_1 + 4u) >> 0x13u) & 1u) == 0u) {
        r0 = r4 - r6;
        ctr = r0;
        if (r0 != 0u) {
            do {
                r0 = (u32)rd8(r8);
                r8 = r8 + 1u;
                if (r0 == 0xau) {
                    r7 = r7 + 1u;
                }
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    return (s32)r7;
}
