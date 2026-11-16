#include "tc_rt.h"

void fn_800fbb90(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
    r3 = tc_call(0x8011a4b4u, &a);
    if ((u32)rd16(r3 + 0xbcu) != 0x2e8u) {
        r31 = rd32((u32)param_1 + 0x5cu);
        a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
        r3 = tc_call(0x8011a4b4u, &a);
        a.r[0] = r31;
        a.r[1] = r3;
        a.r[2] = 0xffffffffu;
        (void)tc_call(0x801621e4u, &a);
    }
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
    (void)tc_call(0x8011a424u, &a);
    a.r[0] = (u32)param_1 + 0x20u;
    (void)tc_call(0x800f8388u, &a);
    return;
}
