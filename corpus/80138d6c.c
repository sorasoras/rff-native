#include "tc_rt.h"

void fn_80138d6c(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)tc_call(0x801399f8u, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x8011a00cu, &a);
    a.r[0] = (u32)param_1 + 0x5c4u;
    (void)tc_call(0x801911f4u, &a);
    r31 = (u32)param_1 + 0x488u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x80139e74u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x54u;
    } while ((s32)r30 < 3);
    a.r[0] = rd32((u32)param_1 + 0x798u);
    a.r[1] = rd32((u32)param_1 + 0x794u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    return;
}
