#include "tc_rt.h"

void fn_800d64b8(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x20u);
    if (r4 != 0u) {
        wr32(r4 + 0xa4u, 0u);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800ce62cu, &a);
    return;
}
