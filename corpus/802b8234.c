#include "tc_rt.h"

void fn_802b8234(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, u32 param_9)
{
    u32 r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_9;
    r31 = rd32(0x817fe008u);
    a.r[0] = param_7;
    a.r[1] = param_6;
    f1 = tc_callf(0x80227738u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = param_5;
    a.r[5] = param_6;
    a.r[6] = param_7;
    a.r[7] = param_8;
    a.s[0] = r31;
    (void)tc_call(0x802b7c90u, &a);
    return;
}
