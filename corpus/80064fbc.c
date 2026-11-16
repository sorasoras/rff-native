#include "tc_rt.h"

void fn_80064fbc(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    f4 = (f64)rdf32(0x805725a4u);
    wr32(0x817fdfe8u, rd32(r3));
    f1 = (f64)rdf32(0x80572560u);
    wr32(0x817fdfecu, r0);
    f0 = (f64)rdf32(0x817fdfe8u);
    f2 = (f64)rdf32(0x817fdfecu);
    wr32(0x817fdff0u, rd32(r3 + 8u));
    f3 = (f64)(f32)(f2 + f4);
    f2 = (f64)rdf32(0x817fdff0u);
    wrf32d(0x803d26acu, f0);
    f0 = (f64)(f32)(f2 + f4);
    wrf32d(0x817fdfecu, f3);
    wrf32d(0x817fdff0u, f0);
    wrf32d(0x803d26b0u, f3);
    wrf32d(0x803d26b4u, f0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x802343c8u, &a);
    f1 = (f64)rdf32(0x817fdfecu);
    f0 = (f64)rdf32(0x817fdff0u);
    wrf32d(0x803d2734u, (f64)rdf32(0x817fdfe8u));
    wrf32d(0x803d2738u, f1);
    wrf32d(0x803d273cu, f0);
    a.r[0] = 0x803d2678u;
    a.r[1] = 1u;
    (void)tc_call(0x8005768cu, &a);
    return;
}
