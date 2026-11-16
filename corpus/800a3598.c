#include "tc_rt.h"

void fn_800a3598(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    do {
        a.r[0] = param_1;
        r3 = tc_call(0x800a2d40u, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = 0u;
        (void)tc_call(0x8009bf04u, &a);
        r31 = r31 + 1u;
    } while (r31 < 0xau);
    return;
}
