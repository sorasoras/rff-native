#include "tc_rt.h"

void fn_801ca2a0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x28u, 1u);
    wr32((u32)param_1 + 0x30u, 0u);
    wr32((u32)param_1 + 0x38u, 0u);
    a.r[0] = 0xffffffffu;
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x800a74e4u, &a);
    if (r3 == 2u) {
        wr32((u32)param_1 + 0x30u, 1u);
    } else {
        a.r[0] = 0xffffffffu;
        a.r[1] = 0xffffffffu;
        r3 = tc_call(0x800a74e4u, &a);
        if (r3 == 0u) {
            wr32((u32)param_1 + 0x38u, 1u);
        }
    }
    return;
}
