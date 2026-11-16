#include "tc_rt.h"

void fn_800d60a4(s32 param_1)
{
    u32 c1eq = 0, r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0xa4u);
    c1eq = r4 == 0u;
    if (!c1eq) {
        if (rd32(r4 + 0x10u) == 0u) {
            if (!c1eq) {
                a.r[0] = r4;
                a.r[1] = 1u;
                a.f[0] = 0.0;
                (void)tc_call(rd32(rd32(r4) + 8u), &a);
            }
            wr32((u32)param_1 + 0xa4u, 0u);
        } else {
            a.r[0] = r4;
            (void)tc_call(0x800ce5e0u, &a);
            wr32(rd32((u32)param_1 + 0xa4u) + 0x20u, 0u);
            wr32((u32)param_1 + 0xa4u, 0u);
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800d6d24u, &a);
    return;
}
