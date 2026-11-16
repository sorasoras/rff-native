#include "tc_rt.h"

u32 fn_8026cbc4(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r8 = 0u;
    r0 = rd32(param_2 + 4u);
    wr32(0x817fdff8u, rd32(param_2));
    r6 = rd32(param_1);
    wr32(0x817fdffcu, r0);
    while (r6 != 0u) {
        if (r6 >= rd32(param_2)) {
            if (r6 != rd32(param_2 + 4u)) break;
            r7 = rd32(r6 + 8u);
            r5 = r6 + rd32(r6 + 4u);
            r6 = rd32(r6 + 0xcu);
            wr32(0x817fdffcu, r5 + 0x10u);
            if (r7 == 0u) {
                wr32(param_1, r6);
            } else {
                wr32(r7 + 0xcu, r6);
            }
            if (r6 == 0u) {
                wr32(param_1 + 4u, r7);
                break;
            }
            wr32(r6 + 8u, r7);
            break;
        }
        r8 = r6;
        r6 = rd32(r6 + 0xcu);
    }
    if (r8 != 0u && (r8 + rd32(r8 + 4u) + 0x10u) == rd32(param_2)) {
        r5 = rd32(r8 + 8u);
        wr32(0x817fdff8u, r8);
        r4 = rd32(r8 + 0xcu);
        if (r5 == 0u) {
            wr32(param_1, r4);
        } else {
            wr32(r5 + 0xcu, r4);
        }
        if (r4 == 0u) {
            wr32(param_1 + 4u, r5);
        } else {
            wr32(r4 + 8u, r5);
        }
        r8 = r5;
    }
    r6 = rd32(0x817fdffcu);
    r5 = rd32(0x817fdff8u);
    if ((r6 - r5) >= 0x10u) {
        wr16(r5, 0x4652u);
        wr16(r5 + 2u, 0u);
        wr32(r5 + 4u, r6 - (r5 + 0x10u));
        wr32(r5 + 0xcu, 0u);
        wr32(r5 + 8u, r8);
        if (r8 == 0u) {
            r4 = rd32(param_1);
            wr32(param_1, r5);
        } else {
            r4 = rd32(r8 + 0xcu);
            wr32(r8 + 0xcu, r5);
        }
        wr32(r5 + 0xcu, r4);
        if (r4 == 0u) {
            wr32(param_1 + 4u, r5);
        } else {
            wr32(r4 + 8u, r5);
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
