#include "tc_rt.h"

void fn_8014200c(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x80141ff8u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = rd32(param_1);
        a.r[0] = r3;
        a.r[1] = rd32(param_1 + 0x1cu);
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x4cu), &a);
    } else {
        r3 = rd32(param_1);
        a.r[0] = r3;
        a.r[1] = rd32(param_1 + 0x1cu);
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x4cu), &a);
        r3 = rd32(param_1);
        a.r[0] = r3;
        a.r[1] = param_1 + 4u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x1cu), &a);
        r3 = rd32(param_1);
        wrf32d(r3 + 0x10u, (f64)rdf32(param_1 + 0x10u));
        wrf32d(r3 + 0x14u, (f64)rdf32(param_1 + 0x14u));
        wrf32d(r3 + 0x18u, (f64)rdf32(param_1 + 0x18u));
    }
    return;
}
