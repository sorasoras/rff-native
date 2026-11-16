#include "tc_rt.h"

void fn_80079e00(s32 param_1, u32 param_2, s32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdfe8u, (u32)param_3 - 1u);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = param_2;
    a.r[3] = 0u;
    (void)tc_call(0x80276528u, &a);
    wr16((u32)param_1 + ((rd32(0x817fdfe8u) << 1u) & 0xfffffffeu), 0u);
    return;
}
