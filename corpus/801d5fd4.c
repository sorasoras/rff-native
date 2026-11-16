#include "tc_rt.h"

u32 fn_801d5fd4(u32 param_1)
{
    u32 r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = param_1;
    f1 = tc_callf(0x801d55d4u, &a);
    if (f1 < (f64)rdf32(0x80576050u)) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_1;
        a.r[1] = 4u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x801d5524u, &a);
        r31 = 1u;
    }
    return r31;
}
