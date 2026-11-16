#include "tc_rt.h"

void fn_801e090c(u32 param_1)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    do {
        r3 = rd32(r3);
        f1 = (f64)rdf32(0x80576208u);
        r12 = rd32(r3);
        r12 = rd32(r12 + 0x54u);
    } while (r12 == 0x801e090cu);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = 0x1au;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
