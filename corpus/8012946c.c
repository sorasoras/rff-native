#include "tc_rt.h"

void fn_8012946c(s32 param_1)
{
    TcArgs a = {0};
    (void)tc_call(0x8012a384u, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x801e63a4u, &a);
    a.r[0] = (u32)param_1 + 0xb8u;
    (void)tc_call(0x801e63a4u, &a);
    a.r[0] = (u32)param_1 + 0x12cu;
    (void)tc_call(0x801e63a4u, &a);
    a.r[0] = (u32)param_1 + 0x1e8u;
    (void)tc_call(0x8011a00cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x630u);
    a.r[1] = rd32((u32)param_1 + 0x62cu);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    return;
}
