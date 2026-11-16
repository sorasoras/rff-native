#include "tc_rt.h"

void fn_801a2310(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfd0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80575868u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wrf32d(0x817fdfd8u, f0);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfe4u, f0);
    wr8(0x817fdfecu, 0u);
    wr8(0x817fdfedu, 0u);
    wrf32d(0x817fdfd8u, (f64)rdf32(param_2));
    wrf32d(0x817fdfdcu, (f64)rdf32(param_2 + 4u));
    wrf32d(0x817fdfe0u, (f64)rdf32(param_2 + 8u));
    a.r[0] = 0x4fu;
    a.r[1] = 0u;
    a.r[2] = 0x817fdfd8u;
    a.r[3] = 0u;
    r3 = tc_call(0x800eb4f0u, &a);
    r30 = r3;
    a.r[0] = 0x8046ad74u;
    a.r[1] = r3;
    (void)tc_call(0x8007b03cu, &a);
    wrf32d(r30 + 0x16d8u, (f64)rdf32(param_3));
    wrf32d(r30 + 0x16dcu, (f64)rdf32(param_3 + 4u));
    wrf32d(r30 + 0x16e0u, (f64)rdf32(param_3 + 8u));
    wr32(r30 + 0x15cu, rd32(0x8046ad78u));
    return;
}
