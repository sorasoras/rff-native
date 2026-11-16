#include "tc_rt.h"

void fn_8013b078(s32 param_1)
{
    u32 c0eq = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x30u;
    f1 = tc_callf(0x801f0ff4u, &a);
    r3 = rd32((u32)param_1 + 0x84u);
    wr32((u32)param_1 + 0x2cu, 0u);
    c0eq = r3 == 0u;
    if (!c0eq) {
        if (!c0eq) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x64u) + 8u), &a);
        }
        wr32((u32)param_1 + 0x84u, 0u);
    }
    return;
}
