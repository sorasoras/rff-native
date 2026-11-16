#include "tc_rt.h"

void fn_801e64d0(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801e635cu, &a);
    f1 = tc_lastf();
    if (r3 != 0u && rd32((u32)param_1 + 0x6cu) != 0u) {
        if (rd32((u32)param_1 + 0x70u) == 1u) {
            a.r[0] = (u32)param_1 + 8u;
            f1 = tc_callf(0x801f10a4u, &a);
        }
        r31 = rd32((u32)param_1 + 0x64u);
        if ((s32)r31 >= 0) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32((u32)param_1 + 0x60u);
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x801ebe1cu, &a);
            a.r[0] = r3;
            a.r[1] = r31;
            f1 = tc_callf(0x801ed110u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32((u32)param_1 + 0x60u);
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x801ebe1cu, &a);
            a.r[0] = r3;
            a.r[1] = rd32((u32)param_1 + 0x5cu);
            (void)tc_call(0x801ec6bcu, &a);
        }
        if (rd32((u32)param_1 + 0x70u) == 0u) {
            a.r[0] = (u32)param_1 + 8u;
            (void)tc_call(0x801f10a4u, &a);
        }
    }
    return;
}
