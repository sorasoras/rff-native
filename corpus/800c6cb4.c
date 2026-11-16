#include "tc_rt.h"

u32 fn_800c6cb4(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    if (rd32(0x805711ecu) == 0u) {
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
            r0 = 0u;
        } else {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 == 1u) {
                r0 = r4 & rd32(rd32(0x80354198u));
            } else {
                if (r0 == 2u) {
                    r0 = r4 & rd32(rd32(0x803541a8u));
                } else {
                    r0 = 0u;
                }
            }
        }
        if (r0 == 0u) {
            a.r[0] = 0xffffffffu;
            r3 = tc_call(0x800a8624u, &a);
            if (r3 == 0u) {
                r5 = rd32(0x803541bcu);
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
                    r0 = 0u;
                } else {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 == 1u) {
                        r0 = r4 & rd32(rd32(0x80354198u));
                    } else {
                        if (r0 == 2u) {
                            r0 = r4 & rd32(rd32(0x803541a8u));
                        } else {
                            r0 = 0u;
                        }
                    }
                }
                if (r0 == 0u) {
                    r3 = 0u;
                    return r3;
                }
            }
        }
        r3 = 1u;
        return r3;
    }
    r3 = 0u;
    return r3;
}
