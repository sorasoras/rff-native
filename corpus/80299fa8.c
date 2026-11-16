#include "tc_rt.h"

void fn_80299fa8(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x8053f1acu;
    r30 = 0u;
    do {
        if ((u32)rd8(r31 + 0xdu) != 0u) {
            a.r[0] = r31 + 0x28u;
            a.r[1] = param_1;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) {
                a.r[0] = r30 & 0xffffu;
                (void)tc_call(0x80299ef0u, &a);
            }
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x34u;
    } while (r30 < 3u);
    return;
}
