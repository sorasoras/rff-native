#include "tc_rt.h"

u32 fn_801413a8(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    r30 = 0u;
    do {
        a.r[0] = r30;
        r3 = tc_call(0x80141170u, &a);
        if (r3 == 0u) {
            r31 = 0u;
        }
        r30 = r30 + 1u;
    } while (r30 < 0x1au);
    return r31;
}
