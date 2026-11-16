#include "tc_rt.h"

u32 fn_80298dbc(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0x8053d98cu;
    do {
        if ((u32)rd8(r30 + 0x119u) != 0u) {
            a.r[0] = r30 + 8u;
            a.r[1] = param_1;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) break;
        }
        r31 = r31 + 1u;
        r30 = r30 + 0x11cu;
    } while (r31 < 4u);
    r0 = r31 & 0xffu;
    if (r0 != 4u) {
        r0 = r0 * 0x22u;
        r3 = 0u;
        r0 = (u32)rd8(r0 - 0x7fac21bcu);
        wr8(param_2, (u8)r0);
    } else {
        r3 = 7u;
    }
    return r3;
}
