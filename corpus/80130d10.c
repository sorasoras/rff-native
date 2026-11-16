#include "tc_rt.h"

void fn_80130d10(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    do {
        a.r[0] = 0xfu;
        a.r[1] = r31;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        r30 = r3;
        a.r[0] = param_1;
        a.r[1] = r3;
        a.r[2] = r31;
        (void)tc_call(0x80130d8cu, &a);
        a.r[0] = param_1;
        a.r[1] = r30;
        a.r[2] = r31;
        (void)tc_call(0x80130da8u, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 165);
    return;
}
