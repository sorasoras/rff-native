#include "tc_rt.h"

void fn_80120894(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 0x40u;
    r29 = 0u;
    do {
        if ((rd32(r30 + 0x4cu) & 8u) == 0u) {
            r3 = rd32(r30 + 4u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 5u;
                (void)tc_call(0x802f5fd8u, &a);
            }
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
