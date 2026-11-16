#include "tc_rt.h"

void fn_801babe4(s32 param_1)
{
    u32 c0eq = 0, r4 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x24u) != 0u) {
        r4 = rd32((u32)param_1 + 0x28u);
        wr32((u32)param_1 + 0x24u, 0u);
        c0eq = r4 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                a.r[0] = r4;
                a.r[1] = 1u;
                a.f[0] = 0.0;
                (void)tc_call(rd32(rd32(r4 + 0x28u) + 8u), &a);
            }
            wr32((u32)param_1 + 0x28u, 0u);
        }
        a.r[0] = (u32)param_1 + 0x2cu;
        (void)tc_call(0x800f8388u, &a);
    }
    return;
}
