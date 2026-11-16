#include "tc_rt.h"

s32 fn_801cbe6c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfc0u, 0x817fe000u);
    f5 = (f64)rdf32(0x80575e68u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    f0 = (f64)rdf32(param_2 + 0x10u);
    if ((f0 < f5) || (f0 == f5)) {
        r3 = 0u;
    } else {
        f4 = (f64)rdf32(0x80575e6cu);
        f0 = (f64)rdf32(0x80575e7cu);
        f3 = (f64)rdf32(0x80575e70u);
        f2 = (f64)rdf32(0x80575e74u);
        f1 = (f64)rdf32(0x80575e78u);
        wrf32d(0x817fdfc8u, f4);
        wrf32d(0x817fdfccu, f3);
        wrf32d(0x817fdfd0u, f2);
        wrf32d(0x817fdfd4u, f1);
        wrf32d(0x817fdfd8u, f0);
        wr32(0x817fdfdcu, 5u);
        wrf32d(0x817fdfe0u, f4);
        wr32(0x817fdfe4u, 0u);
        wrf32d(0x817fdfe8u, f5);
        wrf32d(0x817fdfecu, f0);
        wrf32d(0x817fdfc8u, (f64)rdf32(param_2));
        wrf32d(0x817fdfccu, (f64)rdf32(param_2 + 4u));
        wrf32d(0x817fdfd0u, (f64)rdf32(param_2 + 8u));
        wrf32d(0x817fdfd4u, (f64)rdf32(param_2 + 0xcu));
        wrf32d(0x817fdfd8u, (f64)rdf32(param_2 + 0x10u));
        wr32(0x817fdfdcu, rd32(param_2 + 0x14u));
        wrf32d(0x817fdfe0u, (f64)rdf32(param_2 + 0x18u));
        wr32(0x817fdfe4u, rd32(param_2 + 0x1cu));
        wrf32d(0x817fdfe8u, (f64)rdf32(param_2 + 0x20u));
        wrf32d(0x817fdfecu, (f64)rdf32(param_2 + 0x24u));
        a.r[0] = param_3;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x802fa7a8u, &a);
        a.r[0] = param_3;
        r3 = tc_call(0x802fa654u, &a);
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
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            (void)tc_call(rd32(rd32(param_3) + 0x1cu), &a);
        }
        r3 = r30;
    }
    return (s32)r3;
}
