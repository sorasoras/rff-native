#include "tc_rt.h"

u32 fn_80239c3c(void)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = 0x804e5cf0u;
    ctr = 4u;
    do {
        r31 = rd32(r4);
        if (r31 != r4) {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = r31;
            return r3;
        }
        r4 = r4 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    r3 = 0u;
    return r3;
}
