#include "tc_rt.h"

void fn_8012f544(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x80130930u, &a);
    a.r[0] = (u32)param_1 + 0x900u;
    (void)tc_call(0x8011a00cu, &a);
    return;
}
