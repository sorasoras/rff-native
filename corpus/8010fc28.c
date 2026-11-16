#include "tc_rt.h"

void fn_8010fc28(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7854u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        f0 = (f64)rdf32(0x80574124u);
        wrf32d(param_1, (f64)rdf32(r3));
        wrf32d(param_1 + 4u, (f64)rdf32(r3 + 4u));
        wrf32d(param_1 + 8u, (f64)rdf32(r3 + 8u));
        wrf32d(param_1 + 4u, f0);
    }
    return;
}
