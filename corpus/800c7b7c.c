#include "tc_rt.h"

u32 fn_800c7b7c(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r7 = rd32(0x803541bcu);
    if (r7 == 0u) {
        r0 = 0u;
    } else {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 == 1u) {
            r0 = rd32(0x8035413cu);
        } else {
            if (r0 == 2u) {
                r0 = rd32(0x80354170u);
            } else {
                r0 = 0u;
            }
        }
    }
    if (r7 == 0u) {
        r5 = 0u;
    } else {
        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r3 == 1u) {
            r5 = rd32(0x80354138u);
        } else {
            if (r3 == 2u) {
                r5 = rd32(0x8035416cu);
            } else {
                r5 = 0u;
            }
        }
    }
    if (r7 == 0u) {
        r6 = 0u;
    } else {
        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r3 == 1u) {
            r6 = rd32(0x80354130u);
        } else {
            if (r3 == 2u) {
                r6 = rd32(0x80354164u);
            } else {
                r6 = 0u;
            }
        }
    }
    if (r7 == 0u) {
        r4 = 0u;
    } else {
        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r3 == 1u) {
            r4 = rd32(0x80354134u);
        } else {
            if (r3 == 2u) {
                r4 = rd32(0x80354168u);
            } else {
                r4 = 0u;
            }
        }
    }
    if (r7 == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r3 == 1u) {
            r4 = r0 | r4;
            r4 = r4 | (r5 | r6);
            r3 = r4 & rd32(rd32(0x80354198u));
        } else {
            if (r3 == 2u) {
                r4 = r0 | r4;
                r4 = r4 | (r5 | r6);
                r3 = r4 & rd32(rd32(0x803541a8u));
            } else {
                r3 = 0u;
            }
        }
    }
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
