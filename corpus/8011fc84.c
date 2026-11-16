#include "tc_rt.h"

void fn_8011fc84(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0x40u;
    r30 = (u32)param_1 + 0x50u;
    r29 = 0u;
    do {
        r3 = rd32(r31 + 4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            (void)tc_call(0x802f5fd8u, &a);
        }
        a.r[0] = r30;
        (void)tc_call(0x8011e3f0u, &a);
        r29 = r29 + 1u;
        r30 = r30 + 0x80u;
        r31 = r31 + 0x80u;
    } while ((s32)r29 < 48);
    return;
}
