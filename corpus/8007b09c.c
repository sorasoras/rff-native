#include "tc_rt.h"

s32 fn_8007b09c(u32 param_1)
{
    u32 r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = rd32(param_1);
    r5 = rd32(r4);
    r31 = rd32(r4 + 8u);
    wr32(param_1, r5);
    if (r5 != 0u) {
        wr32(r5 + 4u, 0u);
    } else {
        wr32(param_1 + 4u, 0u);
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    (void)tc_call(0x8007afccu, &a);
    return (s32)r31;
}
