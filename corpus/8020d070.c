#include "tc_rt.h"

void fn_8020d070(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r0 = rd32(param_1 + 0x94u);
    if (r0 == 0u) {
        f1 = (f64)rdf32(0x805767d8u);
        r5 = rd32(0x804890d8u);
        r0 = rd32(0x804890dcu);
        wr32(0x817fdfd8u, rd32(0x804890d4u));
        wr32(0x817fdfdcu, r5);
        wr32(0x817fdfe0u, r0);
        a.f[0] = f1;
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfd8u;
        f1 = tc_callf(0x802343c8u, &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfe4u, rd32(r3));
        wr32(0x817fdfe8u, r0);
        wr32(0x817fdfecu, rd32(r3 + 8u));
        a.r[0] = 0x817fdfe4u;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 0x817fdfe4u;
        (void)tc_call(0x80234380u, &a);
        f0 = (f64)rdf32(0x805767dcu);
        wrf32d(param_2, (f64)rdf32(0x817fdfe4u));
        f1 = (f64)rdf32(0x817fdfe8u);
        wrf32d(param_2 + 4u, f1);
        f0 = (f64)(f32)(f1 + f0);
        wrf32d(param_2 + 8u, (f64)rdf32(0x817fdfecu));
        wrf32d(param_2 + 4u, f0);
    } else {
        a.r[0] = r0;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r0) + 0x28u), &a);
        wrf32d(param_2, (f64)rdf32(r3));
        f1 = (f64)rdf32(r3 + 4u);
        wrf32d(param_2 + 4u, f1);
        wrf32d(param_2 + 8u, (f64)rdf32(r3 + 8u));
        wrf32d(param_2 + 4u, (f64)(f32)(f1 + (f64)rdf32(rd32(param_1 + 0x94u) + 0xb4u)));
    }
    return;
}
