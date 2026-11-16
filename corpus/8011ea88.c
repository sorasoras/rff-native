#include "tc_rt.h"

void fn_8011ea88(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x54u, param_2);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = param_2;
    (void)tc_call(0x8011e5a0u, &a);
    return;
}
