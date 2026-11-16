#include "tc_rt.h"

u32 fn_80221280(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x24u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    a.r[0] = (u32)param_1 + 0x24u;
    r3 = tc_call(0x801f1144u, &a);
    r3 = ppc_cntlzw(r3);
    r31 = (r3 >> 5u) & 0x7ffffffu;
    if (rd32((u32)param_1 + 0x20u) != 0u) {
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
                a.r[0] = 0u;
                r3 = tc_call(0x80043c20u, &a);
                if ((rd32(r3 + 4u) & 0x800u) == 0u) {
                    return r31;
                }
            }
        }
        r31 = 0u;
    }
    return r31;
}
