#include "tc_rt.h"

void fn_80050b14(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    for (;;) {
        a.r[0] = 0u;
        r3 = tc_call(0x80050a04u, &a);
        if (r3 != 0u) break;
        a.r[0] = param_1;
        (void)tc_call(0x80050b58u, &a);
    }
    return;
}
