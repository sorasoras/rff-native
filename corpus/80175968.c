#include "tc_rt.h"

void fn_80175968(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x124u) == 1u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = rd32(param_1 + 0x120u);
        r3 = tc_call(0x800da8b8u, &a);
        if (r3 == 0u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = 0u;
            a.r[4] = 1u;
            (void)tc_call(0x800dab98u, &a);
        } else {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = 1u;
            a.r[4] = 1u;
            f1 = tc_callf(0x800dab98u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0xc0u), &a);
        }
    }
    return;
}
