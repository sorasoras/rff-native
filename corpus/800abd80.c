#include "tc_rt.h"

void fn_800abd80(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7854u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        wrf32d((u32)param_1 + 0x74u, (f64)rdf32(r3));
        wrf32d((u32)param_1 + 0x78u, (f64)rdf32(r3 + 4u));
        wrf32d((u32)param_1 + 0x7cu, (f64)rdf32(r3 + 8u));
    }
    return;
}
