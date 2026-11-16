#include "tc_rt.h"

void fn_8003caf0(u32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    a.r[0] = 1u;
    (void)tc_call(0x8023f300u, &a);
    (void)tc_call(0x8023e1c8u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x8023e748u, &a);
    (void)tc_call(0x8023f180u, &a);
    (void)tc_call(0x8023e1c8u, &a);
    (void)tc_call(0x8023e1c8u, &a);
    r31 = 0u;
    do {
        (void)tc_call(0x8023f180u, &a);
        (void)tc_call(0x8023e1c8u, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 100);
    a.r[0] = 0u;
    (void)tc_call(0x8023f300u, &a);
    return;
}
