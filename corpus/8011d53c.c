#include "tc_rt.h"

void fn_8011d53c(s32 param_1, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    r3 = tc_call(0x8011db50u, &a);
    wr32((u32)param_1 + 0xccu, r3);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8011ddbcu, &a);
    return;
}
