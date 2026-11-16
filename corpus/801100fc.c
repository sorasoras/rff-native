#include "tc_rt.h"

void fn_801100fc(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_3;
    (void)tc_call(0x8011005cu, &a);
    a.r[0] = param_1;
    a.r[1] = 4u;
    a.r[2] = param_2;
    (void)tc_call(0x8010ffecu, &a);
    return;
}
