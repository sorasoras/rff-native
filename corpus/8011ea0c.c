#include "tc_rt.h"

void fn_8011ea0c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x10u;
    (void)tc_call(0x8011e5d8u, &a);
    return;
}
