#include "tc_rt.h"

void fn_80178d30(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801784a8u, &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80179664u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        f2 = (f64)rdf32(r3);
        wrf32d((u32)param_1 + 0x100u, f2);
        f1 = (f64)rdf32(r3 + 4u);
        wrf32d((u32)param_1 + 0x104u, f1);
        f0 = (f64)rdf32(r3 + 8u);
        wrf32d((u32)param_1 + 0x108u, f0);
        wrf32d((u32)param_1 + 8u, f2);
        wrf32d((u32)param_1 + 0xcu, f1);
        wrf32d((u32)param_1 + 0x10u, f0);
    }
    return;
}
