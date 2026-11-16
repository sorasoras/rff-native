#include "tc_rt.h"

void fn_8011ea94(s32 param_1, u32 param_r4)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x50u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = param_r4;
        (void)tc_call(0x802f5fd8u, &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = 3u;
    (void)tc_call(0x8011ea88u, &a);
    return;
}
