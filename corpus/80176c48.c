#include "tc_rt.h"

void fn_80176c48(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x108du;
    a.r[2] = r3;
    (void)tc_call(0x8010a754u, &a);
    a.r[0] = param_1;
    a.r[1] = 1u;
    (void)tc_call(0x80176bdcu, &a);
    return;
}
