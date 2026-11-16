#include "tc_rt.h"

s32 fn_800d48dc(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x800d5a0cu, &a);
    if (r3 == 0u) {
        r7 = 0u;
        r8 = 1u;
        r3 = 1u;
        r4 = 4u;
    } else {
        r7 = 2u;
        r8 = 8u;
        r3 = 3u;
        r4 = 2u;
    }
    r0 = rd32(0x803541bcu);
    if (r0 == 0u) {
        r6 = 0u;
    } else {
        r5 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r5 == 1u) {
            r6 = rd32(((r7 << 2u) & 0xfffffffcu) - 0x7fcabed0u);
        } else {
            if (r5 == 2u) {
                r6 = rd32(((r7 << 2u) & 0xfffffffcu) - 0x7fcabe9cu);
            } else {
                r6 = 0u;
            }
        }
    }
    if (r0 == 0u) {
        r6 = 0u;
    } else {
        r5 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r5 == 1u) {
            r6 = r6 & rd32(rd32(0x80354198u));
        } else {
            if (r5 == 2u) {
                r6 = r6 & rd32(rd32(0x803541a8u));
            } else {
                r6 = 0u;
            }
        }
    }
    r6 = (((0u - r6) | r6) >> 0x1fu) & 1u;
    if (r6 == 0u) {
        r6 = rd32(0x803541c4u) & r8;
        r6 = (((0u - r6) | r6) >> 0x1fu) & 1u;
    }
    if (r0 == 0u) {
        r5 = 0u;
    } else {
        r5 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r5 == 1u) {
            r3 = (r3 << 2u) & 0xfffffffcu;
            r5 = rd32(r3 - 0x7fcabed0u);
        } else {
            if (r5 == 2u) {
                r3 = (r3 << 2u) & 0xfffffffcu;
                r3 = r3 - 0x7fcabed0u;
                r5 = rd32(r3 + 0x34u);
            } else {
                r5 = 0u;
            }
        }
    }
    if (r0 == 0u) {
        r3 = 0u;
    } else {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 == 1u) {
            r3 = r5 & rd32(rd32(0x80354198u));
        } else {
            if (r0 == 2u) {
                r3 = r5 & rd32(rd32(0x803541a8u));
            } else {
                r3 = 0u;
            }
        }
    }
    r0 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    if (r0 == 0u) {
        r3 = rd32(0x803541c4u) & r4;
        r0 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    }
    return (s32)(r0 - r6);
}
