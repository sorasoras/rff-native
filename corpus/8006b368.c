#include "tc_rt.h"

void fn_8006b368(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    r6 = rd32(param_2 + 4u);
    r0 = rd32(param_2 + 8u);
    wr32(0x817fdfe4u, rd32(param_2));
    wr32(0x817fdfe8u, r6);
    wr32(0x817fdfecu, r0);
    a.r[0] = 0x817fdfe4u;
    a.r[1] = r3;
    a.r[2] = 0x817fdfe4u;
    (void)tc_call(0x802343a4u, &a);
    wrf32d(0x817fdfe8u, (f64)rdf32(0x805725d8u));
    a.r[0] = 0x817fdfe4u;
    f1 = tc_callf(0x80234440u, &a);
    if (f1 < (f64)rdf32(0x805726b4u)) {
        f1 = (f64)rdf32(0x804890d8u);
        f0 = (f64)rdf32(0x804890dcu);
        wrf32d(0x817fdfe4u, (f64)rdf32(0x804890d4u));
        wrf32d(0x817fdfe8u, f1);
        wrf32d(0x817fdfecu, f0);
    } else {
        f1 = (f64)rdf32(0x805725d8u);
        r0 = 0u;
        if ((f1 == (f64)rdf32(0x817fdfe4u) && f1 == (f64)rdf32(0x817fdfe8u)) && f1 == (f64)rdf32(0x817fdfecu)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfe4u;
            a.r[1] = 0x817fdfe4u;
            (void)tc_call(0x802343e4u, &a);
        }
    }
    f2 = (f64)rdf32(param_2 + 4u);
    f1 = (f64)rdf32(param_2 + 8u);
    wrf32d(param_1 + 0x95cu, (f64)rdf32(param_2));
    f0 = (f64)rdf32(0x805725d8u);
    wrf32d(param_1 + 0x960u, f2);
    wrf32d(param_1 + 0x964u, f1);
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    a.r[0] = 0x817fdfe4u;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x802343e4u, &a);
    a.f[0] = (f64)rdf32(0x817fdfd8u);
    a.f[1] = (f64)rdf32(0x817fdfe0u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if ((f64)rdf32(0x805725e4u) < f1) {
        a.f[0] = (f64)rdf32(0x817fdfd8u);
        a.f[1] = (f64)rdf32(0x817fdfe0u);
        f1 = tc_callf(0x80262c68u, &a);
        r4 = tc_lastr4();
        f1 = (f64)(f32)f1;
        f0 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
    } else {
        a.f[0] = (f64)rdf32(0x817fdfd8u);
        a.f[1] = (f64)rdf32(0x817fdfe0u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x805725ecu);
        if ((f0 > f1) || (f0 == f1)) {
            a.f[0] = (f64)rdf32(0x817fdfd8u);
            a.f[1] = (f64)rdf32(0x817fdfe0u);
            f1 = tc_callf(0x80262c68u, &a);
            r4 = tc_lastr4();
            f1 = (f64)(f32)f1;
            f0 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
        } else {
            a.f[0] = (f64)rdf32(0x817fdfd8u);
            a.f[1] = (f64)rdf32(0x817fdfe0u);
            f1 = tc_callf(0x80262c68u, &a);
            r4 = tc_lastr4();
            f0 = (f64)(f32)f1;
        }
    }
    wrf32d(param_1 + 0x968u, f0);
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    f1 = (f64)(f32)((f64)rdf32(param_1 + 0x968u) - f1);
    a.f[0] = f1;
    f1 = tc_callf(0x8006b53cu, &a);
    wrf32d(param_1 + 0x96cu, f1);
    return;
}
