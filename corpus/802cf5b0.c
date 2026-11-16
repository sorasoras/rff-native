#include "tc_rt.h"

void fn_802cf5b0(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x58u) + ((param_2 << 5u) & 0x1fe0u);
    a.r[0] = r31;
    r3 = tc_call(0x80252590u, &a);
    r30 = r3;
    a.r[0] = r31;
    r3 = tc_call(0x8025259cu, &a);
    f1 = tc_lastf();
    r29 = r3;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r31;
    a.r[1] = param_3;
    a.r[2] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x802cc3d0u, &a);
    a.r[0] = r31;
    a.r[1] = r30;
    a.r[2] = r29;
    (void)tc_call(0x80252494u, &a);
    return;
}
