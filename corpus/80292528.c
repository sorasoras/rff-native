#include "tc_rt.h"

void fn_80292528(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 8u;
    r3 = tc_call(0x8028a0d4u, &a);
    if (r3 != 0u) {
        wr16(r3, 0x170du);
        a.r[0] = r3;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
