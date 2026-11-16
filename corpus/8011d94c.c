#include "tc_rt.h"

void fn_8011d94c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8011ddbcu, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    a.r[2] = param_2;
    a.r[3] = param_3;
    a.r[4] = param_4;
    a.r[5] = param_5;
    (void)tc_call(0x8011d82cu, &a);
    return;
}
