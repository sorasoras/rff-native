#include "tc_rt.h"

void fn_8016daf0(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x1d0u), &a);
    a.f[0] = (f64)rdf32(0x80574c70u);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    f1 = tc_callf(0x800b5248u, &a);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
    wr32(0x817fdfe8u, r3);
    a.r[0] = 0x817fdfe8u;
    f1 = tc_callf(0x80149944u, &a);
    r3 = rd32(param_2 + 0xf78u);
    wrf32d(param_2 + 0xd50u, f1);
    wr32(param_2 + 0xf78u, r3 | (r3 ^ 1u));
    return;
}
