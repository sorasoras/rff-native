#include "tc_rt.h"

u32 fn_8011ea5c(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0xcu, param_2);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8011ea88u, &a);
    return 0u;
}
