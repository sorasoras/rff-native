#include "tc_rt.h"

void fn_801a3c1c(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    r0 = rd32(param_1 + 0x194u);
    wr32(0x817fdfe8u, rd32(param_1 + 0x190u));
    wr32(0x817fdfecu, r0);
    wr32(0x817fdff0u, rd32(param_1 + 0x198u));
    a.r[0] = 0x817fdfe8u;
    a.r[1] = r3;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x802343a4u, &a);
    wrf32d(0x817fdfecu, (f64)rdf32(0x80575868u));
    a.r[0] = 0x817fdfe8u;
    f1 = tc_callf(0x80234428u, &a);
    a.f[0] = f1;
    a.r[0] = param_1;
    (void)tc_call(0x801a3c94u, &a);
    return;
}
