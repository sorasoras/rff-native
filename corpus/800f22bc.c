#include "tc_rt.h"

s32 fn_800f22bc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 4u) == 0u) {
        return param_1;
    }
    r0 = rd32((u32)param_1 + 0x10u);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_1 + r0;
    }
    wr32((u32)param_1 + 0x10u, r0);
    r30 = 0u;
    while (r30 < rd32((u32)param_1 + 0xcu)) {
        (void)tc_call(0x800f22b8u, &a);
        r30 = r30 + 1u;
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
