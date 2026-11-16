#include "tc_rt.h"

void fn_8019ac88(s32 param_1)
{
    u32 r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 0x518u;
    r28 = 0u;
    r29 = (u32)param_1;
    do {
        if ((s32)r28 <= 2) {
            a.r[0] = r30;
            (void)tc_call(0x8005250cu, &a);
            wr32(r29 + 0x540u, 1u);
        } else if (rd32((u32)param_1 + 0x20u) != 0u) {
            a.r[0] = r30;
            (void)tc_call(0x8005250cu, &a);
            wr32(r29 + 0x540u, 1u);
        }
        r28 = r28 + 1u;
        r29 = r29 + 0x94u;
        r30 = r30 + 0x94u;
    } while ((s32)r28 < 8);
    return;
}
