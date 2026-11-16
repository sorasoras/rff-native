#include "tc_rt.h"

u32 fn_801d6c5c(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801d5604u, &a);
    r31 = r3;
    if (rd32((u32)param_1 + 0x6cu) == 0u) {
        a.r[0] = (u32)param_1;
        f1 = tc_callf(0x801d5550u, &a);
        if ((f64)rdf32(0x80576060u) == f1) {
            r31 = 1u;
        }
    }
    return r31;
}
