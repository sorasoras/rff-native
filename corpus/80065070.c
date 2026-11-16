#include "tc_rt.h"

u32 fn_80065070(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f1 = (f64)rdf32(0x805725a8u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r0 = rd32(param_1 + 0x7cu);
    wr32(0x817fdfd8u, rd32(param_1 + 0x78u));
    wr32(0x817fdfdcu, r0);
    wr32(0x817fdfe0u, rd32(param_1 + 0x80u));
    a.f[0] = f1;
    a.r[0] = 0x817fdfd8u;
    a.r[1] = 0x817fdfd8u;
    f1 = tc_callf(0x802343c8u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfe4u, rd32(r3));
    wr32(0x817fdfe8u, r0);
    wr32(0x817fdfecu, rd32(r3 + 8u));
    a.r[0] = 0x817fdfe4u;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = 0x817fdfe4u;
    (void)tc_call(0x80234380u, &a);
    f0 = (f64)rdf32(0x805725acu);
    wrf32d(param_2, (f64)rdf32(0x817fdfe4u));
    f2 = (f64)rdf32(0x817fdfe8u);
    wrf32d(param_2 + 4u, f2);
    wrf32d(param_2 + 8u, (f64)rdf32(0x817fdfecu));
    f0 = (f64)(f32)((f64)rdf32(param_1 + 0xb4u) - f0);
    f0 = (f64)(f32)(f2 + f0);
    wrf32d(param_2 + 4u, f0);
    return rd32(0x8057118cu) & 2u;
}
