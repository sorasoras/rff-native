#include "tc_rt.h"

void fn_802af5e4(s32 param_1, s32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        wr8(0x8054126cu, 0u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        f1 = tc_callf(0x802b0258u, &a);
        if ((u32)rd8((u32)param_1 + 0x73u) == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            a.r[2] = 1u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802ac72cu, &a);
        }
    }
    return;
}
