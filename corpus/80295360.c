#include "tc_rt.h"

u32 fn_80295360(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x8053f888u;
    r30 = 0u;
    do {
        if (((u32)rd8(r31 + 0x76u) & 0x80u) != 0u) {
            a.r[0] = r31 + 0x1cu;
            a.r[1] = param_1;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) {
                r3 = r31;
                return r3;
            }
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x88u;
    } while ((s32)r30 < 16);
    r3 = 0u;
    return r3;
}
