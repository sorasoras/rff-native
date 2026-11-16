#include "tc_rt.h"

void fn_8021e044(s32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = r31 + 0x14d8u;
    a.r[1] = 0x8033c934u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = r31 + 0x14d8u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    r31 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = r31 + 0x1588u;
    a.r[1] = 0x8033c93au;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = r31 + 0x1588u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    r31 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = r31 + 0x1530u;
    a.r[1] = 0x8033c93au;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = r31 + 0x1530u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    a.r[1] = 1u;
    (void)tc_call(0x8011a004u, &a);
    return;
}
