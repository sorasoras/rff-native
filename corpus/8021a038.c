#include "tc_rt.h"

void fn_8021a038(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80218648u, &a);
    r30 = r3;
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = 0u;
    r3 = tc_call(0x80218624u, &a);
    r31 = r3;
    while ((s32)r30 < (s32)r31) {
        a.r[0] = param_1;
        a.r[1] = r30;
        a.r[2] = 2u;
        (void)tc_call(0x8021a544u, &a);
        r30 = r30 + 1u;
    }
    return;
}
