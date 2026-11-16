#include "tc_rt.h"

void fn_801a692c(u32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    f1 = tc_callf(0x800d6248u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x58u), &a);
    return;
}
