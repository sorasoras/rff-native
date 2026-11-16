#include "tc_rt.h"

u32 fn_8018cb38(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    f1 = (f64)rdf32(rd32(0x805711ccu) + 0x58u);
    if (f1 > (f64)rdf32(0x80575308u)) {
        r31 = 2u;
    } else {
        if (f1 < (f64)rdf32(0x8057530cu)) {
            r31 = 1u;
        }
    }
    a.r[0] = 0xffffffffu;
    r3 = tc_call(0x800a8624u, &a);
    if (r3 == 0u) {
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
            return r31;
        }
    }
    r31 = 3u;
    return r31;
}
