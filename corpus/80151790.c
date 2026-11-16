#include "tc_rt.h"

void fn_80151790(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    f1 = (f64)rdf32(0x80574820u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(param_2) + 0x50u), &a);
    r6 = rd32(param_2 + 0xf78u);
    r0 = rd32(param_2 + 0x9cu);
    r5 = r6 & 1u;
    wr32(param_2 + 0x1b0u, 0u);
    r4 = r6 ^ r5;
    r0 = r0 & 0xfbffffffu;
    wr32(param_2 + 0xf78u, r4);
    wr32(param_2 + 0x9cu, r0);
    a.r[0] = param_2;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
    wr32(0x817fdfe8u, r3);
    a.r[0] = 0x817fdfe8u;
    f1 = tc_callf(0x80149944u, &a);
    wrf32d(param_2 + 0xd50u, f1);
    return;
}
