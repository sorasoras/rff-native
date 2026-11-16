#include "tc_rt.h"

s32 fn_8003bc04(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 4u) == 0u) {
        return param_1;
    }
    r0 = rd32((u32)param_1 + 0xcu);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_1 + r0;
    }
    r4 = rd32((u32)param_1 + 0x28u);
    wr32((u32)param_1 + 0xcu, r0);
    if (r4 == 0u) {
        r4 = 0u;
    } else {
        r4 = (u32)param_1 + r4;
    }
    r0 = rd32((u32)param_1 + 8u);
    wr32((u32)param_1 + 0x28u, r4);
    if (r0 != 0u) {
        wr32((u32)param_1 + 4u, 0u);
        return param_1;
    }
    a.r[0] = rd32((u32)param_1 + 0xcu);
    a.r[1] = (u32)param_1;
    (void)tc_call(0x8003bb84u, &a);
    wr32((u32)param_1 + 4u, 0u);
    return param_1;
}
