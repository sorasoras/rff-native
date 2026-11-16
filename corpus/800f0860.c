#include "tc_rt.h"

void fn_800f0860(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r31 = rd32((u32)param_2 + 0x18u);
    a.r[0] = r31;
    r3 = tc_call(0x800b3344u, &a);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfe0u, rd32(r3));
    wr32(0x817fdfe4u, r0);
    wr32(0x817fdfe8u, rd32(r3 + 8u));
    a.r[0] = 0x817fdfe0u;
    a.r[1] = r31 + 0xcf4u;
    a.r[2] = 0x817fdfe0u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfe0u;
    f1 = tc_callf(0x80234440u, &a);
    if (f1 > (f64)rdf32(0x80573aecu)) {
        f0 = (f64)rdf32(0x80573ad8u);
        wrf32d(0x817fdfd0u, f0);
        wrf32d(0x817fdfccu, f0);
        wrf32d(0x817fdfc8u, f0);
        a.r[0] = 0x817fdfe0u;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdfc8u);
        a.f[1] = (f64)rdf32(0x817fdfd0u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x80573af0u) < f1) {
            a.f[0] = (f64)rdf32(0x817fdfc8u);
            a.f[1] = (f64)rdf32(0x817fdfd0u);
            f1 = tc_callf(0x80262c68u, &a);
            r4 = tc_lastr4();
            f1 = (f64)(f32)f1;
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573ae8u));
        } else {
            a.f[0] = (f64)rdf32(0x817fdfc8u);
            a.f[1] = (f64)rdf32(0x817fdfd0u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x80573af4u);
            if ((f0 > f1) || (f0 == f1)) {
                a.f[0] = (f64)rdf32(0x817fdfc8u);
                a.f[1] = (f64)rdf32(0x817fdfd0u);
                f1 = tc_callf(0x80262c68u, &a);
                r4 = tc_lastr4();
                f1 = (f64)(f32)f1;
                f1 = (f64)(f32)((f64)rdf32(0x80573ae8u) + f1);
            } else {
                a.f[0] = (f64)rdf32(0x817fdfc8u);
                a.f[1] = (f64)rdf32(0x817fdfd0u);
                f1 = tc_callf(0x80262c68u, &a);
                r4 = tc_lastr4();
                f1 = (f64)(f32)f1;
            }
        }
        r3 = rd32((u32)param_2 + 0x18u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(r3) + 0x24u), &a);
        r5 = rd32((u32)param_2 + 0x18u);
        wr32(0x817fdfd4u, rd32(0x804890c8u));
        r0 = rd32(0x804890d0u);
        wr32(0x817fdfd8u, rd32(0x804890ccu));
        f0 = (f64)rdf32(0x817fdfd4u);
        wr32(0x817fdfdcu, r0);
        f1 = (f64)rdf32(0x817fdfd8u);
        wrf32d(r5 + 0xd18u, f0);
        f0 = (f64)rdf32(0x817fdfdcu);
        wrf32d(r5 + 0xd1cu, f1);
        wrf32d(r5 + 0xd20u, f0);
    }
    f0 = (f64)rdf32(0x80573ad8u);
    wrf32d(param_1, f0);
    wrf32d(param_1 + 4u, f0);
    wrf32d(param_1 + 8u, f0);
    return;
}
