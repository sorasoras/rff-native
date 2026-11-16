#include "tc_rt.h"

u32 fn_8011d794(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8011ddbcu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x8011ddbcu, &a);
        r3 = (u32)rd8(r3 + 0xb8u);
    }
    return r3;
}
