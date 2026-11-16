#include "tc_rt.h"

void fn_8032023c(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    f2 = (f64)rdf32(param_1);
    wr32(0x817fe004u, 0x817ff000u);
    f1 = (f64)rdf32(param_1 + 0x10u);
    wr32(0x817fdffcu, 0u);
    f0 = (f64)rdf32(param_1 + 0x20u);
    wr32(0x817fdff8u, 0u);
    wrf32d(0x817fdfe0u, f2);
    wrf32d(0x817fdfe4u, f1);
    wrf32d(0x817fdfe8u, f0);
    a.r[0] = 0x817fdfe0u;
    a.r[1] = 0x817fdfe0u;
    r3 = tc_call(0x80320984u, &a);
    if (r3 == 0u) {
        wrf32d(0x817fdfe0u, (f64)rdf32(0x805779c0u));
    }
    f1 = (f64)rdf32(param_1 + 0x14u);
    f0 = (f64)rdf32(param_1 + 0x24u);
    wrf32d(0x817fdfd4u, (f64)rdf32(param_1 + 4u));
    wrf32d(0x817fdfd8u, f1);
    wrf32d(0x817fdfdcu, f0);
    a.r[0] = 0x817fdfd4u;
    a.r[1] = 0x817fdfd4u;
    r3 = tc_call(0x80320984u, &a);
    if (r3 == 0u) {
        wrf32d(0x817fdfd8u, (f64)rdf32(0x805779c0u));
    }
    a.r[0] = 0x817fdfe0u;
    a.r[1] = 0x817fdfd4u;
    a.r[2] = 0x817fdfc8u;
    (void)tc_call(0x80234484u, &a);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0x817fdfe0u;
    a.r[2] = 0x817fdfd4u;
    (void)tc_call(0x80234484u, &a);
    f0 = (f64)rdf32(0x805779bcu);
    wrf32d(param_2, (f64)rdf32(0x817fdfe0u));
    wrf32d(param_2 + 0x10u, (f64)rdf32(0x817fdfe4u));
    wrf32d(param_2 + 0x20u, (f64)rdf32(0x817fdfe8u));
    wrf32d(param_2 + 4u, (f64)rdf32(0x817fdfd4u));
    wrf32d(param_2 + 0x14u, (f64)rdf32(0x817fdfd8u));
    wrf32d(param_2 + 0x24u, (f64)rdf32(0x817fdfdcu));
    wrf32d(param_2 + 8u, (f64)rdf32(0x817fdfc8u));
    wrf32d(param_2 + 0x18u, (f64)rdf32(0x817fdfccu));
    wrf32d(param_2 + 0x28u, (f64)rdf32(0x817fdfd0u));
    wrf32d(param_2 + 0xcu, f0);
    wrf32d(param_2 + 0x1cu, f0);
    wrf32d(param_2 + 0x2cu, f0);
    return;
}
