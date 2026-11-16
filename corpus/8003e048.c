#include "tc_rt.h"

s32 fn_8003e048(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0;
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
    r4 = rd32((u32)param_1 + 0x2cu);
    wr32((u32)param_1 + 0xcu, r0);
    if (r4 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_1 + r4;
    }
    wr32((u32)param_1 + 0x2cu, r0);
    r30 = 0u;
    while (r30 < rd32((u32)param_1 + 8u)) {
        if ((s32)r30 < 0) {
            r3 = 0u;
        } else {
            r5 = rd32((u32)param_1 + 8u);
            r3 = rd32((u32)param_1 + 0xcu) + (rd32((u32)param_1 + 0x10u) * (r30 - (ppc_divwu(r30, r5) * r5)));
        }
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x8003df80u, &a);
        r30 = r30 + 1u;
    }
    wr32((u32)param_1 + 4u, 0u);
    return param_1;
}
