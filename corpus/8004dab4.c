#include "tc_rt.h"

s32 fn_8004dab4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r31 = 0;
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
    wr32((u32)param_1 + 0xcu, r0);
    r29 = 0u;
    r31 = 0u;
    while ((s32)r29 < (s32)rd16((u32)param_1 + 8u)) {
        a.r[0] = rd32((u32)param_1 + 0xcu) + r31;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x8004da2cu, &a);
        r31 = r31 + 0x70u;
        r29 = r29 + 1u;
    }
    r0 = rd32((u32)param_1 + 0x24u);
    if (r0 == 0u) {
        r3 = 0u;
    } else {
        r3 = (u32)param_1 + r0;
    }
    wr32((u32)param_1 + 0x24u, r3);
    wr32((u32)param_1 + 4u, 0u);
    return param_1;
}
