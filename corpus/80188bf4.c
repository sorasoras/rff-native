#include "tc_rt.h"

void fn_80188bf4(s32 param_1, s32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x80161ac4u, &a);
    wr16((u32)param_1 + 0xfcu, 0x2e8u);
    wr8((u32)param_1 + 0xfeu, 0u);
    wr8((u32)param_1 + 0xffu, 0u);
    a.r[0] = (u32)param_1 + 0xfcu;
    a.r[1] = (u32)param_2 + 0xbcu;
    a.r[2] = 4u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x80161a60u, &a);
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x80188b74u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80188b34u, &a);
    wr32((u32)param_1 + 0x3e0u, 1u);
    wr32((u32)param_1 + 0x3dcu, (u32)rd8((u32)param_2 + 0xbeu));
    return;
}
