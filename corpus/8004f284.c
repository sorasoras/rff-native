#include "tc_rt.h"

void fn_8004f284(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x802f08ccu, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = param_1;
    (void)tc_call(0x802f13f4u, &a);
    r3 = tc_call(0x802f08ccu, &a);
    a.r[0] = r3;
    a.r[1] = 1u;
    a.r[2] = param_1;
    (void)tc_call(0x802f13f4u, &a);
    r3 = tc_call(0x802f08ccu, &a);
    a.r[0] = r3;
    a.r[1] = 2u;
    a.r[2] = param_1;
    f1 = tc_callf(0x802f13f4u, &a);
    r4 = tc_lastr4();
    r12 = rd32(0x803c6e04u);
    if (r12 != 0u) {
        a.r[0] = rd32(0x803c6e08u);
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    return;
}
