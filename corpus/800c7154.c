#include "tc_rt.h"

u32 fn_800c7154(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u);
    r3 = tc_call(0x8007d150u, &a);
    if (r3 != 0u) {
        r0 = rd32(r3 + 4u);
    } else {
        r0 = 3u;
    }
    if (r0 == 1u) {
        r3 = 0u;
    } else {
        r5 = rd32(0x803541bcu);
        if (r5 == 0u) {
            r4 = 0u;
        } else {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 == 1u) {
                r4 = rd32(0x80354160u);
            } else {
                if (r0 == 2u) {
                    r4 = rd32(0x80354194u);
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
                r3 = r4 & rd32(rd32(0x8035419cu));
            } else {
                if (r0 == 2u) {
                    r3 = r4 & rd32(rd32(0x803541acu));
                } else {
                    r3 = 0u;
                }
            }
        }
        r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    }
    return r3;
}
