#include "tc_rt.h"

void fn_802037c8(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80200098u, &a);
    a.r[0] = r3;
    r3 = tc_call(0x8011a4b4u, &a);
    if ((u32)rd16(r3 + 0xbcu) != 0x2e8u && (u32)rd16(rd32((u32)param_1 + 0x20u) + 0xbcu) == 0x2e8u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        r31 = rd32((u32)param_1 + 0x20u);
        a.r[0] = r3;
        r3 = tc_call(0x8011a4b4u, &a);
        a.r[0] = r31;
        a.r[1] = r3;
        a.r[2] = 0xffffffffu;
        (void)tc_call(0x801621e4u, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80200098u, &a);
    a.r[0] = r3;
    (void)tc_call(0x8011a424u, &a);
    wr32((u32)param_1 + 0x20u, 0u);
    a.r[0] = (u32)param_1 + 0x28u;
    (void)tc_call(0x800f8388u, &a);
    return;
}
