#include "tc_rt.h"

void fn_80042fd4(u32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    do {
        a.r[0] = r31;
        a.r[1] = param_1;
        (void)tc_call(0x80042f44u, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 4);
    return;
}
