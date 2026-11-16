#include "tc_rt.h"

u32 fn_80060b98(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80209bbcu, &a);
    if (r3 == 1u) {
        r3 = 0u;
    } else {
        if ((r3 - 2u) <= 1u) {
            a.r[0] = 1u;
            (void)tc_call(0x80035ba0u, &a);
        }
        r3 = 1u;
    }
    return r3;
}
