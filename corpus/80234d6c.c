#include "tc_rt.h"

u32 fn_80234d6c(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = param_r3;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x8023456cu, &a);
    if ((s32)r3 < 0 || (rd32(rd32(0x805715b0u) + (r3 * 0xcu)) & 0xff000000u) == 0u) {
        r3 = 0u;
    } else {
        wr32(0x80571598u, r3);
        r3 = 1u;
    }
    return r3;
}
