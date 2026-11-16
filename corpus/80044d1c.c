#include "tc_rt.h"

s32 fn_80044d1c(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 4u) == 0u) {
        return param_1;
    }
    r0 = rd32((u32)param_1 + 8u);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_1 + r0;
    }
    r4 = rd32((u32)param_1 + 0x1cu);
    wr32((u32)param_1 + 8u, r0);
    if (r4 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_1 + r4;
    }
    wr32((u32)param_1 + 0x1cu, r0);
    a.r[0] = rd32((u32)param_1 + 8u);
    a.r[1] = (u32)param_1;
    (void)tc_call(0x80044ca4u, &a);
    wr32((u32)param_1 + 4u, 0u);
    return param_1;
}
