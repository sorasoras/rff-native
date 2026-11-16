#include "tc_rt.h"

u32 fn_800c09c8(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    r30 = 0x1eu;
    if ((rd32(0x80499094u) & 0x20u) == 0u) {
        a.r[0] = 0x8049e140u;
        a.r[1] = 0x20u;
        r3 = tc_call(0x801a8f18u, &a);
        if (r3 == 0u) {
            r31 = 0u;
        }
    }
    if (r31 == 0u) {
        r30 = 0u;
    }
    return r30;
}
