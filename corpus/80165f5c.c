#include "tc_rt.h"

void fn_80165f5c(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r3 = rd32(param_2 + 0x15f4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
    } else {
        r3 = 0u;
    }
    a.r[0] = param_2;
    a.r[1] = r3;
    f1 = tc_callf(0x800b32d0u, &a);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x1f8u), &a);
    a.f[0] = (f64)rdf32(0x80574b98u);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 1u;
    a.r[3] = 1u;
    a.r[4] = 3u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    r3 = rd32(param_2 + 0xf78u);
    wr32(param_2 + 0xf78u, r3 | (r3 ^ 0x10000u));
    return;
}
