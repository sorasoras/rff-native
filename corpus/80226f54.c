#include "tc_rt.h"

u32 fn_80226f54(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    r5 = rd32(0x805714a4u) + ((u32)param_1 * 0xcu);
    r4 = ((u32)param_2 + 0x3fu) & 0xffffffe0u;
    r3 = rd32(r5 + 4u);
    r6 = r3;
    while (r6 != 0u && (s32)r4 > (s32)rd32(r6 + 8u)) {
        r6 = rd32(r6 + 4u);
    }
    if (r6 != 0u) {
        r0 = rd32(r6 + 8u) - r4;
        if (r0 >= 0x40u) {
            wr32(r6 + 8u, r4);
            r4 = r6 + r4;
            wr32(r4 + 8u, r0);
            wr32(r4, rd32(r6));
            r3 = rd32(r6 + 4u);
            wr32(r4 + 4u, r3);
            if (r3 != 0u) {
                wr32(r3, r4);
            }
            r3 = rd32(r4);
            if (r3 == 0u) {
                wr32(r5 + 4u, r4);
            } else {
                wr32(r3 + 4u, r4);
            }
        } else {
            r4 = rd32(r6 + 4u);
            if (r4 != 0u) {
                wr32(r4, rd32(r6));
            }
            r4 = rd32(r6);
            if (r4 != 0u) {
                wr32(r4 + 4u, rd32(r6 + 4u));
            } else {
                r3 = rd32(r6 + 4u);
            }
            wr32(r5 + 4u, r3);
        }
        r3 = rd32(r5 + 8u);
        wr32(r6 + 4u, r3);
        wr32(r6, 0u);
        if (r3 != 0u) {
            wr32(r3, r6);
        }
        wr32(r5 + 8u, r6);
        return r6 + 0x20u;
    }
    return 0u;
}
