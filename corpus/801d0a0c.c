#include "tc_rt.h"

void fn_801d0a0c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    do {
        r12 = rd32(param_1);
        r4 = rd32(param_1 + 0x38cu);
        r12 = rd32(r12 + 0x54u);
        f1 = (f64)rdf32(0x80575ed4u);
    } while (r12 == 0x801d0a0cu);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.f[0] = f1;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
