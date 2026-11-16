#include "tc_rt.h"

u32 fn_802a99ac(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0x80540a28u;
    do {
        if ((u32)rd8(r30) != 0u) {
            a.r[0] = r30 + 0x2au;
            a.r[1] = param_1;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) {
                r3 = r30;
                return r3;
            }
        }
        r31 = r31 + 1u;
        r30 = r30 + 0x5cu;
    } while ((s32)r31 < 4);
    r3 = 0u;
    return r3;
}
