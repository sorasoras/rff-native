#include "tc_rt.h"

void fn_801afbc0(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 8u, 0u);
    wr32((u32)param_1 + 0xcu, 0u);
    r3 = tc_call(0x80040b64u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r0 = r3 & 3u;
    wr32((u32)param_1 + 0x10u, r0);
    if (r0 == 0u || r0 == 2u) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_2) + 0x1c8u), &a);
        a.r[0] = param_2;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.f[0] = (f64)rdf32(0x80575af8u);
        (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
    } else {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_2) + 0x1ccu), &a);
        a.r[0] = param_2;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.f[0] = (f64)rdf32(0x80575af8u);
        (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
    }
    a.r[0] = param_2;
    a.r[1] = 0x245cu;
    (void)tc_call(0x801c35dcu, &a);
    return;
}
