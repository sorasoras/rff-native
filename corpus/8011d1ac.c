#include "tc_rt.h"

s32 fn_8011d1ac(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_2 >= 32) {
        r3 = 0u;
    } else {
        r31 = (u32)param_1 + ((u32)param_2 * 0x38u) + 0x13cu;
        a.r[0] = r31;
        r3 = tc_call(0x8011c87cu, &a);
        if (r3 != 0u) {
            r3 = 0u;
        } else {
            r3 = r31;
        }
    }
    return (s32)r3;
}
