#include "tc_rt.h"

void fn_8011c82c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x34u);
    a.r[1] = 1u;
    (void)tc_call(0x8011c20cu, &a);
    wr32((u32)param_1 + 0x34u, 0u);
    wr32((u32)param_1 + 0x30u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0x30u;
    (void)tc_call(0x8000443cu, &a);
    return;
}
