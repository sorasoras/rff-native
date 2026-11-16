#include "tc_rt.h"

u32 fn_8010a964(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8004f57cu, &a);
    wr32(param_1, r3);
    r3 = tc_call(0x8004f588u, &a);
    wr32(param_1 + 4u, r3);
    a.r[0] = param_1 + 0x10u;
    (void)tc_call(0x8011ee44u, &a);
    a.r[0] = param_1 + 0x74u;
    (void)tc_call(0x8011e660u, &a);
    a.r[0] = param_1 + 0xe0u;
    (void)tc_call(0x8011f6c4u, &a);
    a.r[0] = param_1 + 0x1940u;
    (void)tc_call(0x8014cdf0u, &a);
    a.r[0] = param_1 + 0x19b8u;
    a.r[1] = param_1;
    (void)tc_call(0x80162640u, &a);
    a.r[0] = param_1 + 0x1a30u;
    a.r[1] = 0x8010ad50u;
    a.r[2] = 0x8010af10u;
    a.r[3] = 0x2c8u;
    a.r[4] = 3u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = param_1 + 0x2290u;
    (void)tc_call(0x801cab74u, &a);
    wr32(param_1 + 0x22a0u, 0u);
    return param_1;
}
