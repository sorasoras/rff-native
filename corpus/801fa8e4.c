#include "tc_rt.h"

u32 fn_801fa8e4(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    r5 = rd32(0x803541bcu);
    if (r5 == 0u) {
        r4 = 0u;
    } else {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 == 1u) {
            r4 = rd32(0x80354140u);
        } else {
            if (r0 == 2u) {
                r4 = rd32(0x80354174u);
            } else {
                r4 = 0u;
            }
        }
    }
    if (r5 == 0u) {
        r3 = 0u;
    } else {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 == 1u) {
            r3 = r4 & rd32(rd32(0x80354198u));
        } else {
            if (r0 == 2u) {
                r3 = r4 & rd32(rd32(0x803541a8u));
            } else {
                r3 = 0u;
            }
        }
    }
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    if (r3 == 0u) {
        if (r5 == 0u) {
            r4 = 0u;
        } else {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 == 1u) {
                r4 = rd32(0x8035415cu);
            } else {
                if (r0 == 2u) {
                    r4 = rd32(0x80354190u);
                } else {
                    r4 = 0u;
                }
            }
        }
        if (r5 == 0u) {
            r3 = 0u;
        } else {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 == 1u) {
                r3 = r4 & rd32(rd32(0x80354198u));
            } else {
                if (r0 == 2u) {
                    r3 = r4 & rd32(rd32(0x803541a8u));
                } else {
                    r3 = 0u;
                }
            }
        }
        r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        return r3;
    }
    return r3;
}
