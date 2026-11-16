#include "tc_rt.h"

void fn_801515c0(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    f1 = (f64)rdf32(0x80574820u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.f[0] = f1;
    a.r[0] = param_2;
    a.r[1] = 1u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    a.f[0] = (f64)rdf32(0x80574820u);
    a.r[0] = param_2;
    a.r[1] = 0x3bu;
    a.r[2] = 0xffffffffu;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x800aeaf0u, &a);
    a.f[0] = (f64)rdf32(0x80574820u);
    a.r[0] = param_2;
    a.r[1] = 0x4bu;
    a.r[2] = 0xffffffffu;
    a.r[3] = 0x804890c8u;
    f1 = tc_callf(0x800aeaf0u, &a);
    wr32((u32)param_1 + 8u, 0u);
    wr32((u32)param_1 + 0xcu, 0u);
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
    f1 = tc_callf(0x8014995cu, &a);
    wrf32d(param_2 + 0xd50u, f1);
    return;
}
