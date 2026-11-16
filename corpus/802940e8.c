#include "tc_rt.h"

u32 fn_802940e8(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0x8053d98cu;
    for (;;) {
        if ((u32)rd8(r30 + 0x119u) != 0u) {
            a.r[0] = r30 + 8u;
            a.r[1] = param_1;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) break;
        }
        r31 = r31 + 1u;
        r30 = r30 + 0x11cu;
        if (r31 >= 4u) {
            r30 = 0u;
            break;
        }
    }
    if (r30 == 0u) {
        r3 = 0xffffu;
    } else {
        r3 = (u32)rd16(r30);
    }
    return r3;
}
