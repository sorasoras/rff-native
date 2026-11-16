#include "tc_rt.h"

void fn_800a9704(f64 param_1, f64 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_3 + 0x1a4u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = param_4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = param_1;
        a.f[1] = param_2;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r0) + 0x28u), &a);
        f1 = tc_lastf();
        wrf32d(param_3 + 0x188u, (f64)rdf32(0x80572b78u));
        a.r[0] = param_3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        f1 = tc_callf(rd32(rd32(param_3) + 0x2cu), &a);
        a.f[0] = param_2;
        a.f[1] = f1;
        a.f[2] = param_1;
        a.f[3] = (f64)rdf32(0x80572ba0u);
        a.r[0] = param_3;
        a.r[1] = param_4;
        a.r[2] = r3;
        a.r[3] = 9u;
        (void)tc_call(0x800a9298u, &a);
    }
    return;
}
