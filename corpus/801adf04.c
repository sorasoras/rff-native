#include "tc_rt.h"

void fn_801adf04(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xf20u;
    f1 = tc_callf(0x801c2148u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32((u32)param_1 + 0xf64u), &a);
    return;
}
