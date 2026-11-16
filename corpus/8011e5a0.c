#include "tc_rt.h"

void fn_8011e5a0(u32 param_1, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    r3 = tc_call(0x8011e45cu, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    (void)tc_call(0x8011e540u, &a);
    return;
}
