#include "tc_rt.h"

void fn_801b41dc(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x24u) != 0u) {
        wr32((u32)param_1 + 0x24u, 0u);
        r3 = (u32)param_1 + 0x6cu;
        a.r[0] = r3;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
        r3 = rd32((u32)param_1 + 0x28u);
        if (r3 != 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x801b52a0u, &a);
            r3 = rd32((u32)param_1 + 0x28u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3 + 0x28u) + 8u), &a);
            }
            wr32((u32)param_1 + 0x28u, 0u);
        }
        a.r[0] = (u32)param_1 + 0x2cu;
        (void)tc_call(0x800f8388u, &a);
    }
    return;
}
