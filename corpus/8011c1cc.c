#include "tc_rt.h"

s32 fn_8011c1cc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802ee6f0u, &a);
    wr32((u32)param_1 + 0x10u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8011c338u, &a);
    return param_1;
}
