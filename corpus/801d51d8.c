#include "tc_rt.h"

void fn_801d51d8(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r4, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x801d53a0u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r0 = rd32((u32)param_1 + 0xcu);
    r31 = r3;
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = r4;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        f1 = tc_callf(rd32(rd32(r0 + 0x74u) + 0x14u), &a);
        r4 = tc_lastr4();
    }
    wr32((u32)param_1 + 0xcu, r31);
    a.r[0] = r31;
    a.r[1] = r4;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    (void)tc_call(rd32(rd32(r31 + 0x74u) + 0xcu), &a);
    return;
}
