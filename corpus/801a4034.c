#include "tc_rt.h"

void fn_801a4034(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32((u32)param_1 + 0x180u);
    wr32(0x817fdfe8u, rd32((u32)param_1 + 0x17cu));
    wr32(0x817fdfecu, r0);
    wr32(0x817fdff0u, rd32((u32)param_1 + 0x184u));
    a.f[0] = (f64)rdf32((u32)param_1 + 0xd6cu);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x802343c8u, &a);
    a.r[0] = 0x817fdfe8u;
    f1 = tc_callf(0x80234440u, &a);
    f0 = (f64)rdf32(0x805758b0u);
    if ((f1 < f0) || (f1 == f0)) {
        f1 = (f64)rdf32(0x804890ccu);
        f0 = (f64)rdf32(0x804890d0u);
        wrf32d(0x817fdfe8u, (f64)rdf32(0x804890c8u));
        wrf32d(0x817fdfecu, f1);
        wrf32d(0x817fdff0u, f0);
    }
    wrf32d((u32)param_1 + 0x170u, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_1 + 0x174u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0x178u, (f64)rdf32(0x804890d0u));
    wrf32d((u32)param_1 + 0x17cu, (f64)rdf32(0x817fdfe8u));
    wrf32d((u32)param_1 + 0x180u, (f64)rdf32(0x817fdfecu));
    wrf32d((u32)param_1 + 0x184u, (f64)rdf32(0x817fdff0u));
    a.r[0] = (u32)param_1;
    a.r[1] = 4u;
    (void)tc_call(0x801a2fdcu, &a);
    return;
}
