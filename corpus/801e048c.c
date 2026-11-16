#include "tc_rt.h"

void fn_801e048c(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(param_2, param_1);
    r4 = rd32(param_1 + 0xd0cu);
    if (r4 != 0u) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(param_2 + 0x24u) + 0x14u), &a);
        r3 = rd32(param_1 + 0xd0cu);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 0x24u) + 0x10u), &a);
        r3 = rd32(param_1 + 0xd0cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x24u) + 8u), &a);
        }
    }
    a.r[0] = param_2;
    f1 = tc_callf(0x801dd8bcu, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    wrf32d(param_2 + 4u, (f64)rdf32(r3));
    wrf32d(param_2 + 8u, (f64)rdf32(r3 + 4u));
    wrf32d(param_2 + 0xcu, (f64)rdf32(r3 + 8u));
    wr32(param_1 + 0xd0cu, param_2);
    return;
}
