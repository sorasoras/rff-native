#include "tc_rt.h"

s32 fn_80227144(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r6 = rd32(0x805714a0u);
    r7 = ((u32)param_1 + 0x1fu) & 0xffffffe0u;
    r4 = param_2 & 0xffffffe0u;
    r5 = rd32(0x805714a4u);
    r3 = 0u;
    ctr = r6;
    if ((s32)r6 > 0) {
        do {
            if ((s32)rd32(r5) < 0) {
                wr32(r5, r4 - r7);
                wr32(r7, 0u);
                wr32(r7 + 4u, 0u);
                wr32(r7 + 8u, rd32(r5));
                wr32(r5 + 4u, r7);
                wr32(r5 + 8u, 0u);
                return (s32)r3;
            }
            r5 = r5 + 0xcu;
            r3 = r3 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return -1;
}
