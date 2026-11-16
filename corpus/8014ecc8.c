#include "tc_rt.h"

void fn_8014ecc8(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x12cu);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80157e6cu, &a);
        wr32((u32)param_1 + 0x12cu, 0u);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800da1b4u, &a);
    return;
}
