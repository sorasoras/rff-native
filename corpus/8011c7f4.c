#include "tc_rt.h"

s32 fn_8011c7f4(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x34u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8011c82cu, &a);
    return param_1;
}
