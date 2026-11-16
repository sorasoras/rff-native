#include "tc_rt.h"

void fn_80157f30(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x80321010u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x80321010u, &a);
        a.r[0] = r3;
        (void)tc_call(0x80310c3cu, &a);
    }
    return;
}
