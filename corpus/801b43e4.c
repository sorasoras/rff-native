#include "tc_rt.h"

void fn_801b43e4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801b434cu, &a);
    r30 = r3;
    a.r[0] = r3;
    a.r[1] = rd32(r3 + 0x3ecu);
    a.r[2] = 0u;
    (void)tc_call(0x80119fb0u, &a);
    wr32(r30 + 0x3e8u, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801b434cu, &a);
    r30 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = rd32(r3 + 0x3e8u);
    (void)tc_call(0x80119fb0u, &a);
    wr32(r30 + 0x3ecu, 0u);
    if (rd32((u32)param_1 + 0x28u) != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801b434cu, &a);
        f1 = tc_lastf();
        r4 = r3;
        r3 = rd32((u32)param_1 + 0x28u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    }
    f1 = (f64)rdf32(0x80575c40u);
    wr32((u32)param_1 + 0x128cu, 0x16u);
    a.f[0] = f1;
    a.r[0] = (u32)param_1 + 0x6cu;
    (void)tc_call(0x80210af0u, &a);
    wr32((u32)param_1 + 0x1288u, 0u);
    return;
}
