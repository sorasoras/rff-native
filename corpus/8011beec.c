#include "tc_rt.h"

u32 fn_8011beec(s32 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8011ba70u, &a);
    r29 = rd32((u32)param_1 + 0x4cu);
    r30 = r3;
    if ((s32)r3 <= (s32)r29) {
        r3 = 0u;
    } else {
        r28 = 0u;
        r31 = 0x803628e8u;
        while ((s32)r28 < (s32)rd32(0x80570800u)) {
            a.r[0] = rd32(r31);
            a.r[1] = 0u;
            r3 = tc_call(0x8011ba50u, &a);
            a.r[0] = r3;
            a.r[1] = r29;
            a.r[2] = r30;
            r3 = tc_call(0x8011baf4u, &a);
            if (r3 != 0u) {
                r3 = 1u;
                return r3;
            }
            r31 = r31 + 4u;
            r28 = r28 + 1u;
        }
        r3 = 0u;
    }
    return r3;
}
