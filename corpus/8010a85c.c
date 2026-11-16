#include "tc_rt.h"

void fn_8010a85c(s32 param_1, u32 param_r4, u32 param_r5)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xe0u;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    (void)tc_call(0x8011fffcu, &a);
    return;
}
