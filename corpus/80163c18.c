#include "tc_rt.h"

void fn_80163c18(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = 1u;
    (void)tc_call(0x8011e5a0u, &a);
    wr32((u32)param_1 + 0x48u, param_2);
    wr32((u32)param_1 + 0x4cu, param_3);
    return;
}
