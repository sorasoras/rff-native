#include "tc_rt.h"

void fn_80120760(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 0x40u;
    r29 = 0u;
    do {
        r3 = rd32(r30 + 4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 5u;
            (void)tc_call(0x802f5fd8u, &a);
        }
        r3 = rd32(r30 + 4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = 0u;
            (void)tc_call(0x802f61c0u, &a);
        }
        a.r[0] = r30 + 0x10u;
        r3 = tc_call(0x8011e538u, &a);
        if (r3 != 6u) {
            wr32(r30 + 0x4cu, 0u);
            a.r[0] = r30 + 0x10u;
            a.r[1] = 0u;
            (void)tc_call(0x8011e5a0u, &a);
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x80u;
    } while ((s32)r29 < 48);
    return;
}
