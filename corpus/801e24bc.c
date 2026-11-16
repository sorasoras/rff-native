#include "tc_rt.h"

void fn_801e24bc(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801ddae8u, &a);
    a.r[0] = 0x2395u;
    a.r[1] = r3;
    (void)tc_call(0x801dc4b4u, &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801ddae8u, &a);
    a.r[0] = 0x23a0u;
    a.r[1] = r3;
    f1 = tc_callf(0x801dc4b4u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x24u) + 0x28u), &a);
    return;
}
