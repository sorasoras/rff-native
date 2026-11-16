#include "tc_rt.h"

void fn_8004802c(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x80571054u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x802462c8u, &a);
    }
    r3 = rd32(0x80571058u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x802462c8u, &a);
    }
    return;
}
