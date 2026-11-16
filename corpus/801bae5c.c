#include "tc_rt.h"

void fn_801bae5c(s32 param_1)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = (u32)param_1;
    for (;;) {
        r3 = rd32(r3 + 0x28u);
        if (r3 == 0u) break;
        for (;;) {
            r12 = rd32(r3 + 0x28u);
            r12 = rd32(r12 + 0x20u);
            if (r12 == 0x801bae5cu) break;
            if (r12 == 0x817ff000u) {
                return;
            }
            if (r12 != 0x801bae68u) {
                a.r[0] = r3;
                a.r[1] = tc_argr(1u);
                a.r[2] = tc_argr(2u);
                a.r[3] = tc_argr(3u);
                a.r[4] = tc_argr(4u);
                a.r[5] = tc_argr(5u);
                a.r[6] = tc_argr(6u);
                a.r[7] = tc_argr(7u);
                a.f[0] = tc_argf(0u);
                a.f[1] = tc_argf(1u);
                a.f[2] = tc_argf(2u);
                a.f[3] = tc_argf(3u);
                a.f[4] = tc_argf(4u);
                a.f[5] = tc_argf(5u);
                a.f[6] = tc_argf(6u);
                a.f[7] = tc_argf(7u);
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                return;
            }
        }
    }
    return;
}
