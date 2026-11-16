#include "tc_rt.h"

u32 fn_802950e8(u32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0x8053f888u;
    r29 = 0u;
    for (;;) {
        if (((u32)rd8(r30 + 0x76u) & 0x80u) != 0u) {
            a.r[0] = r30 + 0x1cu;
            a.r[1] = param_1;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) break;
        }
        r31 = r31 + 1u;
        r30 = r30 + 0x88u;
        if ((s32)r31 >= 16) {
            r30 = 0u;
            break;
        }
    }
    if (r30 != 0u) {
        r29 = r30 + 0x35u;
    }
    return r29;
}
