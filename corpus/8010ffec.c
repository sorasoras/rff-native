#include "tc_rt.h"

void fn_8010ffec(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1;
    r30 = (u32)param_3 + 0x40u;
    r29 = 0u;
    while ((s32)r29 < param_2) {
        a.r[0] = r31;
        a.r[1] = r30;
        a.r[2] = r31;
        (void)tc_call(0x80042474u, &a);
        r31 = r31 + 0xcu;
        r29 = r29 + 1u;
    }
    return;
}
