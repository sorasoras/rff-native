#include "tc_rt.h"

void fn_8014da48(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    do {
        a.r[0] = r31;
        a.r[1] = param_1;
        r3 = tc_call(0x8014da24u, &a);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x8014d9dcu, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 33);
    return;
}
