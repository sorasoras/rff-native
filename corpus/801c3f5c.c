#include "tc_rt.h"

void fn_801c3f5c(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80040b64u, &a);
    f1 = tc_lastf();
    r3 = r3 & 3u;
    wr32((u32)param_1 + 0xcu, r3 + 2u);
    wr32(param_2 + 0xd34u, 0u);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x1f0u), &a);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x80575d40u);
    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
    wr32((u32)param_1 + 8u, 0u);
    return;
}
