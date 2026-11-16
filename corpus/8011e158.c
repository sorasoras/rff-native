#include "tc_rt.h"

s32 fn_8011e158(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8011c970u, &a);
    a.r[0] = (u32)param_1 + 0x9a8u;
    (void)tc_call(0x800a5f50u, &a);
    return param_1;
}
