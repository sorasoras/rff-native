#include "tc_rt.h"

void fn_8008bca4(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1;
    r29 = 0u;
    do {
        r3 = rd32(r30 + 0x3f20u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80157e6cu, &a);
            wr32(r30 + 0x3f20u, 0u);
        }
        r29 = r29 + 1u;
        r30 = r30 + 4u;
    } while (r29 < 0x14u);
    return;
}
