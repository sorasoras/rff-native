#include "tc_rt.h"

u32 fn_8010ad9c(u32 param_1, s32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        wr32(param_1, 0x8039d1a0u);
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(0x8039d1b0u), &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x20u), &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
