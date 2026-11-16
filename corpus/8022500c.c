#include "tc_rt.h"

void fn_8022500c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x2a8u, 1u);
    a.r[0] = 0xffffffffu;
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x800a74e4u, &a);
    if (r3 == 4u) {
        wr32((u32)param_1 + 0x2b0u, 1u);
    } else {
        wr32((u32)param_1 + 0x2b0u, 0u);
    }
    return;
}
