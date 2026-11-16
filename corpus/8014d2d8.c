#include "tc_rt.h"

void fn_8014d2d8(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xcu;
    a.r[1] = param_r4;
    (void)tc_call(0x8011e5a0u, &a);
    return;
}
