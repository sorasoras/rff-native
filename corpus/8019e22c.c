#include "tc_rt.h"

void fn_8019e22c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x47u;
    r3 = tc_call(0x8014d9a4u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 1u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x68u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r7 = rd32(r3);
            f0 = (f64)rdf32(0x805757d0u);
            wr32(0x817fdfecu, rd32(r3 + 4u));
            f1 = (f64)rdf32(0x805757d4u);
            f2 = (f64)rdf32(0x817fdfecu);
            wr32(0x817fdfe8u, r7);
            f0 = (f64)(f32)(f2 + f0);
            wr32(0x817fdff0u, rd32(r3 + 8u));
            wrf32d(0x817fdfecu, f0);
            a.f[0] = f1;
            a.r[0] = 0x42u;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            (void)tc_call(0x800d783cu, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x2716u;
            a.r[2] = 0x817fdfe8u;
            f1 = tc_callf(0x8010a794u, &a);
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x58u), &a);
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x4cu), &a);
        }
    }
    a.r[0] = param_1;
    (void)tc_call(0x8017b81cu, &a);
    return;
}
