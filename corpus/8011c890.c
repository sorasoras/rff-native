#include "tc_rt.h"

void fn_8011c890(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_4;
    r3 = tc_call(0x802550d4u, &a);
    r31 = 0x2fu;
    if (r3 <= 0x2fu) {
        r31 = r3;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_4;
    a.r[2] = r31;
    (void)tc_call(0x8025bdf4u, &a);
    wr8((u32)param_1 + r31, 0u);
    wr32((u32)param_1 + 0x34u, param_3);
    wr32((u32)param_1 + 0x30u, param_2);
    return;
}
