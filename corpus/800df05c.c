#include "tc_rt.h"

void fn_800df05c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x2fu;
    r3 = tc_call(0x8014d9a4u, &a);
    if (r3 == 0u) {
        wr32((u32)param_1 + 0x3e8u, 1u);
        wr32((u32)param_1 + 0x3f0u, 0u);
    } else {
        wr32((u32)param_1 + 0x3f0u, 1u);
        wr32((u32)param_1 + 0x3e8u, 0u);
    }
    return;
}
