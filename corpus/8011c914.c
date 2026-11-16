#include "tc_rt.h"

void fn_8011c914(s32 param_1, f64 param_f1)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.r[0] = rd32((u32)param_1 + 0x34u);
    (void)tc_call(0x8011c62cu, &a);
    return;
}
