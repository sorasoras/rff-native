#include "tc_rt.h"

void fn_801bfa04(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x800510acu, &a);
    r31 = r3;
    a.r[0] = 2u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = r31;
    r3 = tc_call(0x801b39d8u, &a);
    f1 = tc_lastf();
    r31 = r3;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    a.r[7] = 0u;
    (void)tc_call(0x80050da4u, &a);
    a.r[0] = r31;
    (void)tc_call(0x801ec238u, &a);
    r0 = ((u32)param_1 << 3u) & 0xfffffff8u;
    wr32(r0 - 0x7fb239f8u, r31);
    wr32(r0 - 0x7fb239f4u, param_2);
    return;
}
