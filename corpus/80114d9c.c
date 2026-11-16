#include "tc_rt.h"

void fn_80114d9c(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 r7 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r7 = rd32(param_1);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 2u;
    a.r[1] = 0x57u;
    a.r[2] = 0x80111314u;
    a.r[3] = 3u;
    a.r[4] = r7;
    a.r[5] = 0x817fdff8u;
    a.r[6] = 0x817fdffcu;
    a.r[7] = param_r10;
    (void)tc_call(0x800a70b0u, &a);
    return;
}
