#include "tc_rt.h"

void fn_802d2f40(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x8025e7a4u, &a);
    f1 = tc_lastf();
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = r3 & 0xffffu;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x70u), &a);
    return;
}
