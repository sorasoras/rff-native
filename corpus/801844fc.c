#include "tc_rt.h"

void fn_801844fc(s32 param_1)
{
    u32 r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r29 = (u32)param_1 + 0x64u;
    r30 = r29;
    r28 = 0u;
    do {
        a.r[0] = r30;
        a.r[1] = 0x8033a8f8u;
        (void)tc_call(0x801f100cu, &a);
        r28 = r28 + 1u;
        r30 = r30 + 0x70u;
    } while ((s32)r28 < 6);
    r28 = 0u;
    do {
        a.r[0] = r29;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
        r28 = r28 + 1u;
        r29 = r29 + 0x70u;
    } while ((s32)r28 < 6);
    return;
}
