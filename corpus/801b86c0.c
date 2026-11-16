#include "tc_rt.h"

void fn_801b86c0(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x24u) != 0u) {
        r4 = rd32((u32)param_1 + 0x28u);
        wr32((u32)param_1 + 0x24u, 0u);
        if (r4 != 0u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = r4;
            a.r[3] = param_r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            f1 = tc_callf(0x801b93d0u, &a);
            r3 = rd32((u32)param_1 + 0x28u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                (void)tc_call(rd32(rd32(r3 + 0x28u) + 8u), &a);
            }
            wr32((u32)param_1 + 0x28u, 0u);
        }
        a.r[0] = (u32)param_1 + 0x2cu;
        (void)tc_call(0x800f8388u, &a);
    }
    return;
}
