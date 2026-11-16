#include "tc_rt.h"

u32 fn_801f6714(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x24u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3 + 0x28u) + 0x2cu), &a);
    if (r3 == 0u) {
        if (rd32(0x804df104u) != 6u) {
            r3 = tc_call(0x8012aafcu, &a);
            r0 = rd32(r3 + 0x3ecu);
            r3 = rd32((u32)param_1 + 0x1cu);
            wr32((u32)param_1 + 0x20u, r0);
            r3 = r3 + 0x44u;
            a.r[0] = r3;
            a.r[1] = 1u;
            (void)tc_call(0x800f8544u, &a);
        } else {
            r3 = 0u;
            return r3;
        }
    }
    r3 = 1u;
    return r3;
}
