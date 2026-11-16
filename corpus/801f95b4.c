#include "tc_rt.h"

void fn_801f95b4(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0xcu;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x801f8ea4u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x18u;
    } while ((s32)r30 < 2);
    return;
}
