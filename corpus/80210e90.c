#include "tc_rt.h"

void fn_80210e90(u32 param_1, u32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x18u), &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0x804890c8u;
    a.r[3] = 0x804890d4u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x48u), &a);
    return;
}
