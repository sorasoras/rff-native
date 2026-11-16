#include "tc_rt.h"

void fn_801cbb54(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0;
    TcArgs a = {0};
    if (param_3 < 0) {
        a.r[0] = (u32)param_1 + ((u32)param_2 * 0x2c8u) + 4u;
        a.r[1] = 3u;
        (void)tc_call(0x8011e5a0u, &a);
        return;
    }
    r0 = (u32)param_2 * 0x2c8u;
    wr32((u32)param_1 + r0, (u32)param_3);
    a.r[0] = (u32)param_1 + r0 + 4u;
    a.r[1] = 2u;
    (void)tc_call(0x8011e5a0u, &a);
    return;
}
