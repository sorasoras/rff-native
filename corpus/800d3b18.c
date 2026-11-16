#include "tc_rt.h"

void fn_800d3b18(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    r3 = tc_call(0x800d4164u, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x524u) + 0x30u);
    a.r[1] = r3;
    (void)tc_call(0x8011d53cu, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x524u) + 0x30u);
    r3 = tc_call(0x8011ddbcu, &a);
    a.r[0] = r3;
    a.r[1] = param_2;
    (void)tc_call(0x802e5194u, &a);
    return;
}
