#include "tc_rt.h"

u32 fn_801d5ad0(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801d55f8u, &a);
    r31 = r3;
    a.r[0] = rd32((u32)param_1 + 8u);
    f1 = tc_callf(0x801d4dc8u, &a);
    f0 = (f64)rdf32(r31 + 0x64u);
    if ((f1 < f0) || (f1 == f0)) {
        r3 = 0u;
    } else {
        f0 = (f64)rdf32(r31 + 0x68u);
        if ((f1 < f0) || (f1 == f0)) {
            r3 = 1u;
        } else {
            f0 = (f64)rdf32(r31 + 0x6cu);
            if ((f1 < f0) || (f1 == f0)) {
                r3 = 2u;
            } else {
                r3 = 3u;
            }
        }
    }
    return r3;
}
