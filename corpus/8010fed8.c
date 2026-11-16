#include "tc_rt.h"

f64 fn_8010fed8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r3 = tc_call(0x800a7854u, &a);
    r8 = rd32(r3 + 0x7cu);
    r7 = rd32(r3 + 0x80u);
    f0 = (f64)rdf32(0x80574124u);
    wr32(0x817fdfecu, rd32(r3 + 0x78u));
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfe4u, f0);
    wrf32d(0x817fdfe0u, f0);
    r6 = rd32(param_1);
    r0 = rd32(param_1 + 4u);
    wr32(0x817fdff0u, r8);
    wr32(0x817fdfd4u, r6);
    wr32(0x817fdfd8u, r0);
    r0 = rd32(param_1 + 8u);
    wr32(0x817fdff4u, r7);
    wr32(0x817fdfdcu, r0);
    r0 = rd32(param_2 + 4u);
    wr32(0x817fdfc8u, rd32(param_2));
    wr32(0x817fdfccu, r0);
    wr32(0x817fdfd0u, rd32(param_2 + 8u));
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0x817fdfd4u;
    a.r[2] = 0x817fdfc8u;
    (void)tc_call(0x802343a4u, &a);
    f3 = (f64)rdf32(0x817fdfc8u);
    r0 = 0u;
    f0 = (f64)rdf32(0x80574124u);
    f2 = (f64)rdf32(0x817fdfccu);
    f1 = (f64)rdf32(0x817fdfd0u);
    wrf32d(0x817fdfe0u, f3);
    wrf32d(0x817fdfe4u, f2);
    wrf32d(0x817fdfe8u, f1);
    if ((f0 == f3 && f0 == f2) && f0 == f1) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = 0x817fdfe0u;
        a.r[1] = 0x817fdfe0u;
        (void)tc_call(0x802343e4u, &a);
    }
    return ppc_fmadds((f64)rdf32(0x817fdff4u), (f64)rdf32(0x817fdfe8u), ppc_fmadds((f64)rdf32(0x817fdfecu), (f64)rdf32(0x817fdfe0u), (f64)(f32)((f64)rdf32(0x817fdff0u) * (f64)rdf32(0x817fdfe4u))));
}
