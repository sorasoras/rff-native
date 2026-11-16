#include "tc_rt.h"

void fn_801dff78(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x801ddb58u, &a);
    f1 = tc_lastf();
    r31 = r3;
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    a.r[0] = r3;
    a.r[1] = r31;
    (void)tc_call(0x801dc338u, &a);
    return;
}
