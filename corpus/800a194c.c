#include "tc_rt.h"

void fn_800a194c(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r29 = (u32)param_1;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006f4c8u, &a);
    r30 = 0u;
    do {
        r3 = rd32(r29 + 0x130u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80157e6cu, &a);
            wr32(r29 + 0x130u, 0u);
        }
        r30 = r30 + 1u;
        r29 = r29 + 4u;
    } while (r30 < 2u);
    return;
}
