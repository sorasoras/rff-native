#include "tc_rt.h"

u32 fn_801fabbc(void)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    r5 = rd32(0x803541bcu);
    if (r5 == 0u) {
        r4 = 0u;
    } else {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 == 1u) {
            r4 = rd32(0x80354150u);
        } else {
            if (r0 == 2u) {
                r4 = rd32(0x80354184u);
            } else {
                r4 = 0u;
            }
        }
    }
    if (r5 == 0u) {
        return 0u;
    }
    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
    if (r0 == 1u) {
        return r4 & rd32(rd32(0x80354198u));
    }
    if (r0 == 2u) {
        return r4 & rd32(rd32(0x803541a8u));
    }
    return 0u;
}
