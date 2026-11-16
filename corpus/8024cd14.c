#include "tc_rt.h"

s32 fn_8024cd14(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    wr32((u32)param_1 + 8u, rd32((u32)param_1 + 8u) | 2u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return param_1;
}
