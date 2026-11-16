#include "tc_rt.h"

s32 fn_8011d208(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        r31 = (u32)param_1 + 0x13cu;
        r30 = 0u;
        do {
            a.r[0] = r31;
            r3 = tc_call(0x8011c87cu, &a);
            if (r3 == 0u) {
                a.r[0] = r31;
                a.r[1] = (u32)param_2;
                r3 = tc_call(0x8025beb0u, &a);
                if (r3 == 0u) break;
                r31 = r31 + 0x38u;
            }
            r30 = r30 + 1u;
        } while ((s32)r30 < 32);
        if (r30 != 0x20u) {
            r3 = r31;
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return (s32)r3;
}
