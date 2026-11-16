#include "tc_rt.h"

void fn_802c15e0(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1;
    a.r[0] = (u32)param_1 + 0x1a0u;
    (void)tc_call(0x80226a70u, &a);
    r31 = 0u;
    do {
        a.r[0] = r30;
        (void)tc_call(0x80226a70u, &a);
        r31 = r31 + 1u;
        r30 = r30 + 0x68u;
    } while ((s32)r31 < 4);
    return;
}
