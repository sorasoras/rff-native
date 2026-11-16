#include "tc_rt.h"

void fn_800da0d8(u32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80070be4u, &a);
    a.r[0] = rd32(param_1 + 0x78u);
    a.r[1] = param_1 + 0x40u;
    f1 = tc_callf(0x800315c0u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0xa0u), &a);
    return;
}
