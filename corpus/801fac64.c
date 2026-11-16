#include "tc_rt.h"

u32 fn_801fac64(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    if ((rd32(0x803541ccu) & 8u) == 0u) {
        if ((rd32(0x803541c8u) & 2u) != 0u) {
            return r31;
        }
        r5 = rd32(0x803541bcu);
        if (r5 == 0u) {
            r4 = 0u;
        } else {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 == 1u) {
                r4 = rd32(0x80354138u);
            } else {
                if (r0 == 2u) {
                    r4 = rd32(0x8035416cu);
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
                r0 = r4 & rd32(rd32(0x803541a4u));
            } else {
                if (r0 == 2u) {
                    r0 = r4 & rd32(rd32(0x803541b4u));
                } else {
                    r0 = 0u;
                }
            }
        }
        if (r0 == 0u) {
            return r31;
        }
    }
    a.r[0] = 0x804de14cu;
    r3 = tc_call(0x801f412cu, &a);
    if (r3 != 0u) {
        r31 = 1u;
    }
    return r31;
}
