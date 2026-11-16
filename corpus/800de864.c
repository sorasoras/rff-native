#include "tc_rt.h"

void fn_800de864(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x168u, 0u);
    wr32((u32)param_1 + 0x170u, 0u);
    wr32((u32)param_1 + 0x178u, 0u);
    a.r[0] = 0x2au;
    r3 = tc_call(0x8014d9a4u, &a);
    if (r3 == 1u) {
        wr32((u32)param_1 + 0x178u, 1u);
    } else {
        a.r[0] = 0x2bu;
        r3 = tc_call(0x8014d9a4u, &a);
        if (r3 == 1u) {
            wr32((u32)param_1 + 0x168u, 1u);
        } else {
            wr32((u32)param_1 + 0x170u, 1u);
        }
    }
    return;
}
