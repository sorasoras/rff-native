#include "tc_rt.h"

void fn_80252720(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32(0x80576c88u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = r5;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(r5 + 0x518u), &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    a.r[2] = param_2;
    (void)tc_call(0x802525bcu, &a);
    return;
}
