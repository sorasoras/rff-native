#include "tc_rt.h"

void fn_801a6d0c(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfe8u, rd32(r3));
    wr32(0x817fdfecu, r0);
    wr32(0x817fdff0u, rd32(r3 + 8u));
    a.r[0] = 0x817fdfe8u;
    a.r[1] = param_2 + 0x16c8u;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x802343a4u, &a);
    f1 = (f64)rdf32(0x805759c8u);
    r0 = 0u;
    f0 = (f64)rdf32(0x817fdfe8u);
    wrf32d(0x817fdfecu, f1);
    if ((f1 == f0 && f1 == f1) && f1 == (f64)rdf32(0x817fdff0u)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x802343e4u, &a);
    }
    f1 = (f64)rdf32(0x805759dcu);
    wrf32d((u32)param_1 + 0x1cu, (f64)rdf32(param_2 + 0x16d8u));
    f0 = (f64)rdf32(0x805759c8u);
    wrf32d((u32)param_1 + 0x20u, (f64)rdf32(param_2 + 0x16dcu));
    wrf32d((u32)param_1 + 0x24u, (f64)rdf32(param_2 + 0x16e0u));
    wrf32d((u32)param_1 + 0x28u, f1);
    wrf32d((u32)param_1 + 0x10u, f1);
    wrf32d((u32)param_1 + 0xcu, f0);
    wrf32d((u32)param_1 + 0x14u, f0);
    wr32((u32)param_1 + 0x18u, 3u);
    wr32((u32)param_1 + 0x2cu, 0u);
    r3 = rd32(param_2 + 0x9cu);
    wr32(param_2 + 0xed0u, 0x25u);
    r3 = r3 | 0x2000000u;
    wr32(param_2 + 0x9cu, r3);
    return;
}
