#include "tc_rt.h"

u32 fn_80227738(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = tc_argr(2u);
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = param_1;
    if ((u32)param_2 > 0u) {
        r5 = param_1 & 0x1fu;
        r4 = (((u32)param_2 + r5 + 0x1fu) >> 5u) & 0x7ffffffu;
        ctr = r4;
        do {
            r3 = r3 + 0x20u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
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
        r3 = tc_call(0x80000c00u, &a);
        f1 = tc_lastf();
        return r3;
    }
    return param_1;
}
