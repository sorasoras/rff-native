#include "tc_rt.h"

void fn_800de7ec(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x28u, 0u);
    wr32((u32)param_1 + 0x30u, 0u);
    wr32((u32)param_1 + 0x38u, 0u);
    a.r[0] = 0x2au;
    r3 = tc_call(0x8014d9a4u, &a);
    if (r3 == 1u) {
        wr32((u32)param_1 + 0x38u, 1u);
    } else {
        a.r[0] = 0x2bu;
        r3 = tc_call(0x8014d9a4u, &a);
        if (r3 == 1u) {
            wr32((u32)param_1 + 0x28u, 1u);
        } else {
            wr32((u32)param_1 + 0x30u, 1u);
        }
    }
    return;
}
