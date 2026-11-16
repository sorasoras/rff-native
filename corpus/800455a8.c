#include "tc_rt.h"

void fn_800455a8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8003cf44u, &a);
    if (r3 == 0u) {
        a.r[0] = 0u;
        (void)tc_call(0x8004f304u, &a);
    } else {
        a.r[0] = 1u;
        (void)tc_call(0x8004f304u, &a);
    }
    return;
}
