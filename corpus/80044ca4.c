#include "tc_rt.h"

void fn_80044ca4(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0;
    r0 = rd32((u32)param_1 + 0x24u);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r0;
    }
    r5 = rd32((u32)param_1 + 0x28u);
    wr32((u32)param_1 + 0x24u, r0);
    if (r5 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r5;
    }
    wr32((u32)param_1 + 0x28u, r0);
    if (r0 != 0u) {
        wr32((u32)param_2 + 0xcu, 0x800448e0u);
        wr32((u32)param_2 + 0x10u, 0x80044940u);
        return;
    }
    wr32((u32)param_2 + 0xcu, 0x80043e94u);
    wr32((u32)param_2 + 0x10u, 0x8004404cu);
    return;
}
