#include "tc_rt.h"

void fn_800c0068(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0x3bu;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x80572e78u);
    f1 = tc_callf(rd32(rd32(param_1) + 0x54u), &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0xc30u;
    a.r[2] = r3;
    (void)tc_call(0x8010a794u, &a);
    return;
}
