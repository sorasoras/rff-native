#include "tc_rt.h"

void fn_801f5bb8(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x24u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(r0 + 0x28u) + 0x1cu), &a);
        r3 = rd32((u32)param_1 + 0x24u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x28u) + 8u), &a);
        }
        wr32((u32)param_1 + 0x24u, 0u);
    }
    return;
}
