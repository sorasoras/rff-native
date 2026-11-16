#include "tc_rt.h"

void fn_802df9fc(s32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 r5 = 0, r6 = 0, r8 = 0;
    TcArgs a = {0};
    r5 = param_3;
    r6 = rd32((u32)param_1 + 0x18u);
    r8 = rd32((u32)param_1 + 0x14u);
    if (((r6 + param_3 + 0x1fu) & 0xffffffe0u) > ((r8 + 0x1fu) & 0xffffffe0u)) {
        r5 = (r8 - r6 + 0x1fu) & 0xffffffe0u;
    }
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = (u32)param_1 + 0x28u;
    a.r[1] = param_2;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = rd32((u32)param_1 + 0x68u);
    a.r[5] = r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x80234ea0u, &a);
    return;
}
