#include "tc_rt.h"

void fn_801769bc(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80574f70u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r4 = rd32(0x80571320u);
    r5 = r4 + 1u;
    r4 = r4 + 0x2710u;
    wr32(0x80571320u, r5);
    wr32(param_1 + 0x148u, r4);
    wrf32d(0x817fdfd8u, f0);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfe4u, f0);
    wr32(0x817fdfe8u, 0u);
    wr8(0x817fdfecu, 0u);
    wr8(0x817fdfedu, 0u);
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    wrf32d(0x817fdfd8u, (f64)rdf32(r3));
    wrf32d(0x817fdfdcu, (f64)rdf32(r3 + 4u));
    wrf32d(0x817fdfe0u, (f64)rdf32(r3 + 8u));
    wr32(0x817fdfe8u, rd32(param_1 + 0x148u));
    r31 = rd32(param_1 + 0x134u);
    a.r[0] = r31;
    a.r[1] = 7u;
    a.r[2] = 1u;
    (void)tc_call(0x800eb44cu, &a);
    a.r[0] = 0x804b9da0u;
    (void)tc_call(0x8010a6e0u, &a);
    a.r[0] = r31;
    a.r[1] = 0u;
    a.r[2] = 0x817fdfd8u;
    a.r[3] = 0u;
    r3 = tc_call(0x800eb4f0u, &a);
    r30 = r3;
    a.r[0] = 0x8046ad74u;
    a.r[1] = r3;
    f1 = tc_callf(0x8007b03cu, &a);
    wr32(r30 + 0x15cu, rd32(0x8046ad78u));
    a.r[0] = r30;
    a.r[1] = 0x8046ad74u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r30) + 0x13cu), &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.r[0] = r30;
        a.r[1] = 1u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r30) + 0x1b0u), &a);
    }
    wr32(r30 + 0x148u, rd32(r30 + 0x148u) | 0x400000u);
    return;
}
