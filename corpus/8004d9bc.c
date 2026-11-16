#include "tc_rt.h"

void fn_8004d9bc(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r7 = 0;
    TcArgs a = {0};
    r7 = (u32)param_2;
    if ((u32)param_2 == 0u) {
        r3 = tc_call(0x8004d970u, &a);
        r7 = r3;
    }
    a.f[0] = (f64)rdf32(param_3);
    a.f[1] = (f64)rdf32(param_3 + 4u);
    a.f[2] = (f64)rdf32(param_3 + 8u);
    a.r[0] = r7 + 0x28u;
    a.r[1] = r7 + 0x100u;
    a.r[2] = r7 + 0x11cu;
    a.r[3] = (u32)param_1;
    a.r[4] = (u32)param_1 + 4u;
    a.r[5] = (u32)param_1 + 8u;
    (void)tc_call(0x802541e4u, &a);
    return;
}
