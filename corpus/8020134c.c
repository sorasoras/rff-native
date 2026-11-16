#include "tc_rt.h"

void fn_8020134c(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x2cu);
    if (r0 != 0u) {
        a.r[0] = r0;
        f1 = tc_callf(0x802024e4u, &a);
        r3 = rd32((u32)param_1 + 0x2cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x28u) + 8u), &a);
        }
        wr32((u32)param_1 + 0x2cu, 0u);
    }
    r3 = rd32((u32)param_1 + 0x30u);
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x80202704u, &a);
        r3 = rd32((u32)param_1 + 0x30u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x28u) + 8u), &a);
        }
        wr32((u32)param_1 + 0x30u, 0u);
    }
    return;
}
