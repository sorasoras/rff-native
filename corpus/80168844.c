#include "tc_rt.h"

void fn_80168844(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.f[0] = (f64)rdf32(0x80574c20u);
    a.r[0] = (u32)param_2;
    a.r[1] = 8u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    a.f[0] = (f64)rdf32(0x80574c20u);
    a.r[0] = (u32)param_2;
    a.r[1] = 9u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    a.f[0] = (f64)rdf32(0x80574c20u);
    a.r[0] = (u32)param_2;
    a.r[1] = 0xaau;
    a.r[2] = 0xffffffffu;
    a.r[3] = 0x804890c8u;
    r3 = tc_call(0x800aeaf0u, &a);
    a.r[0] = r3;
    a.r[1] = 0x3cu;
    (void)tc_call(0x80157f70u, &a);
    r0 = rd32((u32)param_2 + 0x9cu);
    wr8((u32)param_2 + 0x368u, 0u);
    r0 = r0 | 0x4000000u;
    wr32((u32)param_2 + 0x9cu, r0);
    return;
}
