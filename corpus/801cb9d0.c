#include "tc_rt.h"

void fn_801cb9d0(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1;
    r30 = 0u;
    do {
        a.r[0] = r31 + 4u;
        (void)tc_call(0x8011e5d8u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x2c8u;
    } while ((s32)r30 < 3);
    return;
}
