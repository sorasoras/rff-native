#include "tc_rt.h"

u32 fn_80146bd0(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x802550d4u, &a);
    f1 = tc_lastf();
    if (r3 > 0x40u) {
        r3 = 0u;
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0xd04u;
        a.r[1] = param_2;
        a.r[2] = 0x41u;
        (void)tc_call(0x80079e00u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_1 + 0xd04u;
        a.r[2] = param_3;
        a.r[3] = param_4;
        a.r[4] = param_5;
        a.r[5] = param_6;
        a.r[6] = param_7;
        a.r[7] = param_8;
        r3 = tc_call(0x80146c60u, &a);
    }
    return r3;
}
