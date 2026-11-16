#include "tc_rt.h"

void fn_802fcdb0(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    a.r[0] = param_1;
    r3 = tc_call(0x80226ea0u, &a);
    r30 = r3;
    if ((u32)rd8(r3 + 7u) != 0u) {
        r3 = r3 + 0x40u;
        a.r[0] = r3;
        (void)tc_call(0x80226a70u, &a);
        wr8(r30 + 6u, 0u);
    }
    wr8(r30 + 7u, 0u);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
