#include "tc_rt.h"

void fn_80050e70(u32 param_1, u32 param_2, u32 param_3, u32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    TcArgs a = {0};
    r10 = param_r10;
    r9 = param_r9;
    if (param_4 != 0u) {
        r8 = 0x803d0000u;
        r11 = rd32(param_4 + 0xcu);
        r10 = rd32(param_4 + 8u);
        r9 = rd32(param_4 + 4u);
        wr32(0x803c8640u, rd32(param_4));
        wr32(0x803c8644u, r9);
        wr32(0x803c8648u, r10);
        wr32(0x803c864cu, r11);
    } else {
        r8 = 0u;
        wr32(0x803c8640u, 0u);
        wr32(0x803c8644u, 0xffffffffu);
        wr32(0x803c8648u, 0u);
        wr32(0x803c864cu, 0u);
    }
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = param_2;
    a.r[3] = param_3;
    a.r[4] = param_4;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    (void)tc_call(0x80050f04u, &a);
    return;
}
