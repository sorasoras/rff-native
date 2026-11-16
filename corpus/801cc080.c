#include "tc_rt.h"

s32 fn_801cc080(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfd0u, 0x817fe000u);
    f3 = (f64)rdf32(0x80575e68u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    f0 = (f64)rdf32(param_2 + 0x10u);
    if ((f0 < f3) || (f0 == f3)) {
        r3 = 0u;
    } else {
        f0 = (f64)rdf32(0x80575e7cu);
        f1 = (f64)rdf32(0x80575e88u);
        wrf32d(0x817fdfd8u, (f64)rdf32(0x80575e84u));
        wrf32d(0x817fdfdcu, f1);
        wrf32d(0x817fdfe0u, f0);
        wrf32d(0x817fdfe4u, f3);
        wrf32d(0x817fdfe8u, f0);
        wrf32d(0x817fdfd8u, (f64)rdf32(param_2));
        wrf32d(0x817fdfdcu, (f64)rdf32(param_2 + 4u));
        wrf32d(0x817fdfe0u, (f64)rdf32(param_2 + 8u));
        wrf32d(0x817fdfe4u, (f64)rdf32(param_2 + 0xcu));
        wrf32d(0x817fdfe8u, (f64)rdf32(param_2 + 0x10u));
        a.r[0] = param_3;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x802f9f70u, &a);
        a.r[0] = param_3;
        r3 = tc_call(0x802f9e1cu, &a);
        r31 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8004fb4cu, &a);
        f1 = tc_lastf();
        r30 = r3;
        if (r3 != 0u) {
            a.r[0] = param_3;
            a.r[1] = r3;
            a.r[2] = r31;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            (void)tc_call(rd32(rd32(param_3) + 0x1cu), &a);
        }
        r3 = r30;
    }
    return (s32)r3;
}
