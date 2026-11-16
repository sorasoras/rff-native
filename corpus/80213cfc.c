#include "tc_rt.h"

void fn_80213cfc(s32 param_1, u32 param_2, s32 param_3, u32 param_4, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80576960u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    a.f[0] = param_f1;
    a.r[0] = 0x817fdfd8u;
    a.r[1] = param_4;
    a.r[2] = 0xcu;
    a.r[3] = param_2;
    (void)tc_call(0x8004581cu, &a);
    r3 = tc_call(0x800a7488u, &a);
    if ((u32)param_3 == r3) {
        a.r[0] = 9u;
        r3 = tc_call(0x80074e90u, &a);
        if (r3 == 0u) {
            wr8(0x817fdfc8u, 0u);
            a.r[0] = (u32)param_1;
            a.r[1] = 9u;
            a.r[2] = 0x817fdfd8u;
            a.r[3] = 0x817fdfc8u;
            (void)tc_call(0x80212a74u, &a);
        }
        a.r[0] = 9u;
        r3 = tc_call(0x80074e90u, &a);
        if (r3 == 0u) {
            return;
        }
        a.r[0] = 9u;
        r3 = tc_call(0x800a4500u, &a);
        r31 = r3;
        a.f[0] = (f64)rdf32(0x817fdfd8u);
        a.f[1] = (f64)rdf32(0x817fdfe0u);
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        f1 = tc_callf(0x80089fc8u, &a);
        wrf32d(0x817fdfdcu, f1);
        a.r[0] = r31;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
        r6 = rd32(0x817fdfdcu);
        r0 = rd32(0x817fdfe0u);
        wr32(0x817fdfccu, rd32(0x817fdfd8u));
        wr32(0x817fdfd0u, r6);
        wr32(0x817fdfd4u, r0);
        a.r[0] = 0x817fdfccu;
        a.r[1] = r3;
        a.r[2] = 0x817fdfccu;
        (void)tc_call(0x802343a4u, &a);
        f1 = (f64)rdf32(0x80576960u);
        f0 = (f64)rdf32(0x817fdfccu);
        wrf32d(0x817fdfd0u, f1);
        wrf32d(r31 + 0x90u, f0);
        wrf32d(r31 + 0x94u, (f64)rdf32(0x817fdfd0u));
        wrf32d(r31 + 0x98u, (f64)rdf32(0x817fdfd4u));
        wrf32d((u32)param_1 + 0x18u, (f64)rdf32(0x817fdfd8u));
        wrf32d((u32)param_1 + 0x1cu, (f64)rdf32(0x817fdfdcu));
        wrf32d((u32)param_1 + 0x20u, (f64)rdf32(0x817fdfe0u));
        wr32((u32)param_1 + 8u, (u32)param_3);
        a.r[0] = r31;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(r31) + 0x2cu), &a);
        wrf32d((u32)param_1 + 0x24u, f1);
    } else {
        a.r[0] = 9u;
        r3 = tc_call(0x80074e90u, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 9u;
            (void)tc_call(0x80212884u, &a);
        }
        f0 = (f64)rdf32(0x80576960u);
        wrf32d((u32)param_1 + 0x18u, (f64)rdf32(0x817fdfd8u));
        wrf32d((u32)param_1 + 0x1cu, (f64)rdf32(0x817fdfdcu));
        wrf32d((u32)param_1 + 0x20u, (f64)rdf32(0x817fdfe0u));
        wrf32d((u32)param_1 + 0x24u, f0);
        wr32((u32)param_1 + 8u, (u32)param_3);
    }
    return;
}
