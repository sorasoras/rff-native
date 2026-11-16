#include "tc_rt.h"

void fn_800bfe00(u32 param_1)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    do {
        r12 = rd32(param_1);
        f1 = (f64)rdf32(0x80572e78u);
        r12 = rd32(r12 + 0x54u);
    } while (r12 == 0x800bfe00u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = 0x39u;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.f[0] = f1;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
