#include "tc_rt.h"

void fn_801c8d14(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x1dfcu);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r0) + 0x148u), &a);
        wr32((u32)param_1 + 0xe94u, 0u);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800b29b0u, &a);
    return;
}
