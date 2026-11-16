#include "tc_rt.h"

void fn_8013bb2c(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 4u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x801f0ff4u, &a);
        a.r[0] = rd32((u32)param_1 + 4u);
        a.r[1] = 1u;
        (void)tc_call(0x801f0de8u, &a);
        wr32((u32)param_1 + 4u, 0u);
    }
    return;
}
