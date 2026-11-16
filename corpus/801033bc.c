#include "tc_rt.h"

void fn_801033bc(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0x8033930eu;
    a.r[2] = 0x80339308u;
    a.r[3] = param_3;
    a.r[4] = 0x80340000u;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x8025b994u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfc8u;
    (void)tc_call(0x80103254u, &a);
    return;
}
