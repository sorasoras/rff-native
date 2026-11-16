#include "tc_rt.h"

void fn_801241a4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80040b64u, &a);
    r5 = rd32((u32)param_1 + 0x70u);
    wr32((u32)param_1 + 8u, 0u);
    r0 = r5 + 1u;
    wr32((u32)param_1 + 0x70u, r0);
    r4 = ((r3 >> 5u) & 1u) + 2u;
    if ((s32)r0 >= 4) {
        wr32((u32)param_1 + 0x70u, 0u);
        r4 = 4u;
        wr32((u32)param_1 + 8u, 2u);
    }
    wr32((u32)param_1 + 0x6cu, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = r4;
    (void)tc_call(0x80124214u, &a);
    return;
}
