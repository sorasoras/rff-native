#include "tc_rt.h"

void fn_8019a22c(s32 param_1)
{
    u32 r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 0xe0u;
    r29 = (u32)param_1;
    r28 = 0u;
    do {
        a.r[0] = r30;
        (void)tc_call(0x8005250cu, &a);
        r28 = r28 + 1u;
        wr32(r29 + 0x108u, 1u);
        r30 = r30 + 0x94u;
        r29 = r29 + 0x94u;
    } while ((s32)r28 < 5);
    return;
}
