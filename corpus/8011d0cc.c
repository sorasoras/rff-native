#include "tc_rt.h"

s32 fn_8011d0cc(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0x13cu;
    r30 = 0u;
    do {
        a.r[0] = r31;
        r3 = tc_call(0x8011c87cu, &a);
        if (r3 != 0u) break;
        a.r[0] = r31;
        a.r[1] = param_2;
        r3 = tc_call(0x8025beb0u, &a);
        if (r3 == 0u) {
            a.r[0] = r31;
            (void)tc_call(0x8011c82cu, &a);
            break;
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x38u;
    } while ((s32)r30 < 32);
    if (r30 != 0x20u) {
        wr32(0x80571d40u, (u32)param_1 + 4u);
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        r3 = tc_call(0x8011d2a0u, &a);
        wr32(0x80571d40u, 0u);
        if (r3 != 0u) {
            a.r[0] = r31;
            a.r[1] = (u32)param_1;
            a.r[2] = r3;
            a.r[3] = param_2;
            (void)tc_call(0x8011c890u, &a);
            r3 = r31;
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return (s32)r3;
}
