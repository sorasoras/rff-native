#include "tc_rt.h"

u32 fn_801600dc(u32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    f1 = tc_callf(0x801f02a4u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0xe0u), &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    wrf32d(param_1 + 0x168u, ppc_fmsubs((f64)rdf32(0x80574a84u), f1, (f64)rdf32(0x80574a88u)));
    return 0u;
}
