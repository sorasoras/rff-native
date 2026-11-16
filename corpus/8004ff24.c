#include "tc_rt.h"

s32 fn_8004ff24(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
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
    wr32((u32)param_1 + 8u, r0);
    a.r[0] = r0;
    a.r[1] = (u32)param_1;
    r3 = tc_call(0x8004fe9cu, &a);
    r0 = rd32((u32)param_1 + 0x1cu);
    wr32((u32)param_1 + 0xcu, r3);
    if (r0 == 0u) {
        r3 = 0u;
    } else {
        r3 = (u32)param_1 + r0;
    }
    wr32((u32)param_1 + 0x1cu, r3);
    wr32((u32)param_1 + 4u, 0u);
    return param_1;
}
