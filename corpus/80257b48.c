#include "tc_rt.h"

u32 fn_80257b48(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0x8038e8b0u;
    while (r30 != 0u) {
        if (((rd32(r30 + 4u) >> 0x16u) & 7u) != 0u) {
            a.r[0] = r30;
            r3 = tc_call(0x80258c18u, &a);
            if (r3 != 0u) {
                r31 = 0xffffffffu;
            }
        }
        r30 = rd32(r30 + 0x4cu);
    }
    return r31;
}
