#include "tc_rt.h"

void fn_8014d1b4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xcu;
    (void)tc_call(0x8011e5d8u, &a);
    return;
}
