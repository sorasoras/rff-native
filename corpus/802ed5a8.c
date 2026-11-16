#include "tc_rt.h"

void fn_802ed5a8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    r4 = param_2;
    do {
        r12 = rd32(r4);
        r0 = r3;
        r3 = r4;
        r12 = rd32(r12 + 0x18u);
        r4 = r0;
    } while (r12 == 0x802ed5a8u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = r0;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
