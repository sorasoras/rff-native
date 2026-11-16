#include "tc_rt.h"

void fn_8011c91c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x34u);
    (void)tc_call(0x8011c7d0u, &a);
    return;
}
