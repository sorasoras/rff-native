#include "tc_rt.h"

void fn_80221d44(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800d6248u, &a);
    r3 = rd32((u32)param_1 + 0xb8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157e6cu, &a);
        wr32((u32)param_1 + 0xb8u, 0u);
    }
    return;
}
