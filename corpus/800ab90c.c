#include "tc_rt.h"

void fn_800ab90c(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7854u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8006db64u, &a);
        r3 = tc_call(0x800ab8bcu, &a);
        if (r3 != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x800c4ea8u, &a);
        } else {
            a.r[0] = r31;
            (void)tc_call(0x800c4b50u, &a);
        }
    }
    return;
}
